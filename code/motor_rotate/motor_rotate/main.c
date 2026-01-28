/*
 * motor_rotate.c
 *
 * Created: 28-01-2026 09:15:25
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB|=(1<<DDB5);//CONFIGURING PB5 AS OUTPUT
	DDRB|=(1<<DDB4);	
		while (1){     //direction 1
			PORTB|=(1<<PB5);//PB5 AS HIGH
			PORTB&=~(1<<PB4);//PB4 AS LOW
			_delay_ms(2000);
			

			    //stop
			PORTB&=~(1<<PB4);//PB4 AS LOW
			PORTB&=~(1<<PB5);//PB5 AS LOW
			_delay_ms(2000);
			   //direction 2
			PORTB|=(1<<PB4);//PB4 AS HIGH
			PORTB&=~(1<<PB5);//PB5 AS LOW
			_delay_ms(2000);
				//stop
			PORTB&=~(1<<PB4);//PB4 AS LOW
			PORTB&=~(1<<PB5);//PB5 AS LOW
			_delay_ms(2000);
		}
	}
   
		

   

