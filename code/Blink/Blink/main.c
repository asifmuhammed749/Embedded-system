/*
 * Blink.c
 *
 * Created: 23-01-2026 07:21:46
 * Author : ASIF
 */ 
#define F_CPU 16000000UL //Defining the crystal frequency.16MHz
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB = 0b00001000;//configuring PB3 as output
    while (1) 
    {
		PORTB=0b00001000;//making PB3=HIGH
	_delay_ms(1000);//1000ms delay
	PORTB=0b00000000;//making PB3=LOW
	_delay_ms(1000);//1000ms delay00
    }
}

