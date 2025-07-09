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
static lv_obj_t * wifi_page;

/***********************
 *  STATIC PROTOTYPES
 **********************/

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
    lv_obj_set_size(menu, lv_display_get_horizontal_resolution(NULL), lv_display_get_vertical_resolution(NULL));
    lv_obj_set_style_bg_opa(menu, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * section;
    lv_obj_t * cont;
    lv_obj_t * label;

    // Create content pages
    wifi_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(wifi_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(wifi_page, 16, 0);
    lv_obj_set_style_margin_left(wifi_page, 12, 0);
    lv_obj_set_style_margin_right(wifi_page, 32, 0);
    lv_obj_set_style_margin_bottom(wifi_page, 32, 0);

    cont = lv_menu_cont_create(wifi_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(cont, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_ver(cont, 18, LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(label, lv_color_hex(0x4B5563), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Wi-Fi");
    lv_obj_set_flex_grow(label, 1);
    lv_obj_t * wifi_sw = lv_switch_create(cont);
    lv_obj_set_style_height(wifi_sw, 32, 0);
    lv_obj_set_style_bg_color(wifi_sw, lv_color_hex(0x007AD8), LV_PART_INDICATOR | LV_STATE_CHECKED);
    lv_obj_add_event_cb(wifi_sw, toggle_wifi, LV_EVENT_ALL, NULL);

    bool wifi_enabled = is_wifi_enabled();
    lv_obj_add_state(wifi_sw, wifi_enabled);

    if(wifi_enabled) {
        networks_init(wifi_page);
    }

    lv_obj_t * bluetooth_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(bluetooth_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(bluetooth_page, 16, 0);
    lv_obj_set_style_margin_left(bluetooth_page, 12, 0);
    lv_obj_set_style_margin_right(bluetooth_page, 32, 0);
    lv_obj_set_style_margin_bottom(bluetooth_page, 32, 0);
    cont = lv_menu_cont_create(bluetooth_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Bluetooth Settings");

    lv_obj_t * ethernet_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(ethernet_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(ethernet_page, 16, 0);
    lv_obj_set_style_margin_left(ethernet_page, 12, 0);
    lv_obj_set_style_margin_right(ethernet_page, 32, 0);
    lv_obj_set_style_margin_bottom(ethernet_page, 32, 0);
    cont = lv_menu_cont_create(ethernet_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Ethernet Settings");

    lv_obj_t * general_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(general_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(general_page, 16, 0);
    lv_obj_set_style_margin_left(general_page, 12, 0);
    lv_obj_set_style_margin_right(general_page, 32, 0);
    lv_obj_set_style_margin_bottom(general_page, 32, 0);
    cont = lv_menu_cont_create(general_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "General Settings");

    lv_obj_t * datetime_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(datetime_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(datetime_page, 16, 0);
    lv_obj_set_style_margin_left(datetime_page, 12, 0);
    lv_obj_set_style_margin_right(datetime_page, 32, 0);
    lv_obj_set_style_margin_bottom(datetime_page, 32, 0);
    cont = lv_menu_cont_create(datetime_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Datetime Settings");

    lv_obj_t * software_update_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(software_update_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(software_update_page, 16, 0);
    lv_obj_set_style_margin_left(software_update_page, 12, 0);
    lv_obj_set_style_margin_right(software_update_page, 32, 0);
    lv_obj_set_style_margin_bottom(software_update_page, 32, 0);
    cont = lv_menu_cont_create(software_update_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Software Update");

    lv_obj_t * device_info_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_style_width(device_info_page, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(device_info_page, 16, 0);
    lv_obj_set_style_margin_left(device_info_page, 12, 0);
    lv_obj_set_style_margin_right(device_info_page, 32, 0);
    lv_obj_set_style_margin_bottom(device_info_page, 32, 0);
    cont = lv_menu_cont_create(device_info_page);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    label = lv_label_create(cont);
    lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Device Information");

    // Create menu items
    lv_obj_t * menu_page = lv_menu_page_create(menu, NULL);
    lv_obj_set_width(menu_page, lv_pct(100));
    lv_obj_set_height(menu_page, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(menu_page, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(menu_page, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(menu_page, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(menu_page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(menu_page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_top(menu_page, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_margin_right(menu_page, 12, LV_PART_MAIN | LV_STATE_DEFAULT);

    // connection section
    section = lv_menu_section_create(menu_page);
    lv_obj_set_name(section, "content");
    lv_obj_set_width(section, lv_pct(100));
    lv_obj_set_height(section, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(section, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(section, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(section, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(section, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(section, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    LV_IMAGE_DECLARE(img_wifi_connect);
    cont = btn_secondary_create(section, "Wi-Fi", &img_wifi_connect, lv_color_hex(0x22c55e));
    lv_menu_set_load_page_event(menu, cont, wifi_page);

    LV_IMAGE_DECLARE(img_bluetooth_connect);
    cont = btn_secondary_create(section, "Bluetooth", &img_bluetooth_connect, lv_color_hex(0x2563eb));
    lv_menu_set_load_page_event(menu, cont, bluetooth_page);

    LV_IMAGE_DECLARE(img_ethernet_connect);
    cont = btn_secondary_create(section, "Ethernet", &img_ethernet_connect, lv_color_hex(0x6b7280));
    lv_menu_set_load_page_event(menu, cont, ethernet_page);

    lv_menu_separator_create(menu_page);

    // general section
    section = lv_menu_section_create(menu_page);
    lv_obj_set_name(section, "content");
    lv_obj_set_width(section, lv_pct(100));
    lv_obj_set_height(section, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(section, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(section, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(section, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(section, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(section, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(section, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(section, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);

    LV_IMAGE_DECLARE(img_general_setting);
    cont = btn_secondary_create(section, "General", &img_general_setting, lv_color_hex(0x6b7280));
    lv_menu_set_load_page_event(menu, cont, general_page);

    LV_IMAGE_DECLARE(img_datetime_setting);
    cont = btn_secondary_create(section, "Date & Time", &img_datetime_setting, lv_color_hex(0x6b7280));
    lv_menu_set_load_page_event(menu, cont, datetime_page);

    LV_IMAGE_DECLARE(img_software_update);
    cont = btn_secondary_create(section, "Software Update", &img_software_update, lv_color_hex(0x6b7280));
    lv_menu_set_load_page_event(menu, cont, software_update_page);

    LV_IMAGE_DECLARE(img_device_info);
    cont = btn_secondary_create(section, "About", &img_device_info, lv_color_hex(0x6b7280));
    lv_menu_set_load_page_event(menu, cont, device_info_page);

    lv_menu_set_sidebar_page(menu, menu_page);
    lv_obj_send_event(lv_obj_get_child(lv_obj_get_child(lv_menu_get_cur_sidebar_page(menu), 0), 0), LV_EVENT_CLICKED,
                      NULL);

    LV_TRACE_OBJ_CREATE("finished");

    return lv_obj_1;
}

void connect_to_network(lv_event_t * e)
{
    lv_obj_t * ssid_label = get_child_by_name(lv_event_get_target_obj(e), "ssid_label");
    if(ssid_label) {
        LV_LOG("connect to network: %s\n", lv_label_get_text(ssid_label));
    } else {
        LV_LOG_WARN("no network ssid found");
    }
}

/**********************
 *   STATIC FUNCTIONS
 **********************/
void toggle_wifi(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * obj       = lv_event_get_target_obj(e);
    if(code == LV_EVENT_VALUE_CHANGED) {
        bool is_enabled = lv_obj_has_state(obj, LV_STATE_CHECKED);

        FILE * fp;
        char command[64];
        snprintf(command, sizeof(command), "nmcli radio wifi %s", is_enabled ? "on" : "off");
        fp = popen(command, "r");

        if(fp == NULL) {
            return;
        }

        if(is_enabled) {
            networks_init(wifi_page);
        } else {
            lv_obj_t * found = get_child_by_name(wifi_page, "wifi_networks_list");
            if(found) {
                lv_obj_delete(found);
            } else {
                LV_LOG_WARN("no obj founded");
            }
        }
    }
}

lv_obj_t * networks_init(lv_obj_t * parent)
{
    int ssid_count = 0;
    char ** ssids  = get_wifi_ssids(&ssid_count);
    lv_obj_t * label;
    lv_obj_t * icon;
    lv_obj_t * network_row;

    LV_IMAGE_DECLARE(img_wifi_connect);
    LV_IMAGE_DECLARE(img_lock_fill);

    lv_obj_t * networks_cont = lv_menu_cont_create(parent);
    lv_obj_set_name(networks_cont, "wifi_networks_list");
    lv_obj_set_width(networks_cont, lv_pct(100));
    lv_obj_set_height(networks_cont, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(networks_cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(networks_cont, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(networks_cont, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(networks_cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(networks_cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(networks_cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    label = lv_label_create(networks_cont);
    lv_obj_set_style_width(label, lv_pct(100), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_hor(label, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(label, 24, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(label, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(label, LV_TEXT_ALIGN_LEFT, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(label, text_xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(label, lv_color_hex(0x4B5563), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_label_set_text(label, "Visible Networks");

    lv_obj_t * cont = lv_obj_create(networks_cont);
    lv_obj_set_style_radius(cont, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(cont, lv_color_hex(0xffffff), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cont, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(cont, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cont, lv_color_hex(0xd1d5db), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_width(cont, lv_pct(100));
    lv_obj_set_height(cont, LV_SIZE_CONTENT);
    lv_obj_set_flex_flow(cont, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_style_flex_cross_place(cont, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_flex_track_place(cont, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_all(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_row(cont, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    if(ssids == NULL || ssid_count <= 0) {
        label = lv_label_create(cont);
        lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(label, lv_color_hex(0x4B5563), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_hor(label, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_ver(label, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_label_set_text(label, "No network founded");
        return networks_cont;
    }

    for(int i = 0; i < ssid_count; i++) {
        network_row = lv_obj_create(cont);
        lv_obj_add_flag(network_row, LV_OBJ_FLAG_CLICKABLE);
        lv_obj_add_event_cb(network_row, connect_to_network, LV_EVENT_CLICKED, NULL);
        lv_obj_set_width(network_row, lv_pct(100));
        lv_obj_set_height(network_row, LV_SIZE_CONTENT);
        lv_obj_set_flex_flow(network_row, LV_FLEX_FLOW_ROW);
        lv_obj_set_style_flex_cross_place(network_row, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_flex_track_place(network_row, LV_FLEX_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_all(network_row, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_row(network_row, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_hor(network_row, 20, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_pad_ver(network_row, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_width(network_row, i + 1 == ssid_count ? 0 : 1, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_color(network_row, lv_color_hex(0xD4D4D8), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_border_side(network_row, LV_BORDER_SIDE_BOTTOM, LV_PART_MAIN | LV_STATE_DEFAULT);
        icon = lv_image_create(network_row);
        lv_obj_set_width(icon, 32);
        lv_obj_set_height(icon, 32);
        lv_obj_set_style_recolor(icon, lv_color_hex(0xfafafa), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_recolor_opa(icon, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_image_set_src(icon, &img_wifi_connect);
        lv_image_set_inner_align(icon, LV_IMAGE_ALIGN_STRETCH);
        icon = lv_image_create(network_row);
        lv_obj_set_width(icon, 14);
        lv_obj_set_height(icon, 14);
        lv_obj_set_style_margin_top(icon, 18, 0);
        lv_obj_set_style_margin_left(icon, -18, 0);
        lv_obj_set_style_recolor(icon, lv_color_hex(0xfafafa), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_recolor_opa(icon, 128, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_image_set_src(icon, &img_lock_fill);
        lv_image_set_inner_align(icon, LV_IMAGE_ALIGN_STRETCH);
        label = lv_label_create(network_row);
        lv_obj_set_style_text_font(label, text_2xl_normal, LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_text_color(label, lv_color_hex(0x4B5563), LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_label_set_text_fmt(label, "%s", ssids[i]);
        lv_obj_set_name(label, "ssid_label");
    }

    free_ssid_list(ssids, ssid_count);

    return networks_cont;
}
