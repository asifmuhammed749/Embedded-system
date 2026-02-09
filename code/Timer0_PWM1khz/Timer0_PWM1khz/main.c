/*
 * Timer0_PWM1khz.c
 *
 * Created: 08-02-2026 16:08:58
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>


int main(void)
{
	DDRD|=(1<<PD6);//CONFIGURING PD5 AS OUTPUT
	TCCR0A|=(1<<WGM00)|(1<<WGM01);//FAST PWM
	TCCR0A|=(1<<COM0A1);//NON INVERTING PWM
	TCCR0B|=(1<<CS01)|(1<<CS00);//PRESCALAR 64
    OCR0A=102;
    while (1) 
    {
    }
}

