/**
 * @file settings_screen_gen.h
 */

#ifndef SETTINGS_SCREEN_H
#define SETTINGS_SCREEN_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "lvgl/lvgl.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include "src/controllers/settings/network_controller.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
lv_obj_t * settings_screen_create(void);
lv_obj_t * networks_init(lv_obj_t * parent);
void toggle_wifi(lv_event_t * e);

/* Callback */
void connect_to_network(lv_event_t * e);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*SETTINGS_SCREEN_H*/