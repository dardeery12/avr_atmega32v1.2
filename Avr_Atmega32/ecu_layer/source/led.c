/**
 ********************************************************************************
 * @file    led.c
 * @author  Abdo Drd
 * @date    22/6/2023
 * @brief
 ********************************************************************************
 */

/************************************
 * INCLUDES
 ************************************/

#include "../header/led.h"

/************************************
 * EXTERN VARIABLES
 ************************************/

/************************************
 * PRIVATE MACROS AND DEFINES
 ************************************/

/************************************
 * PRIVATE TYPEDEFS
 ************************************/

/************************************
 * STATIC VARIABLES
 ************************************/

/************************************
 * GLOBAL VARIABLES
 ************************************/

/************************************
 * STATIC FUNCTION PROTOTYPES
 ************************************/

/************************************
 * STATIC FUNCTIONS
 ************************************/

/************************************
 * GLOBAL FUNCTIONS
 ************************************/
/**
 *
 * @param led
 * @return
 */
Std_ReturnType led_inialize(led_t * led)
{
	Std_ReturnType ret = E_NOK;
	if(NULL == led)
	{
		ret = E_NOK;
	}
	else
	{
		pin_config_t  led_pin ={.port = led->port, .pin = led->pin,
				.direction = GPIO_PIN_OUTPOT, .logic = led->status};
		gpio_pin_initalize(&led_pin);
		ret = E_OK;
	}

	return ret;
}
/**
 *
 * @param led
 * @return
 */
Std_ReturnType led_turn_on(led_t * led)
{
	Std_ReturnType ret = E_NOK;

	pin_config_t  loc_pin = {.port = led->port,
			.pin = led->pin, .logic = HIGH};
	if(NULL == led)
	{
		ret = E_NOK;
	}
	else
	{
		gpio_pin_write_logic(&loc_pin, HIGH);

		ret = E_OK;
	}

	return ret;
}
/**
 *
 * @param led
 * @return
 */
Std_ReturnType led_turn_off(led_t * led)
{
	Std_ReturnType ret = E_NOK;

	pin_config_t  loc_pin = {.port = led->port,
			.pin = led->pin, .logic = LOW};
	if(NULL == led)
	{
		ret = E_NOK;
	}
	else
	{
		gpio_pin_write_logic(&loc_pin, LOW);

		ret = E_OK;
	}

	return ret;
}
/**
 *
 * @param led
 * @return
 */
Std_ReturnType led_toggle(led_t * led)
{
	Std_ReturnType ret = E_NOK;

	pin_config_t  loc_pin = {.port = led->port,
			.pin = led->pin, .logic = LOW};
	if(NULL == led)
	{
		ret = E_NOK;
	}
	else
	{
		gpio_pin_toggle(&loc_pin);

		ret = E_OK;
	}

	return ret;
}

