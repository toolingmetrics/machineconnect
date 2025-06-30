/**
 * @file navbar_gen.h
 */

#ifndef NAVBAR_H
#define NAVBAR_H

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

lv_obj_t * navbar_create(lv_obj_t * parent, const lv_image_dsc_t * icon, const char * title);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*NAVBAR_H*/