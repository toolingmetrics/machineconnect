/**
 * @file views_gen.h
 */

#ifndef VIEWS_GEN_H
#define VIEWS_GEN_H

#ifndef UI_SUBJECT_STRING_LENGTH
#define UI_SUBJECT_STRING_LENGTH 256
#endif

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/

#include "lvgl/lvgl.h"

/*Include all the widget and components of this library*/
#include "components/buttons/btn_action_gen.h"
#include "components/checkbox/checkbox_gen.h"
#include "components/header_gen.h"
#include "components/row_gen.h"
#include "screens/main_screen_gen.h"

/*********************
 *      DEFINES
 *********************/

// TODO: should these definitions be prefixed with the project name?


/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/* Global Styles */

/* Fonts */
extern lv_font_t * text_xs_normal;
extern lv_font_t * text_xs_medium;
extern lv_font_t * text_xs_semibold;
extern lv_font_t * text_xs_bold;
extern lv_font_t * text_sm_normal;
extern lv_font_t * text_sm_medium;
extern lv_font_t * text_sm_semibold;
extern lv_font_t * text_sm_bold;
extern lv_font_t * text_base_normal;
extern lv_font_t * text_base_medium;
extern lv_font_t * text_base_semibold;
extern lv_font_t * text_base_bold;
extern lv_font_t * text_lg_normal;
extern lv_font_t * text_lg_medium;
extern lv_font_t * text_lg_semibold;
extern lv_font_t * text_lg_bold;
extern lv_font_t * text_xl_normal;
extern lv_font_t * text_xl_medium;
extern lv_font_t * text_xl_semibold;
extern lv_font_t * text_xl_bold;
extern lv_font_t * text_2xl_normal;
extern lv_font_t * text_2xl_medium;
extern lv_font_t * text_2xl_semibold;
extern lv_font_t * text_2xl_bold;
extern lv_font_t * text_3xl_normal;
extern lv_font_t * text_3xl_medium;
extern lv_font_t * text_3xl_semibold;
extern lv_font_t * text_3xl_bold;
extern lv_font_t * text_4xl_normal;
extern lv_font_t * text_4xl_medium;
extern lv_font_t * text_4xl_semibold;
extern lv_font_t * text_4xl_bold;
extern lv_font_t * text_5xl_normal;
extern lv_font_t * text_5xl_medium;
extern lv_font_t * text_5xl_semibold;
extern lv_font_t * text_5xl_bold;
extern lv_font_t * text_6xl_normal;
extern lv_font_t * text_6xl_medium;
extern lv_font_t * text_6xl_semibold;
extern lv_font_t * text_6xl_bold;
extern lv_font_t * text_7xl_normal;
extern lv_font_t * text_7xl_medium;
extern lv_font_t * text_7xl_semibold;
extern lv_font_t * text_7xl_bold;
extern lv_font_t * text_8xl_normal;
extern lv_font_t * text_8xl_medium;
extern lv_font_t * text_8xl_semibold;
extern lv_font_t * text_8xl_bold;

/* Images */

/* Subjects */
extern lv_subject_t subject_system_time;
extern lv_subject_t subject_bluetooth_on;
extern lv_subject_t subject_wifi_on;
extern lv_subject_t subject_ethernet_on;
extern lv_subject_t subject_nfc_on;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */
void tool_load(lv_event_t * e);
void tool_unload(lv_event_t * e);
void tool_exchange(lv_event_t * e);
void tool_data(lv_event_t * e);
void setup_assistant(lv_event_t * e);

/**
 * Initialize the component library
 */

void views_init_gen(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*VIEWS_GEN_H*/
