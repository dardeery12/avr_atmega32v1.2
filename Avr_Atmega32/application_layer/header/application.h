

#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "../header/application_cnfg.h"

#include "../../ecu_layer/header/ecu_layer_init.h"
#if   GPIO_MODULE_ENABLE == ENABLE
#include"../../hal_layer/header/hal_gpio.h"
#endif

/*
#if    == ENABLE
#include
#endif
#if    == ENABLE
#include
#endif
#if    == ENABLE
#include
#endif
#if    == ENABLE
#include
#endif
*/
#include <util/delay.h>



Std_ReturnType application_initialize();

#endif  /*_APPLICATION_H_  */
