/**
 * @file main_screen_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "main_screen_gen.h"
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

lv_obj_t * main_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_cell;
    static lv_style_t style_cur;
    static lv_style_t style_heading;

    static bool style_inited = false;

    if(!style_inited) {
        
        lv_style_init(&style_cell);
        lv_style_set_border_side(&style_cell, LV_BORDER_SIDE_FULL);

        lv_style_init(&style_cur);
        lv_style_set_line_dash_gap(&style_cur, 10);
        lv_style_set_line_dash_width(&style_cur, 10);

        lv_style_init(&style_heading);
        lv_style_set_text_font(&style_heading, font_r16);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_style_pad_all(lv_obj_1, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_ROW_WRAP);

    lv_obj_t * header = lv_spangroup_create(lv_obj_1);
    lv_obj_set_name(header, "header");

    lv_span_t * header_span_1 = lv_spangroup_add_span(header);
    lv_spangroup_set_span_text(header, header_span_1, "Home");

    lv_obj_t * thermostat_1 = thermostat_create(lv_obj_1, &subject_temp1);
    lv_obj_set_flag(thermostat_1, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK, true);

    thermostat_create(lv_obj_1, &subject_temp2);

    lv_obj_t * thermostat_3 = thermostat_create(lv_obj_1, &subject_temp3);
    lv_obj_bind_flag_if_eq(thermostat_3, &subject_hide, LV_OBJ_FLAG_HIDDEN, 1);

    lv_obj_t * lv_checkbox_1 = lv_checkbox_create(lv_obj_1);
    lv_checkbox_set_text(lv_checkbox_1, "Hide thermostat 3");
    
    lv_obj_bind_checked(lv_checkbox_1, &subject_hide);
    lv_obj_set_flag(lv_checkbox_1, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK, true);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/