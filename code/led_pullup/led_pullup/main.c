/*
 * led_pullup.c
 *
 * Created: 31-01-2026 10:43:18
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{DDRB|=(1<<DDB5);
	DDRD&=~(1<<DDD4);
	while (1)
	{if(PIND & (1<< PD4))
		{
			PORTB|=(1<< PB5);
			PORTB&=~(1<<PB5);
		}
		else
		{
		
		}
		
	}
}

