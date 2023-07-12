/* 
 * File:   hal_std_types.h
 * Author: Rofy&Omar
 *
 * Created on June 13, 2023, 5:33 PM
 */

#ifndef HAL_STD_TYPES_H
#define	HAL_STD_TYPES_H

/* Section : Includes */

#include"mcal_std.h"


/* Section: Data Type Declarations */

typedef   unsigned char              uint8;
typedef   signed char                suint8;
typedef   unsigned short             uint16;
typedef   signed short               sint16;
typedef   unsigned int               uint32;
typedef   signed int                 suint32;

typedef   uint8                Std_ReturnType;

/* Section: Macro Declarations */
#define E_OK                 (Std_ReturnType)0x00
#define E_NOK                (Std_ReturnType)0x01

#define ZERO_INIT            (uint8)0x00


/* Section: Macro Functions Declarations */

/* Section: Function Declarations */


#endif	/* HAL_STD_TYPES_H */

