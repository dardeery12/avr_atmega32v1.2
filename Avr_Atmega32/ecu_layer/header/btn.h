/**
 ********************************************************************************
 * @file    btn.h
 * @author  Abo Drda
 * @date    Jun 22, 2023
 * @brief   
 ********************************************************************************
 */

#ifndef HAL_LAYER_HEADER_BTN_H_
#define HAL_LAYER_HEADER_BTN_H_


/************************************
 * INCLUDES
 ************************************/
 
#include "../../hal_layer/header/hal_gpio.h"
 
 
/************************************
 * MACROS AND DEFINES
 ************************************/



/************************************
			Example


button_t  btn1 ={.button_pin.port = PORTD,.button_pin.pin = GPIO_PIN3,
		.button_state = BUTTON_RELEASED,.button_connection = BUTTON_ACTIVE_HIGH};
 ************************************/

/************************************
 * TYPEDEFS
 ************************************/

typedef enum{
    BUTTON_PRESSED = 0,
    BUTTON_RELEASED
}button_state_t;

typedef enum{
    BUTTON_ACTIVE_HIGH,
    BUTTON_ACTIVE_LOW
}button_active_t;

typedef struct{
    pin_config_t button_pin;
    button_state_t button_state;
    button_active_t button_connection;
}button_t;



/************************************
 * EXPORTED VARIABLES
 ************************************/





/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/
Std_ReturnType button_initialize(const button_t *btn);

Std_ReturnType button_read_state(const button_t *btn, button_state_t *btn_state);

#endif

