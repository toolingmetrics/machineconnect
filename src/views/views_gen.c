/**
 * @file views_gen.c
 */

/*********************
 *      INCLUDES
 *********************/
#include "views_gen.h"

#if LV_USE_XML
#endif

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *  GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */
lv_font_t * text_xs_normal;
extern uint8_t Barlow_Regular_ttf_data[];
extern size_t Barlow_Regular_ttf_data_size;
lv_font_t * text_xs_medium;
extern uint8_t Barlow_Medium_ttf_data[];
extern size_t Barlow_Medium_ttf_data_size;
lv_font_t * text_xs_semibold;
extern uint8_t Barlow_SemiBold_ttf_data[];
extern size_t Barlow_SemiBold_ttf_data_size;
lv_font_t * text_xs_bold;
extern uint8_t Barlow_Bold_ttf_data[];
extern size_t Barlow_Bold_ttf_data_size;
lv_font_t * text_sm_normal;
lv_font_t * text_sm_medium;
lv_font_t * text_sm_semibold;
lv_font_t * text_sm_bold;
lv_font_t * text_base_normal;
lv_font_t * text_base_medium;
lv_font_t * text_base_semibold;
lv_font_t * text_base_bold;
lv_font_t * text_lg_normal;
lv_font_t * text_lg_medium;
lv_font_t * text_lg_semibold;
lv_font_t * text_lg_bold;
lv_font_t * text_xl_normal;
lv_font_t * text_xl_medium;
lv_font_t * text_xl_semibold;
lv_font_t * text_xl_bold;
lv_font_t * text_2xl_normal;
lv_font_t * text_2xl_medium;
lv_font_t * text_2xl_semibold;
lv_font_t * text_2xl_bold;
lv_font_t * text_3xl_normal;
lv_font_t * text_3xl_medium;
lv_font_t * text_3xl_semibold;
lv_font_t * text_3xl_bold;
lv_font_t * text_4xl_normal;
lv_font_t * text_4xl_medium;
lv_font_t * text_4xl_semibold;
lv_font_t * text_4xl_bold;
lv_font_t * text_5xl_normal;
lv_font_t * text_5xl_medium;
lv_font_t * text_5xl_semibold;
lv_font_t * text_5xl_bold;
lv_font_t * text_6xl_normal;
lv_font_t * text_6xl_medium;
lv_font_t * text_6xl_semibold;
lv_font_t * text_6xl_bold;
lv_font_t * text_7xl_normal;
lv_font_t * text_7xl_medium;
lv_font_t * text_7xl_semibold;
lv_font_t * text_7xl_bold;
lv_font_t * text_8xl_normal;
lv_font_t * text_8xl_medium;
lv_font_t * text_8xl_semibold;
lv_font_t * text_8xl_bold;

/* Images */

/*Subjects*/
lv_subject_t subject_system_time;
lv_subject_t subject_bluetooth_on;
lv_subject_t subject_wifi_on;
lv_subject_t subject_ethernet_on;
lv_subject_t subject_nfc_on;

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

