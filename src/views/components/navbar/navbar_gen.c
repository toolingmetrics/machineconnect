/**
 * @file navbar_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "navbar_gen.h"
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

lv_obj_t * navbar_create(lv_obj_t * parent, const lv_image_dsc_t * icon, const char * title)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_pr;

    static bool style_inited = false;

    if (!style_inited) {

        lv_style_init(&style_main);
        lv_style_set_text_color(&style_main, lv_color_hex(0x374151));
        lv_style_set_bg_opa(&style_main, 0);
        lv_style_set_radius(&style_main, 0);
        lv_style_set_width(&style_main, LV_SIZE_CONTENT);
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_shadow_width(&style_main, 0);

        lv_style_init(&style_pr);
        lv_style_set_text_color(&style_pr, lv_color_hex(0x000000));
        lv_style_set_image_recolor(&style_pr, lv_color_hex(0x000000));
        lv_style_set_radius(&style_pr, 0);

        style_inited = true;
    }

    lv_obj_t * lv_button_1 = lv_button_create(parent);
    lv_obj_add_style(lv_button_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_button_1, &style_pr, LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_width(lv_button_1, LV_SIZE_CONTENT);
    lv_obj_set_height(lv_button_1, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(lv_button_1, LV_FLEX_FLOW_ROW);
    lv_obj_set_style_pad_column(lv_button_1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(lv_button_1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(lv_button_1, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(lv_button_1);
    lv_image_set_src(lv_image_1, icon);
    lv_obj_set_width(lv_image_1, 58);
    lv_obj_set_height(lv_image_1, 58);
    lv_obj_set_style_image_recolor(lv_image_1, lv_color_hex(0xebebeb), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_1 = lv_label_create(lv_button_1);
    lv_label_set_text(lv_label_1, title);
    lv_obj_set_style_text_font(lv_label_1, text_5xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_button_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/