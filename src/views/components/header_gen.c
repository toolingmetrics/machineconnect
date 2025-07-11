/**
 * @file header_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "header_gen.h"
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

lv_obj_t * header_create(lv_obj_t * parent)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_main;
    static lv_style_t style_icon_on;
    static lv_style_t style_icon_off;

    static bool style_inited = false;

    if (!style_inited) {

        lv_style_init(&style_main);
        lv_style_set_radius(&style_main, 0);
        lv_style_set_width(&style_main, lv_pct(100));
        lv_style_set_height(&style_main, LV_SIZE_CONTENT);
        lv_style_set_pad_hor(&style_main, 10);
        lv_style_set_pad_ver(&style_main, 6);
        lv_style_set_layout(&style_main, LV_LAYOUT_FLEX);
        lv_style_set_flex_cross_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_track_place(&style_main, LV_FLEX_ALIGN_CENTER);
        lv_style_set_flex_flow(&style_main, LV_FLEX_FLOW_ROW);
        lv_style_set_bg_opa(&style_main, 0);
        lv_style_set_border_width(&style_main, 0);
        lv_style_set_text_color(&style_main, lv_color_hex(0x4B5563));

        lv_style_init(&style_icon_on);
        lv_style_set_image_recolor(&style_icon_on, lv_color_hex(0x4B5563));
        lv_style_set_image_recolor_opa(&style_icon_on, 255);

        lv_style_init(&style_icon_off);
        lv_style_set_image_opa(&style_icon_off, 64);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(parent);
        lv_obj_add_style(lv_obj_1, &style_main, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_1, LV_OBJ_FLAG_SCROLLABLE, false);

    lv_obj_t * lv_label_1 = lv_label_create(lv_obj_1);
    lv_obj_set_flex_grow(lv_label_1, 1);

    lv_label_bind_text(lv_label_1, &subject_system_time, NULL);
    lv_obj_set_style_text_font(lv_label_1, text_3xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_1, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_1, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_nfc);
    lv_image_set_src(lv_image_1, &img_nfc);
    lv_obj_set_width(lv_image_1, 40);
    lv_obj_set_height(lv_image_1, 40);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_1, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_eq(lv_image_1, &subject_nfc_on, LV_OBJ_FLAG_HIDDEN, -1);
    lv_obj_bind_state_if_eq(lv_image_1, &subject_nfc_on, LV_STATE_DISABLED, 0);

    lv_obj_t * lv_image_2 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_2, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_2, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_ethernet_disconnect);
    lv_image_set_src(lv_image_2, &img_ethernet_disconnect);
    lv_obj_set_width(lv_image_2, 40);
    lv_obj_set_height(lv_image_2, 40);
    lv_image_set_inner_align(lv_image_2, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_2, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_gt(lv_image_2, &subject_ethernet_on, LV_OBJ_FLAG_HIDDEN, -1);

    lv_obj_t * lv_image_3 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_3, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_3, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_ethernet_connect);
    lv_image_set_src(lv_image_3, &img_ethernet_connect);
    lv_obj_set_width(lv_image_3, 40);
    lv_obj_set_height(lv_image_3, 40);
    lv_image_set_inner_align(lv_image_3, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_3, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_eq(lv_image_3, &subject_ethernet_on, LV_OBJ_FLAG_HIDDEN, -1);
    lv_obj_bind_state_if_eq(lv_image_3, &subject_ethernet_on, LV_STATE_DISABLED, 0);

    lv_obj_t * lv_image_4 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_4, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_4, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_bluetooth_disconnect);
    lv_image_set_src(lv_image_4, &img_bluetooth_disconnect);
    lv_obj_set_width(lv_image_4, 40);
    lv_obj_set_height(lv_image_4, 40);
    lv_image_set_inner_align(lv_image_4, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_4, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_gt(lv_image_4, &subject_bluetooth_on, LV_OBJ_FLAG_HIDDEN, -1);

    lv_obj_t * lv_image_5 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_5, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_5, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_bluetooth_connect);
    lv_image_set_src(lv_image_5, &img_bluetooth_connect);
    lv_obj_set_width(lv_image_5, 40);
    lv_obj_set_height(lv_image_5, 40);
    lv_image_set_inner_align(lv_image_5, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_5, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_eq(lv_image_5, &subject_bluetooth_on, LV_OBJ_FLAG_HIDDEN, -1);
    lv_obj_bind_state_if_eq(lv_image_5, &subject_bluetooth_on, LV_STATE_DISABLED, 0);

    lv_obj_t * lv_image_6 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_6, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_6, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_wifi_disconnect);
    lv_image_set_src(lv_image_6, &img_wifi_disconnect);
    lv_obj_set_width(lv_image_6, 40);
    lv_obj_set_height(lv_image_6, 40);
    lv_image_set_inner_align(lv_image_6, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_6, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_gt(lv_image_6, &subject_wifi_on, LV_OBJ_FLAG_HIDDEN, -1);

    lv_obj_t * lv_image_7 = lv_image_create(lv_obj_1);
    lv_obj_add_style(lv_image_7, &style_icon_on, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_add_style(lv_image_7, &style_icon_off, LV_PART_MAIN | LV_STATE_DISABLED);
    LV_IMAGE_DECLARE(img_wifi_connect);
    lv_image_set_src(lv_image_7, &img_wifi_connect);
    lv_obj_set_width(lv_image_7, 40);
    lv_obj_set_height(lv_image_7, 40);
    lv_image_set_inner_align(lv_image_7, LV_IMAGE_ALIGN_STRETCH);
    lv_obj_set_style_margin_hor(lv_image_7, 6, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_bind_flag_if_eq(lv_image_7, &subject_wifi_on, LV_OBJ_FLAG_HIDDEN, -1);
    lv_obj_bind_state_if_eq(lv_image_7, &subject_wifi_on, LV_STATE_DISABLED, 0);

    update_system_status(NULL);
    lv_timer_create(update_system_status, 1000, NULL);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/