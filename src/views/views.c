/**
 * @file views.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "views.h"
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void views_init(const char * asset_path)
{
    views_init_gen(asset_path);
}

void tool_load(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_load was called\n");
}

void tool_unload(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_unload was called\n");
}

void tool_exchange(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_exchange was called\n");
}

void tool_data(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_data was called\n");
}

void setup_assistant(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("setup_assistant was called\n");
}

void system_settings(lv_event_t * e)
{
   lv_scr_load_anim(settings_screen_create(), LV_SCR_LOAD_ANIM_FADE_ON, 300, 0, false);
}

void back_main_screen(lv_event_t * e)
{
    lv_scr_load_anim(main_screen, LV_SCR_LOAD_ANIM_FADE_OUT, 300, 0, true);
}

void update_system_status(lv_timer_t *timer)
{
   time_t rawtime;
   struct tm *timeinfo;

   time(&rawtime);
   timeinfo = localtime(&rawtime);

   lv_subject_snprintf(&subject_system_time,
      "%02d:%02d",
      timeinfo->tm_hour,
      timeinfo->tm_min);

   lv_subject_set_int(&subject_wifi_on, check_wifi_status());
   lv_subject_set_int(&subject_bluetooth_on, check_bluetooth_status());
   lv_subject_set_int(&subject_ethernet_on, 0);
   lv_subject_set_int(&subject_nfc_on, -1);
}

lv_obj_t * get_child_by_name(lv_obj_t * parent, const char * name)
{
    if(!parent || !name) return NULL;

    uint32_t i       = 0;
    lv_obj_t * child = NULL;
    while((child = lv_obj_get_child(parent, i)) != NULL) {
        const char * child_name = lv_obj_get_name(child);
        if(child_name && strcmp(child_name, name) == 0) {
            return child;
        }
        i++;
    }

    return NULL;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
bool has_ip_address(const char *iface)
{
    char cmd[128];
    snprintf(cmd, sizeof(cmd), "ip addr show %s | grep 'inet '", iface);

    FILE *fp = popen(cmd, "r");
    if (!fp) return false;

    char buffer[256];
    bool found = false;
    while (fgets(buffer, sizeof(buffer), fp)) {
        if (strstr(buffer, "inet")) {
            found = true;
            break;
        }
    }
    pclose(fp);
    return found;
}

int check_wifi_status(void)
{
    DIR *dir = opendir("/sys/class/net");
    if (!dir) return -1;

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (entry->d_name[0] == '.') continue;

        char wireless_path[280];
        snprintf(wireless_path, sizeof(wireless_path), "/sys/class/net/%s/wireless", entry->d_name);

        // Check if wireless directory exists
        DIR *wdir = opendir(wireless_path);
        if (wdir) {
            closedir(wdir);
            // It's a wireless interface; check for IP
            if (has_ip_address(entry->d_name)) {
                closedir(dir);
                return 1;
            }
        }
    }

    closedir(dir);
    return 0;
}

int check_bluetooth_status(void)
{
    FILE *fp = popen("hciconfig -a", "r");
    if (!fp) return -1;

    char line[256];
    bool found_hci0 = false;
    bool is_up = false;

    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, "hci0")) {
            found_hci0 = true;
        } else if (strstr(line, "UP RUNNING")) {
            is_up = true;
        }
    }

    pclose(fp);

    if (!found_hci0) return -1;
    return is_up ? 1 : 0;
}
