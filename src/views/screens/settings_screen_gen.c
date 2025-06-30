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
lv_obj_t * tm_create_menu_item(lv_obj_t *parent, const char *label_text, const lv_image_dsc_t *img_icon);

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

lv_obj_t * settings_screen_create(void)
{
    LV_TRACE_OBJ_CREATE("begin");

    static lv_style_t style_cell;

    static bool style_inited = false;

    if(!style_inited) {

        lv_style_init(&style_cell);
        lv_style_set_border_side(&style_cell, LV_BORDER_SIDE_FULL);
        lv_style_set_text_font(&style_cell, text_2xl_normal);

        style_inited = true;
    }

    lv_obj_t * lv_obj_1 = lv_obj_create(NULL);
    lv_obj_set_width(lv_obj_1, lv_pct(100));
    lv_obj_set_height(lv_obj_1, lv_pct(100));
    lv_obj_set_flex_flow(lv_obj_1, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_pad_row(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(lv_obj_1, lv_color_hex(0xe5e7eb), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(lv_obj_1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    header_create(lv_obj_1);

    lv_obj_t * body = lv_obj_create(lv_obj_1);
    lv_obj_set_name(body, "body");
    lv_obj_set_flex_flow(body, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_align(body, LV_ALIGN_TOP_MID);
    lv_obj_set_width(body, lv_pct(100));
    lv_obj_set_flex_grow(body, 1);
    lv_obj_set_flag(body, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_state(body, LV_STATE_SCROLLED, false);
    lv_obj_set_style_bg_opa(body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(body, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    LV_IMAGE_DECLARE(img_back_icon);
    lv_obj_t * navbar_1 = navbar_create(body, &img_back_icon, "Settings");
    lv_obj_add_event_cb(navbar_1, back_main_screen, LV_EVENT_CLICKED, NULL);

    lv_obj_t * content = lv_obj_create(body);
    lv_obj_set_name(content, "content");
    lv_obj_set_flex_flow(content, LV_FLEX_FLOW_ROW);
    lv_obj_set_width(content, lv_pct(100));
    lv_obj_set_flex_grow(content, 1);
    lv_obj_set_flag(content, LV_OBJ_FLAG_SCROLLABLE, false);
    lv_obj_set_style_pad_hor(content, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_column(content, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(content, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * menu = lv_menu_create(content);
    lv_obj_set_size(menu, lv_display_get_horizontal_resolution(NULL), lv_display_get_vertical_resolution(NULL) );
    lv_obj_set_style_bg_opa(menu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cont;
    lv_obj_t * label;

    // Create content pages
    lv_obj_t * wifi_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(wifi_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_all(wifi_page, 12, 0);
    lv_obj_set_style_margin_right(wifi_page, 32, 0);
    lv_obj_set_style_margin_bottom(wifi_page, 32, 0);
    cont = lv_menu_cont_create(wifi_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xff0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_label_set_text(label, "Wi-Fi Settings");

    lv_obj_t * bluetooth_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_pad_hor(bluetooth_page, lv_obj_get_style_pad_left(lv_menu_get_main_header(menu), 0), 0);
    cont = lv_menu_cont_create(bluetooth_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_label_set_text(label, "Bluetooth Settings");

    lv_obj_t * ethernet_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_pad_hor(ethernet_page, lv_obj_get_style_pad_left(lv_menu_get_main_header(menu), 0), 0);
    cont = lv_menu_cont_create(ethernet_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_label_set_text(label, "Ethernet Settings");

    // Create sidebar items
    lv_obj_t * side_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_pad_hor(side_page, 0, 0);
    lv_obj_set_style_margin_top(side_page, 0, 0);
    lv_obj_set_style_margin_right(side_page, 8, 0);
    lv_obj_set_style_radius(side_page, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_flag(side_page, LV_OBJ_FLAG_OVERFLOW_VISIBLE, false);
    lv_obj_set_style_clip_corner(side_page, true, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_radius(side_page, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(side_page, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(side_page, 100, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(side_page, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(side_page, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);

    LV_IMAGE_DECLARE(img_wifi_connect);
    cont = btn_secondary_create(side_page, "Wi-Fi", &img_wifi_connect);
    lv_menu_set_load_page_event(menu, cont, wifi_page);

    LV_IMAGE_DECLARE(img_bluetooth_connect);
    cont = btn_secondary_create(side_page, "Bluetooth", &img_bluetooth_connect);
    lv_menu_set_load_page_event(menu, cont, bluetooth_page);

    LV_IMAGE_DECLARE(img_ethernet_connect);
    cont = btn_secondary_create(side_page, "Ethernet", &img_ethernet_connect);
    lv_menu_set_load_page_event(menu, cont, ethernet_page);

    lv_menu_set_sidebar_page(menu, side_page);
    lv_menu_set_page(menu, wifi_page);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

/**********************
 *   STATIC FUNCTIONS
 **********************/