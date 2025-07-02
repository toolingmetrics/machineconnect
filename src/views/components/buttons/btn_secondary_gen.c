/**
 * @file btn_secondary_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "btn_secondary_gen.h"
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

lv_obj_t * btn_secondary_create(lv_obj_t * parent, const char * title, const lv_img_dsc_t * icon, lv_color_t color)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_pr;
    static lv_style_t style_ck;
    static lv_style_t style_icon_main;
    static lv_style_t style_icon_pressed;

    static bool style_inited = false;

    if (!style_inited) {

        lv_style_init(&style_main);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);
        lv_style_set_pad_all(&style_main, 16);
        lv_style_set_bg_color(&style_main, lv_color_hex(0xfafafa));
        lv_style_set_text_color(&style_main, lv_color_hex(0x4B5563));
        lv_style_set_image_recolor(&style_main, lv_color_hex(0x4B5563));
        lv_style_set_border_width(&style_main, 1);
        lv_style_set_border_color(&style_main, lv_color_hex(0xD4D4D8));
        lv_style_set_border_side(&style_main, LV_BORDER_SIDE_BOTTOM);
        lv_style_set_shadow_width(&style_main, 0);

        lv_style_init(&style_pr);
        lv_style_set_bg_color(&style_pr, lv_color_hex(0x005AA3));
        lv_style_set_text_color(&style_pr, lv_color_hex(0xfafafa));
        lv_style_set_image_recolor(&style_pr, lv_color_hex(0xffffff));

        lv_style_init(&style_ck);
        lv_style_set_bg_color(&style_ck, lv_color_hex(0x007AD8));
        lv_style_set_text_color(&style_ck, lv_color_hex(0xfafafa));
        lv_style_set_image_recolor(&style_ck, lv_color_hex(0xffffff));

        lv_style_init(&style_icon_main);
        lv_style_set_width(&style_icon_main, 32);
        lv_style_set_height(&style_icon_main, 32);
        lv_style_set_image_recolor(&style_icon_main, lv_color_hex(0xfafafa));
        lv_style_set_image_recolor_opa(&style_icon_main, 255);

        lv_style_init(&style_icon_pressed);
        lv_style_set_image_recolor(&style_icon_pressed, lv_color_hex(0xfafafa));
        lv_style_set_image_opa(&style_icon_pressed, 255);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
    lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_obj_1, &style_pr, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_add_style(lv_obj_1, &style_ck, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, LV_SIZE_CONTENT);
    lv_obj_set_style_radius(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_style_bg_color(lv_obj_2, color, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_2, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_set_style_border_width(lv_obj_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(lv_obj_2, 6, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_2);
    lv_obj_add_style(lv_image_1, &style_icon_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_1, &style_icon_pressed, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_add_style(lv_image_1, &style_icon_pressed, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_image_set_src(lv_image_1, icon);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_label_set_text(lv_label_1, title);
    lv_obj_set_style_text_font(lv_label_1, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/