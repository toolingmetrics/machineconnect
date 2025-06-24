/**
 * @file thermostat_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "thermostat_gen.h"
#include "ui.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/***********************
 *  STATIC VARIABLES
 **********************/

/***********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * thermostat_create(lv_obj_t * parent, lv_subject_t * temp)
{
    LV_TRACE_OBJ_CREATE("begin");


    lv_obj_t * lv_arc_1 = lv_arc_create(parent);
        
    lv_arc_bind_value(lv_arc_1, temp);
    lv_obj_set_width(lv_arc_1, 140);
    lv_obj_set_height(lv_arc_1, 140);

    lv_obj_t * lv_label_1 = lv_label_create(lv_arc_1);
    lv_obj_set_align(lv_label_1, LV_ALIGN_CENTER);
    lv_obj_set_style_text_font(lv_label_1, font_sb32, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    lv_label_bind_text(lv_label_1, temp, NULL);

    lv_obj_add_event_cb(lv_arc_1, temp_changed, LV_EVENT_VALUE_CHANGED, "foo");

    LV_TRACE_OBJ_CREATE("finished");

    return lv_arc_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/