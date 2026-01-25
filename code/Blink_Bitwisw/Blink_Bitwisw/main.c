/*
 * Blink_Bitwisw.c
 *
 * Created: 25-01-2026 11:13:21
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{DDRB|=(1<<DDB5);//CONFIGURING PB5 AS OUTPUT
    
    while (1) 
    {
		PORTB|=(1<<PB5);//PB5 AS HIGH
		_delay_ms(1000);
		PORTB&=~(1<<PB5);//PB5 AS LOW
		_delay_ms(1000);
    }
}

