/**
 * @file network_controller.c
 * @description Controller for managing network settings and scanning for Wi-Fi networks.
 */

#include "network_controller.h"

/**********************
 * GLOBAL PROTOTYPES
 **********************/

// Forward declaration for the cleanup function

/**
 * @brief Checks if Wi-Fi is enabled on the system using nmcli.
 *
 * This function executes the "nmcli radio wifi" command to determine
 * whether Wi-Fi is currently enabled. It parses the command output and
 * returns true if Wi-Fi is enabled, or false otherwise (including on error).
 *
 * @return true if Wi-Fi is enabled, false otherwise.
 */
bool is_wifi_enabled()
{
    FILE * fp;
    char result[32];

    // Run the nmcli command
    fp = popen("nmcli radio wifi", "r");
    if(fp == NULL) {
        perror("Failed to run nmcli");
        return false; // Assume disabled on error
    }

    // Read the output
    if(fgets(result, sizeof(result), fp) == NULL) {
        pclose(fp);
        return false; // No output, assume disabled
    }

    pclose(fp);

    // Remove newline character if any
    result[strcspn(result, "\n")] = 0;

    // Compare result
    return strcmp(result, "enabled") == 0;
}

/**
 * @brief Scans for and returns a list of Wi-Fi SSIDs.
 *
 * This function executes 'nmcli' to get a list of SSIDs. It dynamically
 * allocates an array of strings to hold the SSIDs. The caller is responsible
 * for freeing this memory using the free_ssid_list() function.
 *
 * @param ssid_count A pointer to an integer that will be updated with the number of SSIDs found.
 * @return A dynamically allocated array of strings (char**). Returns NULL on failure.
 */
char ** get_wifi_ssids(int * ssid_count)
{
    FILE * pipe;
    char buffer[1024];
    char ** ssid_list = NULL;
    int count         = 0;

    // Rescan for networks
    system("nmcli dev wifi rescan > /dev/null 2>&1");

    // Execute the nmcli command and open a pipe to read its output.
    pipe = popen("nmcli --terse --fields SSID dev wifi list", "r");
    if(!pipe) {
        fprintf(stderr, "Error: Could not execute nmcli command.\n");
        *ssid_count = 0;
        return NULL;
    }

    // Read the output line by line
    while(fgets(buffer, sizeof(buffer), pipe) != NULL) {
        // Skip empty or invalid lines.
        if(strlen(buffer) <= 1) {
            continue;
        }

        // Remove the trailing newline character
        buffer[strcspn(buffer, "\n")] = 0;

        // Reallocate the array of pointers to make space for the new SSID
        char ** temp = realloc(ssid_list, (count + 1) * sizeof(char *));
        if(temp == NULL) {
            fprintf(stderr, "Error: Memory reallocation failed.\n");
            free_ssid_list(ssid_list, count);
            pclose(pipe);
            *ssid_count = 0;
            return NULL;
        }
        ssid_list = temp;

        // Allocate memory for the new SSID string and copy it
        ssid_list[count] = malloc(strlen(buffer) + 1);
        if(ssid_list[count] == NULL) {
            fprintf(stderr, "Error: Memory allocation failed for SSID string.\n");
            free_ssid_list(ssid_list, count);
            pclose(pipe);
            *ssid_count = 0;
            return NULL;
        }
        strcpy(ssid_list[count], buffer);
        count++;
    }

    pclose(pipe);
    *ssid_count = count;
    return ssid_list;
}

/**
 * @brief Frees the memory allocated for the SSID list.
 *
 * @param ssid_list The array of SSID strings.
 * @param count The number of elements in the array.
 */
void free_ssid_list(char ** ssid_list, int count)
{
    if(ssid_list == NULL) {
        return;
    }
    for(int i = 0; i < count; i++) {
        free(ssid_list[i]); // Free each individual string
    }
    free(ssid_list); // Free the array of pointers
}
