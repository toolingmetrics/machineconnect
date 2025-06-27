/**
 * @file views.h
 */

#ifndef VIEWS_H
#define VIEWS_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#include "views_gen.h"

/*********************
 *      DEFINES
 *********************/
void time_update_system_item_cb(lv_timer_t * timer);

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/

/**
 * Initialize the component library
 */
void views_init(const char * asset_path);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*VIEWS_H*/