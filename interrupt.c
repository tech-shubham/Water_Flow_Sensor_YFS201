/***************************************************************************
*
*
* interrupt.c
*
* Created by Shubham Gupta 
* Copyright (c) shubhamgupta.org  and/or its affiliates.
* All rights reserved.
***************************************************************************/

#include "interrupt.h"


void abInterrupt(unsigned int mode, unsigned int pin_N)
{
	if(pin_N == AB_INT0)
	{
		EICRA |= mode;
		
	}
	else if(pin_N == AB_INT1)
	{
		EICRA |= (mode<<2);
		
	}
	
	else if(pin_N == AB_INT2)
	{
		EICRA |= (mode<<4);
		
	}
	
	else if(pin_N == AB_INT3)
	{
		EICRA |= (mode<<6);
		
	}
	
	else if(pin_N == AB_INT4)
	{
		EICRB |= mode;
		
	}
	
	else if(pin_N == AB_INT5)
	{
		EICRB |= (mode<<2);
		
	}
	
	else if(pin_N == AB_INT6)
	{
		EICRB |= (mode<<4);
		
	}
	
	else if(pin_N == AB_INT7)
	{
		EICRA |= (mode<<6);
		
	}
	EIMSK|= (1<<pin_N);
	
	sei();
	
}


void initialiseInterrupt(unsigned int pin_N)
{
	if(pin_N == AB_INT0)
	{
		EIMSK&=~(1<<pin_N);
		
	}
}


//////////////////// Write your Code here for External INterrupt /////////////////

ISR(INT0_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
	
	if(bit_is_set(PIND,PD6))
			{
				setValue(AB_P2,AB_LOW);
				_delay_ms(50);
			}
			else
			{
				setValue(AB_P2,AB_HIGH);
				_delay_ms(50);
				
			}

}

/*ISR(INT1_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}

ISR(INT2_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}

ISR(INT3_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}
*/
ISR(INT4_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}

ISR(INT5_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}

ISR(INT6_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}

ISR(INT7_vect)
{
	///////Write your code here for interrupt on INT0 pin ////////
}












