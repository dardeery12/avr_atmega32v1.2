/* 
 * File:   hal_gpio.h
 * Author: Rofy&Omar
 *
 * Created on June 13, 2023, 5:35 PM
 */



#ifndef HAL_GPIO_H
#define	HAL_GPIO_H
/* Section : Includes */

#include "hal_std_types.h"
#include "hal_gpio_cnfg.h"




/* Section: Macro Declarations */
/*
#define PORTA_WRITE_REG            *(volatile uint8 * )0x3B
#define PORTA_DIR_REG              *(volatile uint8 * )0x3A
#define PORTA_Read_REG             *(volatile uint8 * )0x39

#define PORTB_WRITE_REG            *(volatile uint8 * )0x38
#define PORTB_DIR_REG              *(volatile uint8 * )0x37
#define PORTB_Read_REG             *(volatile uint8 * )0x36

#define PORTC_WRITE_REG            *(volatile uint8 * )0x35
#define PORTC_DIR_REG              *(volatile uint8 * )0x34
#define PORTC_Read_REG             *(volatile uint8 * )0x33

#define PORTD_WRITE_REG            *(volatile uint8 * )0x32
#define PORTD_DIR_REG              *(volatile uint8 * )0x31
#define PORTD_Read_REG             *(volatile uint8 * )0x30
 */

/* Section: Macro Functions Declarations */
#define ACCESS_REG(REG)                 (*(volatile uint8 * )(REG))
#define SET_BIT(REG, BIT_NUM)           (REG |=(1<<(BIT_NUM)))
#define CLEAR_BIT(REG, BIT_NUM)         (REG &=~(1<<BIT_NUM))
#define TOGGLE_BIT(REG, BIT_NUM)        (REG ^=(1<<BIT_NUM))
#define READ_BIT(REG, BIT_NUM)          ((REG >>BIT_NUM)&(0X01))

#define SET_REG(REG)                    (ACCESS_REG(REG) = 0XFF)
#define CLEAR_REG(REG)                  (ACCESS_REG(REG) = 0X00)

/* Section: Data Type Declarations */

typedef enum {
	PORTA = 0x39,
	PORTB = 0x36,
	PORTC = 0x33,
	PORTD = 0x30,
}port_index_t;

typedef enum{
	GPIO_PIN0,
	GPIO_PIN1,
	GPIO_PIN2,
	GPIO_PIN3,
	GPIO_PIN4,
	GPIO_PIN5,
	GPIO_PIN6,
	GPIO_PIN7
}pin_index_t;

typedef enum{
	GPIO_PIN_OUTPOT,
	GPIO_PIN_INPOT
}direction_t;

typedef enum{
	LOW = 0,
	HIGH
}logic_t;

typedef struct {
	port_index_t   port ;           /* @ref port_index_t */
	pin_index_t    pin : 3;         /* @ref pin_index_t */
	direction_t    direction : 1;   /* @ref direction_index_t */
	logic_t        logic : 1;       /* @ref logic */
}pin_config_t;


Std_ReturnType gpio_pin_direction_initalize(const pin_config_t * pin_cnfg, direction_t dir);
Std_ReturnType gpio_pin_get_direction_status(const pin_config_t * pin_cnfg, logic_t * logic);
Std_ReturnType gpio_pin_write_logic(const pin_config_t * pin_cnfg,  logic_t logic);
Std_ReturnType gpio_pin_read(const pin_config_t * pin_cnfg ,logic_t * logic);
Std_ReturnType gpio_pin_toggle(const pin_config_t * pin_cnfg);
Std_ReturnType gpio_pin_initalize(const pin_config_t * pin_cnfg);


Std_ReturnType gpio_port_direction_intialize(port_index_t port, direction_t direction);
Std_ReturnType gpio_port_get_direction_status(port_index_t port, uint8 *direction_status);
Std_ReturnType gpio_port_write_logic(port_index_t port, uint8 logic);
Std_ReturnType gpio_port_read_logic(port_index_t port, uint8 *logic);
Std_ReturnType gpio_port_toggle_logic(port_index_t port);



#endif	/* HAL_GPIO_H */

