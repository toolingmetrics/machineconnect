/**
 * @file views.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "views.h"
#include <time.h>

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

void time_update_system_item_cb(lv_timer_t * timer)
{
   time_t rawtime;
   struct tm * timeinfo;

   time(&rawtime);
   timeinfo = localtime(&rawtime);
   // Update the subjects with the new time.
   lv_subject_set_int(&subject_hours, timeinfo->tm_hour);
   lv_subject_set_int(&subject_mins, timeinfo->tm_min);
}

/**********************
 *   STATIC FUNCTIONS
 **********************/