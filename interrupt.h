/***************************************************************************
*
*
* interrupt.h
*
* Created by Shubham Gupta 
* Copyright (c) shubhamgupta.org  and/or its affiliates.
* All rights reserved.
***************************************************************************/

#ifndef __INTERRUPT_HEADER_H__
#define __INTERRUPT_HEADER_H__

#include "avrCommon.h"
#include "pins.h"

////////////////////////////////// Interrupts //////////////////////////////////

#define AB_LOW_LEVEL		0
#define AB_ANY_EDGE			1
#define AB_FALLING_EDGE		2
#define AB_RISING_EDGE		3



#define AB_INT0	0
#define AB_INT1	1
#define AB_INT2	2
#define AB_INT3	3
#define AB_INT4	4
#define AB_INT5	5
#define AB_INT6	6
#define AB_INT7	7



///////////// Interrupts /////////////////////////

void abInterrupt(unsigned int mode, unsigned int pin_N);
void deInitialiseInterrupt(unsigned int pin_N);



#endif //__INTERRUPT_HEADER_H__