void views_init_gen(const char * asset_path)
{
    char buf[256];

    /* Global Styles */

    /* Subjects */
    static char subject_system_time_buf[UI_SUBJECT_STRING_LENGTH];
    static char subject_system_time_prev_buf[UI_SUBJECT_STRING_LENGTH];
    lv_subject_init_string(&subject_system_time,
                            subject_system_time_buf,
                            subject_system_time_prev_buf,
                            UI_SUBJECT_STRING_LENGTH,
                            ""
                          );
    lv_subject_init_int(&subject_bluetooth_on, 0);
    lv_subject_init_int(&subject_wifi_on, 0);
    lv_subject_init_int(&subject_ethernet_on, 0);
    lv_subject_init_int(&subject_nfc_on, 0);

    /* Fonts */
    /* create tiny ttf font 'text_xs_normal' from C array */
    text_xs_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 12);
    /* create tiny ttf font 'text_xs_medium' from C array */
    text_xs_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 12);
    /* create tiny ttf font 'text_xs_semibold' from C array */
    text_xs_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 12);
    /* create tiny ttf font 'text_xs_bold' from C array */
    text_xs_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 12);
    /* create tiny ttf font 'text_sm_normal' from C array */
    text_sm_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 14);
    /* create tiny ttf font 'text_sm_medium' from C array */
    text_sm_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 14);
    /* create tiny ttf font 'text_sm_semibold' from C array */
    text_sm_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 14);
    /* create tiny ttf font 'text_sm_bold' from C array */
    text_sm_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 14);
    /* create tiny ttf font 'text_base_normal' from C array */
    text_base_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 16);
    /* create tiny ttf font 'text_base_medium' from C array */
    text_base_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 16);
    /* create tiny ttf font 'text_base_semibold' from C array */
    text_base_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 16);
    /* create tiny ttf font 'text_base_bold' from C array */
    text_base_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 16);
    /* create tiny ttf font 'text_lg_normal' from C array */
    text_lg_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 18);
    /* create tiny ttf font 'text_lg_medium' from C array */
    text_lg_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 18);
    /* create tiny ttf font 'text_lg_semibold' from C array */
    text_lg_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 18);
    /* create tiny ttf font 'text_lg_bold' from C array */
    text_lg_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 18);
    /* create tiny ttf font 'text_xl_normal' from C array */
    text_xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 20);
    /* create tiny ttf font 'text_xl_medium' from C array */
    text_xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 20);
    /* create tiny ttf font 'text_xl_semibold' from C array */
    text_xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 20);
    /* create tiny ttf font 'text_xl_bold' from C array */
    text_xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 20);
    /* create tiny ttf font 'text_2xl_normal' from C array */
    text_2xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 24);
    /* create tiny ttf font 'text_2xl_medium' from C array */
    text_2xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 24);
    /* create tiny ttf font 'text_2xl_semibold' from C array */
    text_2xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 24);
    /* create tiny ttf font 'text_2xl_bold' from C array */
    text_2xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 24);
    /* create tiny ttf font 'text_3xl_normal' from C array */
    text_3xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 30);
    /* create tiny ttf font 'text_3xl_medium' from C array */
    text_3xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 30);
    /* create tiny ttf font 'text_3xl_semibold' from C array */
    text_3xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 30);
    /* create tiny ttf font 'text_3xl_bold' from C array */
    text_3xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 30);
    /* create tiny ttf font 'text_4xl_normal' from C array */
    text_4xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 36);
    /* create tiny ttf font 'text_4xl_medium' from C array */
    text_4xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 36);
    /* create tiny ttf font 'text_4xl_semibold' from C array */
    text_4xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 36);
    /* create tiny ttf font 'text_4xl_bold' from C array */
    text_4xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 36);
    /* create tiny ttf font 'text_5xl_normal' from C array */
    text_5xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 48);
    /* create tiny ttf font 'text_5xl_medium' from C array */
    text_5xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 48);
    /* create tiny ttf font 'text_5xl_semibold' from C array */
    text_5xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 48);
    /* create tiny ttf font 'text_5xl_bold' from C array */
    text_5xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 48);
    /* create tiny ttf font 'text_6xl_normal' from C array */
    text_6xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 60);
    /* create tiny ttf font 'text_6xl_medium' from C array */
    text_6xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 60);
    /* create tiny ttf font 'text_6xl_semibold' from C array */
    text_6xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 60);
    /* create tiny ttf font 'text_6xl_bold' from C array */
    text_6xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 60);
    /* create tiny ttf font 'text_7xl_normal' from C array */
    text_7xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 72);
    /* create tiny ttf font 'text_7xl_medium' from C array */
    text_7xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 72);
    /* create tiny ttf font 'text_7xl_semibold' from C array */
    text_7xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 72);
    /* create tiny ttf font 'text_7xl_bold' from C array */
    text_7xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 72);
    /* create tiny ttf font 'text_8xl_normal' from C array */
    text_8xl_normal = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 96);
    /* create tiny ttf font 'text_8xl_medium' from C array */
    text_8xl_medium = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 96);
    /* create tiny ttf font 'text_8xl_semibold' from C array */
    text_8xl_semibold = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 96);
    /* create tiny ttf font 'text_8xl_bold' from C array */
    text_8xl_bold = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 96);

    /* Images */

    #if LV_USE_XML

        lv_xml_register_font(NULL, "text_xs_normal", text_xs_normal);
        lv_xml_register_font(NULL, "text_xs_medium", text_xs_medium);
        lv_xml_register_font(NULL, "text_xs_semibold", text_xs_semibold);
        lv_xml_register_font(NULL, "text_xs_bold", text_xs_bold);
        lv_xml_register_font(NULL, "text_sm_normal", text_sm_normal);
        lv_xml_register_font(NULL, "text_sm_medium", text_sm_medium);
        lv_xml_register_font(NULL, "text_sm_semibold", text_sm_semibold);
        lv_xml_register_font(NULL, "text_sm_bold", text_sm_bold);
        lv_xml_register_font(NULL, "text_base_normal", text_base_normal);
        lv_xml_register_font(NULL, "text_base_medium", text_base_medium);
        lv_xml_register_font(NULL, "text_base_semibold", text_base_semibold);
        lv_xml_register_font(NULL, "text_base_bold", text_base_bold);
        lv_xml_register_font(NULL, "text_lg_normal", text_lg_normal);
        lv_xml_register_font(NULL, "text_lg_medium", text_lg_medium);
        lv_xml_register_font(NULL, "text_lg_semibold", text_lg_semibold);
        lv_xml_register_font(NULL, "text_lg_bold", text_lg_bold);
        lv_xml_register_font(NULL, "text_xl_normal", text_xl_normal);
        lv_xml_register_font(NULL, "text_xl_medium", text_xl_medium);
        lv_xml_register_font(NULL, "text_xl_semibold", text_xl_semibold);
        lv_xml_register_font(NULL, "text_xl_bold", text_xl_bold);
        lv_xml_register_font(NULL, "text_2xl_normal", text_2xl_normal);
        lv_xml_register_font(NULL, "text_2xl_medium", text_2xl_medium);
        lv_xml_register_font(NULL, "text_2xl_semibold", text_2xl_semibold);
        lv_xml_register_font(NULL, "text_2xl_bold", text_2xl_bold);
        lv_xml_register_font(NULL, "text_3xl_normal", text_3xl_normal);
        lv_xml_register_font(NULL, "text_3xl_medium", text_3xl_medium);
        lv_xml_register_font(NULL, "text_3xl_semibold", text_3xl_semibold);
        lv_xml_register_font(NULL, "text_3xl_bold", text_3xl_bold);
        lv_xml_register_font(NULL, "text_4xl_normal", text_4xl_normal);
        lv_xml_register_font(NULL, "text_4xl_medium", text_4xl_medium);
        lv_xml_register_font(NULL, "text_4xl_semibold", text_4xl_semibold);
        lv_xml_register_font(NULL, "text_4xl_bold", text_4xl_bold);
        lv_xml_register_font(NULL, "text_5xl_normal", text_5xl_normal);
        lv_xml_register_font(NULL, "text_5xl_medium", text_5xl_medium);
        lv_xml_register_font(NULL, "text_5xl_semibold", text_5xl_semibold);
        lv_xml_register_font(NULL, "text_5xl_bold", text_5xl_bold);
        lv_xml_register_font(NULL, "text_6xl_normal", text_6xl_normal);
        lv_xml_register_font(NULL, "text_6xl_medium", text_6xl_medium);
        lv_xml_register_font(NULL, "text_6xl_semibold", text_6xl_semibold);
        lv_xml_register_font(NULL, "text_6xl_bold", text_6xl_bold);
        lv_xml_register_font(NULL, "text_7xl_normal", text_7xl_normal);
        lv_xml_register_font(NULL, "text_7xl_medium", text_7xl_medium);
        lv_xml_register_font(NULL, "text_7xl_semibold", text_7xl_semibold);
        lv_xml_register_font(NULL, "text_7xl_bold", text_7xl_bold);
        lv_xml_register_font(NULL, "text_8xl_normal", text_8xl_normal);
        lv_xml_register_font(NULL, "text_8xl_medium", text_8xl_medium);
        lv_xml_register_font(NULL, "text_8xl_semibold", text_8xl_semibold);
        lv_xml_register_font(NULL, "text_8xl_bold", text_8xl_bold);

        lv_xml_register_subject(NULL, "system_time", &subject_system_time);
        lv_xml_register_subject(NULL, "bluetooth_on", &subject_bluetooth_on);
        lv_xml_register_subject(NULL, "wifi_on", &subject_wifi_on);
        lv_xml_register_subject(NULL, "ethernet_on", &subject_ethernet_on);
        lv_xml_register_subject(NULL, "nfc_on", &subject_nfc_on);

        lv_xml_register_event_cb(NULL, "tool_load", tool_load);
        lv_xml_register_event_cb(NULL, "tool_unload", tool_unload);
        lv_xml_register_event_cb(NULL, "tool_exchange", tool_exchange);
        lv_xml_register_event_cb(NULL, "tool_data", tool_data);
        lv_xml_register_event_cb(NULL, "setup_assistant", setup_assistant);
        lv_xml_register_event_cb(NULL, "system_settings", system_settings);
    #endif
}

/* callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) tool_load(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_load was called\n");
}
void __attribute__((weak)) tool_unload(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_unload was called\n");
}
void __attribute__((weak)) tool_exchange(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_exchange was called\n");
}
void __attribute__((weak)) tool_data(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("tool_data was called\n");
}
void __attribute__((weak)) setup_assistant(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("setup_assistant was called\n");
}
void __attribute__((weak)) system_settings(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("system_settings was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/
