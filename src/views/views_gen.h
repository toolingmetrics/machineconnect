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
#include "components/thermostat_gen.h"
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
extern lv_font_t * font_r16;
extern lv_font_t * font_m16;
extern lv_font_t * font_sb32;
extern lv_font_t * font_b32;

/* Images */

/* Subjects */
extern lv_subject_t subject_temp1;
extern lv_subject_t subject_temp2;
extern lv_subject_t subject_temp3;
extern lv_subject_t subject_hide;

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/* callbacks */
void temp_changed(lv_event_t * e);

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
