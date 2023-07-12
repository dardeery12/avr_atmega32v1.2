/*
 * application.c
 *
 *  Created on: Jun 22, 2023
 *      Author: Abdo
 */


#include"../header/application.h"

#define     delay_Time        9000
#define     delay        _delay_ms(delay_Time)

uint8 Loc_Counter = 0;
int main()
{
	Std_ReturnType    ret = E_NOK;
	application_initialize();

	while(1)
	{

	}

	return ret;
}
/**
 *
 * @return
 */
Std_ReturnType application_initialize()
{
	Std_ReturnType ret = E_NOK;

	ret = Ecu_Inialize();


	return ret;
}
