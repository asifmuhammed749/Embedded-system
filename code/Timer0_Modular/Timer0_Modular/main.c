/*
 * Timer0_Modular.c
 *
 * Created: 12-02-2026 09:14:26
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include "timer.h"

int main(void)
{
	 DDRB|=(1<<DDB5);//configuring pin5 as output
   Timer0_init();
   delay_1ms();
   DDRB|=(1<<DDB5);//configuring pin5 as output
    while (1) 
    {
		PORTB|=(1<<PB5);//PB5 is ON
		delay_1ms();
		PORTB&=~(1<<PB5);
		delay_1ms();
    }
}

