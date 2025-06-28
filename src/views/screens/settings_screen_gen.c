/**
 * @file settings_screen_gen.c
 * @description Template source file for LVGL objects
 */

/*********************
 *      INCLUDES
 *********************/
#include "settings_screen_gen.h"
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

lv_obj_t * settings_screen_create(void)
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

    lv_obj_t * lv_obj_2 = lv_obj_create(lv_obj_1);
    lv_obj_set_flex_flow(lv_obj_2, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_align(lv_obj_2, LV_ALIGN_TOP_MID);
    lv_obj_set_width(lv_obj_2, lv_pct(100));
    lv_obj_set_height(lv_obj_2, LV_SIZE_CONTENT);
    lv_obj_set_y(lv_obj_2, 48);
    lv_obj_set_style_bg_opa(lv_obj_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(lv_obj_2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(lv_obj_2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * back_main_btn = lv_button_create(lv_obj_2);
    lv_obj_set_name(back_main_btn, "back_main_btn");
    lv_obj_set_style_text_font(back_main_btn, text_5xl_semibold, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(back_main_btn, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(back_main_btn, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(back_main_btn, LV_SIZE_CONTENT);
    lv_obj_set_style_bg_opa(back_main_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(back_main_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(back_main_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(back_main_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_1 = lv_image_create(back_main_btn);
    LV_IMAGE_DECLARE(img_back_icon);
    lv_image_set_src(lv_image_1, &img_back_icon);
    lv_obj_set_align(lv_image_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_1, 48);
    lv_obj_set_height(lv_image_1, 48);
    lv_obj_set_style_image_recolor(lv_image_1, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_1, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_1 = lv_label_create(back_main_btn);
    lv_label_set_text(lv_label_1, "Settings");
    lv_obj_set_align(lv_label_1, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_1, 60, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(back_main_btn, back_main_screen, LV_EVENT_CLICKED, NULL);
    lv_obj_t * lv_obj_3 = lv_obj_create(lv_obj_2);
    lv_obj_set_width(lv_obj_3, lv_pct(40));
    lv_obj_set_height(lv_obj_3, LV_SIZE_CONTENT);
    lv_obj_set_style_max_height(lv_obj_3, 1120, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(lv_obj_3, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_SCROLL_CHAIN_VER, false);
    lv_obj_set_flex_flow(lv_obj_3, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flag(lv_obj_3, LV_OBJ_FLAG_FLEX_IN_NEW_TRACK, true);
    lv_obj_set_style_border_width(lv_obj_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(lv_obj_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_4 = lv_obj_create(lv_obj_3);
    lv_obj_set_width(lv_obj_4, lv_pct(100));
    lv_obj_set_height(lv_obj_4, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_row(lv_obj_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_4, LV_OBJ_FLAG_SCROLL_CHAIN_VER, false);
    lv_obj_set_flex_flow(lv_obj_4, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_style_border_width(lv_obj_4, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(lv_obj_4, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * wifi_setting_btn = lv_button_create(lv_obj_4);
    lv_obj_set_name(wifi_setting_btn, "wifi_setting_btn");
    lv_obj_set_style_text_font(wifi_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(wifi_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(wifi_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(wifi_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(wifi_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(wifi_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(wifi_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(wifi_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(wifi_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_2 = lv_image_create(wifi_setting_btn);
    LV_IMAGE_DECLARE(img_wifi_connect);
    lv_image_set_src(lv_image_2, &img_wifi_connect);
    lv_obj_set_align(lv_image_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_2, 36);
    lv_obj_set_height(lv_image_2, 36);
    lv_obj_set_style_image_recolor(lv_image_2, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_2, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_2 = lv_label_create(wifi_setting_btn);
    lv_label_set_text(lv_label_2, "Wi-Fi");
    lv_obj_set_align(lv_label_2, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_2, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * bluetooth_setting_btn = lv_button_create(lv_obj_4);
    lv_obj_set_name(bluetooth_setting_btn, "bluetooth_setting_btn");
    lv_obj_set_style_text_font(bluetooth_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(bluetooth_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(bluetooth_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(bluetooth_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(bluetooth_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(bluetooth_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(bluetooth_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(bluetooth_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(bluetooth_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_3 = lv_image_create(bluetooth_setting_btn);
    LV_IMAGE_DECLARE(img_bluetooth_connect);
    lv_image_set_src(lv_image_3, &img_bluetooth_connect);
    lv_obj_set_align(lv_image_3, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_3, 36);
    lv_obj_set_height(lv_image_3, 36);
    lv_obj_set_style_image_recolor(lv_image_3, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_3, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_3 = lv_label_create(bluetooth_setting_btn);
    lv_label_set_text(lv_label_3, "Bluetooth");
    lv_obj_set_align(lv_label_3, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_3, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ethernet_setting_btn = lv_button_create(lv_obj_4);
    lv_obj_set_name(ethernet_setting_btn, "ethernet_setting_btn");
    lv_obj_set_style_text_font(ethernet_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(ethernet_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(ethernet_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(ethernet_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ethernet_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ethernet_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ethernet_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ethernet_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ethernet_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_4 = lv_image_create(ethernet_setting_btn);
    LV_IMAGE_DECLARE(img_ethernet_connect);
    lv_image_set_src(lv_image_4, &img_ethernet_connect);
    lv_obj_set_align(lv_image_4, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_4, 36);
    lv_obj_set_height(lv_image_4, 36);
    lv_obj_set_style_image_recolor(lv_image_4, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_4, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_4 = lv_label_create(ethernet_setting_btn);
    lv_label_set_text(lv_label_4, "Network");
    lv_obj_set_align(lv_label_4, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_4, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * nfc_setting_btn = lv_button_create(lv_obj_4);
    lv_obj_set_name(nfc_setting_btn, "nfc_setting_btn");
    lv_obj_set_style_text_font(nfc_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(nfc_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(nfc_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(nfc_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(nfc_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(nfc_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(nfc_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(nfc_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(nfc_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_5 = lv_image_create(nfc_setting_btn);
    LV_IMAGE_DECLARE(img_nfc);
    lv_image_set_src(lv_image_5, &img_nfc);
    lv_obj_set_align(lv_image_5, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_5, 36);
    lv_obj_set_height(lv_image_5, 36);
    lv_obj_set_style_image_recolor(lv_image_5, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_5, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_5 = lv_label_create(nfc_setting_btn);
    lv_label_set_text(lv_label_5, "NFC");
    lv_obj_set_align(lv_label_5, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_5, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_5 = lv_obj_create(lv_obj_3);
    lv_obj_set_width(lv_obj_5, lv_pct(100));
    lv_obj_set_height(lv_obj_5, LV_SIZE_CONTENT);
    lv_obj_set_style_pad_row(lv_obj_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(lv_obj_5, LV_OBJ_FLAG_SCROLL_CHAIN_VER, false);
    lv_obj_set_flex_flow(lv_obj_5, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_style_border_width(lv_obj_5, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(lv_obj_5, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * general_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(general_setting_btn, "general_setting_btn");
    lv_obj_set_style_text_font(general_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(general_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(general_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(general_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(general_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(general_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(general_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(general_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(general_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_6 = lv_image_create(general_setting_btn);
    LV_IMAGE_DECLARE(img_wifi_connect);
    lv_image_set_src(lv_image_6, &img_wifi_connect);
    lv_obj_set_align(lv_image_6, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_6, 36);
    lv_obj_set_height(lv_image_6, 36);
    lv_obj_set_style_image_recolor(lv_image_6, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_6, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_6 = lv_label_create(general_setting_btn);
    lv_label_set_text(lv_label_6, "General");
    lv_obj_set_align(lv_label_6, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_6, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * datetime_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(datetime_setting_btn, "datetime_setting_btn");
    lv_obj_set_style_text_font(datetime_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(datetime_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(datetime_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(datetime_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(datetime_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(datetime_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(datetime_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(datetime_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(datetime_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_7 = lv_image_create(datetime_setting_btn);
    LV_IMAGE_DECLARE(img_bluetooth_connect);
    lv_image_set_src(lv_image_7, &img_bluetooth_connect);
    lv_obj_set_align(lv_image_7, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_7, 36);
    lv_obj_set_height(lv_image_7, 36);
    lv_obj_set_style_image_recolor(lv_image_7, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_7, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_7 = lv_label_create(datetime_setting_btn);
    lv_label_set_text(lv_label_7, "Date & Time");
    lv_obj_set_align(lv_label_7, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_7, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * api_token_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(api_token_setting_btn, "api_token_setting_btn");
    lv_obj_set_style_text_font(api_token_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(api_token_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(api_token_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(api_token_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(api_token_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(api_token_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(api_token_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(api_token_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(api_token_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_8 = lv_image_create(api_token_setting_btn);
    LV_IMAGE_DECLARE(img_bluetooth_connect);
    lv_image_set_src(lv_image_8, &img_bluetooth_connect);
    lv_obj_set_align(lv_image_8, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_8, 36);
    lv_obj_set_height(lv_image_8, 36);
    lv_obj_set_style_image_recolor(lv_image_8, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_8, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_8 = lv_label_create(api_token_setting_btn);
    lv_label_set_text(lv_label_8, "API Token Key");
    lv_obj_set_align(lv_label_8, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_8, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * software_update_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(software_update_setting_btn, "software_update_setting_btn");
    lv_obj_set_style_text_font(software_update_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(software_update_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(software_update_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(software_update_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(software_update_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(software_update_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(software_update_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(software_update_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(software_update_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_9 = lv_image_create(software_update_setting_btn);
    LV_IMAGE_DECLARE(img_ethernet_connect);
    lv_image_set_src(lv_image_9, &img_ethernet_connect);
    lv_obj_set_align(lv_image_9, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_9, 36);
    lv_obj_set_height(lv_image_9, 36);
    lv_obj_set_style_image_recolor(lv_image_9, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_9, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_9 = lv_label_create(software_update_setting_btn);
    lv_label_set_text(lv_label_9, "Software Update");
    lv_obj_set_align(lv_label_9, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_9, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * legal_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(legal_setting_btn, "legal_setting_btn");
    lv_obj_set_style_text_font(legal_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(legal_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(legal_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(legal_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(legal_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(legal_setting_btn, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(legal_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(legal_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(legal_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_10 = lv_image_create(legal_setting_btn);
    LV_IMAGE_DECLARE(img_bluetooth_connect);
    lv_image_set_src(lv_image_10, &img_bluetooth_connect);
    lv_obj_set_align(lv_image_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_10, 36);
    lv_obj_set_height(lv_image_10, 36);
    lv_obj_set_style_image_recolor(lv_image_10, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_10, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_10 = lv_label_create(legal_setting_btn);
    lv_label_set_text(lv_label_10, "Legal & Regulatory");
    lv_obj_set_align(lv_label_10, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_10, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * about_setting_btn = lv_button_create(lv_obj_5);
    lv_obj_set_name(about_setting_btn, "about_setting_btn");
    lv_obj_set_style_text_font(about_setting_btn, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(about_setting_btn, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(about_setting_btn, lv_pct(100));
    lv_obj_set_style_bg_color(about_setting_btn, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(about_setting_btn, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(about_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(about_setting_btn, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(about_setting_btn, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(about_setting_btn, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_image_11 = lv_image_create(about_setting_btn);
    LV_IMAGE_DECLARE(img_nfc);
    lv_image_set_src(lv_image_11, &img_nfc);
    lv_obj_set_align(lv_image_11, LV_ALIGN_LEFT_MID);
    lv_obj_set_width(lv_image_11, 36);
    lv_obj_set_height(lv_image_11, 36);
    lv_obj_set_style_image_recolor(lv_image_11, lv_color_hex(0x111827), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_image_set_inner_align(lv_image_11, LV_IMAGE_ALIGN_STRETCH);

    lv_obj_t * lv_label_11 = lv_label_create(about_setting_btn);
    lv_label_set_text(lv_label_11, "About");
    lv_obj_set_align(lv_label_11, LV_ALIGN_LEFT_MID);
    lv_obj_set_style_pad_left(lv_label_11, 48, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * lv_obj_6 = lv_obj_create(lv_obj_2);
    lv_obj_set_flex_grow(lv_obj_6, 1);
    lv_obj_set_height(lv_obj_6, LV_SIZE_CONTENT);
    lv_obj_set_style_max_height(lv_obj_6, 1120, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(lv_obj_6, 0, LV_PART_MAIN | LV_STATE_DEFAULT);


    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/