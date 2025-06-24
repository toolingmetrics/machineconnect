/**
 * @file thermostat_gen.h
 */

#ifndef THERMOSTAT_H
#define THERMOSTAT_H

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

void temp_changed(lv_event_t * e);

lv_obj_t * thermostat_create(lv_obj_t * parent, lv_subject_t * temp);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*THERMOSTAT_H*/