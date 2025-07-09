/**
 * @file network_controller.h
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
bool is_wifi_enabled(void);
char ** get_wifi_ssids(int * ssid_count);
void free_ssid_list(char ** ssid_list, int count);
