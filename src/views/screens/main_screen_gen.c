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


    static bool style_inited = false;

    if(!style_inited) {
        
        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
        lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xe5e7eb), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    header_create(lv_obj_1);

    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_1);
    lv_image_set_src(lv_image_1, img_favicon);
    lv_obj_set_width(lv_image_1, 80);
    lv_obj_set_height(lv_image_1, 80);
    lv_obj_set_align(lv_image_1, LV_ALIGN_TOP_MID);
    lv_obj_set_y(lv_image_1, 108);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_align(lv_obj_2, LV_ALIGN_CENTER);
    lv_obj_set_style_bg_color(lv_obj_2, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_obj_2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_2, 524);
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_set_style_radius(lv_obj_2, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(lv_obj_2, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(lv_obj_2, 32, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_main_place(lv_obj_2, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_2, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(lv_obj_2, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(lv_obj_2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(lv_obj_2, 26, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_x(lv_obj_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_offset_y(lv_obj_2, 2, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_spangroup_1 = lv_spangroup_create(lv_obj_2);
    lv_obj_set_flex_flow(lv_spangroup_1, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_row(lv_spangroup_1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_spangroup_1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_bottom(lv_spangroup_1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * btn_action_1 = btn_action_create(lv_spangroup_1, "img_tool_load", 192, 16);

    lv_obj_add_event_cb(btn_action_1, tool_load, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_label_1 = lv_label_create(lv_spangroup_1);
    lv_label_set_text(lv_label_1, "Tool Load");
    lv_obj_set_style_text_font(lv_label_1, text_3xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_1, 200);
    lv_obj_set_style_text_align(lv_label_1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(lv_label_1, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_spangroup_2 = lv_spangroup_create(lv_obj_2);
    lv_obj_set_flex_flow(lv_spangroup_2, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_row(lv_spangroup_2, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_spangroup_2, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_bottom(lv_spangroup_2, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * btn_action_2 = btn_action_create(lv_spangroup_2, "img_tool_unload", 192, 16);

    lv_obj_add_event_cb(btn_action_2, tool_unload, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_label_2 = lv_label_create(lv_spangroup_2);
    lv_label_set_text(lv_label_2, "Tool Unload");
    lv_obj_set_style_text_font(lv_label_2, text_3xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_2, 200);
    lv_obj_set_style_text_align(lv_label_2, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(lv_label_2, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_spangroup_3 = lv_spangroup_create(lv_obj_2);
    lv_obj_set_flex_flow(lv_spangroup_3, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_row(lv_spangroup_3, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_spangroup_3, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_bottom(lv_spangroup_3, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * btn_action_3 = btn_action_create(lv_spangroup_3, "img_tool_exchange", 192, 16);

    lv_obj_add_event_cb(btn_action_3, tool_exchange, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_label_3 = lv_label_create(lv_spangroup_3);
    lv_label_set_text(lv_label_3, "Exchange");
    lv_obj_set_style_text_font(lv_label_3, text_3xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_3, 200);
    lv_obj_set_style_text_align(lv_label_3, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(lv_label_3, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_spangroup_4 = lv_spangroup_create(lv_obj_2);
    lv_obj_set_flex_flow(lv_spangroup_4, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_row(lv_spangroup_4, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_spangroup_4, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_bottom(lv_spangroup_4, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * btn_action_4 = btn_action_create(lv_spangroup_4, "img_tool_data", 192, 16);

    lv_obj_add_event_cb(btn_action_4, tool_data, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_label_4 = lv_label_create(lv_spangroup_4);
    lv_label_set_text(lv_label_4, "Lookup");
    lv_obj_set_style_text_font(lv_label_4, text_3xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_4, 200);
    lv_obj_set_style_text_align(lv_label_4, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(lv_label_4, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_spangroup_5 = lv_spangroup_create(lv_obj_2);
    lv_obj_set_flex_flow(lv_spangroup_5, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_style_pad_row(lv_spangroup_5, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_hor(lv_spangroup_5, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_bottom(lv_spangroup_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * btn_action_5 = btn_action_create(lv_spangroup_5, "img_setup_assistant", 192, 16);

    lv_obj_add_event_cb(btn_action_5, setup_assistant, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_label_5 = lv_label_create(lv_spangroup_5);
    lv_label_set_text(lv_label_5, "Setup Assistant");
    lv_obj_set_style_text_font(lv_label_5, text_3xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_label_5, 210);
    lv_obj_set_style_text_align(lv_label_5, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_align(lv_label_5, LV_ALIGN_BOTTOM_MID, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/