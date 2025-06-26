/**
 * @file btn_action_gen.h
 */

#ifndef BTN_ACTION_H
#define BTN_ACTION_H

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

lv_obj_t * btn_action_create(lv_obj_t * parent, const void * icon, int32_t size, int32_t padding);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*BTN_ACTION_H*/