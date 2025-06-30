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
void update_system_status(lv_timer_t * timer);

static bool has_ip_address(const char *iface);
static int check_wifi_status(void);
static int check_bluetooth_status(void);

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL VARIABLES
 **********************/
extern lv_obj_t *main_screen;

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