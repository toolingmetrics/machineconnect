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

void temp_changed(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("temp_changed was called\n");
}
/**********************
 *   STATIC FUNCTIONS
 **********************/