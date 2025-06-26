/**
 * @file views.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "views.h"

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

/**********************
 *   STATIC FUNCTIONS
 **********************/