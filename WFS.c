/***************************************************************************
*
*
* WFS.c
*
* Created by Shubham Gupta 
* Copyright (c) shubhamgupta.org  and/or its affiliates.
* All rights reserved.
***************************************************************************/

#include "WFS.h"



///////////////////////////////// water FLow ////////////////////
void AB_STEM_init_WFS()// Uses Interupt Pin P3
{	
	sec1=0;min1=0;f_count=0;q1=0;// setting zero as default value for water flow sensors
	
	timersEnable(AB_TIMER_1, 3035,AB_SCALE_256, AB_INTERRUPT_ENABLE,AB_TIMER_NORMAL_MODE,AB_NO_PIN);
	abInterrupt(AB_RISING_EDGE, AB_INT2);	
}

int AB_STEM_Read_WFS() // Timer 1 is used to RUN WATER FLOW SENSOR 
{	
	if(sec1>=1)
	{
		q1=(f_count/7.5);
		f_count=0;
		sec1=0;
		return q1;
	}
	else
	{
		return 0;
	}
}

ISR(TIMER1_OVF_vect)
{
	// Write your Code here for Timer1 Intterupt
	deInitiateTimer(AB_TIMER_1);
	sec1++;
	if(sec1==60)
	{
		min1++;
		sec1=0;
		if(min1==60)
		{
			min1=0;
		}
	}
	timersEnable(AB_TIMER_1, 3035,AB_SCALE_256, AB_INTERRUPT_ENABLE, AB_TIMER_NORMAL_MODE,AB_NO_PIN);
}
ISR(INT2_vect)
{	f_count++;
    
   
}	


int main()
{
	int flow=0;
	AB_STEM_init_WFS();
	
	while(1)
	{
		flow=AB_STEM_Read_WFS()	;	///// Flow rate in LPM
	}

		return 0;
}
