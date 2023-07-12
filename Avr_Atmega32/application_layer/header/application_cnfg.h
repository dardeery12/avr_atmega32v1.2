/**
 ********************************************************************************
 * @file    application_cnfg.h
 * @author  Abo Drda
 * @date    Jun 23, 2023
 * @brief   this module is used to configure the modules will be included
 * 			to use any module should active it  ENABLE
 * 			like ---->
 * 			#define GPIO_MODULE_ENABLE    				 ENABLE
 * 			#define GPIO_MODULE_ENABLE    				 DISABLE
 ********************************************************************************
 */

#ifndef APPLICATION_LAYER_HEADER_APPLICATION_CNFG_H_
#define APPLICATION_LAYER_HEADER_APPLICATION_CNFG_H_


/************************************
 * INCLUDES
 ************************************/
 
 
 
 
 
 
/************************************
 * MACROS AND DEFINES
 ************************************/

#define   DISABLE        0U
#define   ENABLE         1U




#define GPIO_MODULE_ENABLE    				 ENABLE
#define LED_MODULE_ENABLE    				 DISABLE
#define BTN_MODULE_ENABLE     				 DISABLE
#define RELAY_MODULE_ENABLE  				 DISABLE
#define MOTOR_MODULE_ENABLE    			     DISABLE
#define SSD_MODULE_ENABLE					 ENABLE
#define SSD_BCD_ENABLE					     DISABLE

/*
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
#define 					 ENABLE
*/




/************************************
 * TYPEDEFS
 ************************************/





/************************************
 * EXPORTED VARIABLES
 ************************************/





/************************************
 * GLOBAL FUNCTION PROTOTYPES
 ************************************/

#endif

