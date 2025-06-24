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
lv_font_t * font_r16;
extern uint8_t Barlow_Regular_ttf_data[];
extern size_t Barlow_Regular_ttf_data_size;
lv_font_t * font_m16;
extern uint8_t Barlow_Medium_ttf_data[];
extern size_t Barlow_Medium_ttf_data_size;
lv_font_t * font_sb32;
extern uint8_t Barlow_SemiBold_ttf_data[];
extern size_t Barlow_SemiBold_ttf_data_size;
lv_font_t * font_b32;
extern uint8_t Barlow_Bold_ttf_data[];
extern size_t Barlow_Bold_ttf_data_size;

/* Images */

/*Subjects*/
lv_subject_t subject_temp1;
lv_subject_t subject_temp2;
lv_subject_t subject_temp3;
lv_subject_t subject_hide;

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
    lv_subject_init_int(&subject_temp1, 10);
    lv_subject_init_int(&subject_temp2, 20);
    lv_subject_init_int(&subject_temp3, 20);
    lv_subject_init_int(&subject_hide, 0);

    /* Fonts */
    /* create tiny ttf font 'font_r16' from C array */
    font_r16 = lv_tiny_ttf_create_data(Barlow_Regular_ttf_data, Barlow_Regular_ttf_data_size, 16);
    /* create tiny ttf font 'font_m16' from C array */
    font_m16 = lv_tiny_ttf_create_data(Barlow_Medium_ttf_data, Barlow_Medium_ttf_data_size, 16);
    /* create tiny ttf font 'font_sb32' from C array */
    font_sb32 = lv_tiny_ttf_create_data(Barlow_SemiBold_ttf_data, Barlow_SemiBold_ttf_data_size, 32);
    /* create tiny ttf font 'font_b32' from C array */
    font_b32 = lv_tiny_ttf_create_data(Barlow_Bold_ttf_data, Barlow_Bold_ttf_data_size, 32);

    /* Images */

    #if LV_USE_XML

        lv_xml_register_font(NULL, "font_r16", font_r16);
        lv_xml_register_font(NULL, "font_m16", font_m16);
        lv_xml_register_font(NULL, "font_sb32", font_sb32);
        lv_xml_register_font(NULL, "font_b32", font_b32);


        lv_xml_register_subject(NULL, "temp1", &subject_temp1);
        lv_xml_register_subject(NULL, "temp2", &subject_temp2);
        lv_xml_register_subject(NULL, "temp3", &subject_temp3);
        lv_xml_register_subject(NULL, "hide", &subject_hide);

        lv_xml_register_event_cb(NULL, "temp_changed", temp_changed);
    #endif
}

/* callbacks */
#if defined(LV_EDITOR_PREVIEW)
void __attribute__((weak)) temp_changed(lv_event_t * e)
{
   LV_UNUSED(e);
   LV_LOG("temp_changed was called\n");
}
#endif

/**********************
 *   STATIC FUNCTIONS
 **********************/
