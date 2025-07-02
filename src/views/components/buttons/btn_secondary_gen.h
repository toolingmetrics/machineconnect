/**
 * @file btn_secondary_gen.h
 */

#ifndef BTN_SECONDARY_H
#define BTN_SECONDARY_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

lv_obj_t * btn_secondary_create(lv_obj_t * parent, const char * title, const lv_image_dsc_t * icon, lv_color_t color);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*BTN_SECONDARY_H*/