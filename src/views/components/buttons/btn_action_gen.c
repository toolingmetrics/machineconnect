/**
 * @file btn_action_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "btn_action_gen.h"
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

lv_obj_t * btn_action_create(lv_obj_t * parent, void * icon, int32_t size, int32_t padding)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_pr;

    static bool style_inited = false;

    if (!style_inited) {

        lv_style_init(&style_main);
        lv_style_set_bg_color(&style_main, lv_color_hex(0x007AD8));
        lv_style_set_radius(&style_main, 16);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_border_width(&style_main, 1);
        lv_style_set_border_color(&style_main, lv_color_hex(0x007AD8));
        lv_style_set_outline_color(&style_main, lv_color_hex(0xd1d5db));
        lv_style_set_shadow_width(&style_main, 1);
        lv_style_set_shadow_color(&style_main, lv_color_hex(0x1d1d1d));
        lv_style_set_shadow_opa(&style_main, 13);
        lv_style_set_shadow_offset_x(&style_main, 0);
        lv_style_set_shadow_offset_y(&style_main, 1);

        lv_style_init(&style_pr);
        lv_style_set_bg_color(&style_pr, lv_color_hex(0x005AA3));
        lv_style_set_radius(&style_pr, 16);

        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
        lv_obj_add_style(lv_button_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_button_1, &style_pr, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_width(lv_button_1, size);
    lv_obj_set_height(lv_button_1, size);
    lv_obj_set_style_margin_all(lv_button_1, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_button_1, padding, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(lv_button_1);
    lv_image_set_src(lv_image_1, icon);
    lv_obj_set_width(lv_image_1, lv_pct(100));
    lv_obj_set_height(lv_image_1, lv_pct(100));
    lv_obj_set_style_image_recolor(lv_image_1, lv_color_hex(0xebebeb), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/