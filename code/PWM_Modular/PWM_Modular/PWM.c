/*
 * PWM.c
 *
 * Created: 11-02-2026 11:13:44
 *  Author: ASIF
 */ 
#define F_cpu 16000000UL
#include <avr/io.h>

void PWM_int(void)
{
//pd6 as output	
DDRD|=(1<<PD6);
//FAST PWM
TCCR0A|=(1<<WGM01)|(1<<WGM00);
//NO INVERTING
TCCR0A|=(1<<COM0A1);
TCCR0A&=~(1<<COM0A0);
//PRESCALAR 64
TCCR0B|=(1<<CS01)|(1<<CS00);
TCCR0B&=~(1<<CS02);
//INITIALY OCROA=0
OCR0A=0;
}
void PWM0__Duty(uint8_t duty_percentage)
{
	if(duty_percentage>100)//LIMITING DUTY CYCLE TO 100
	{
	duty_percentage=100	;
	}
	OCR0A=(uint8_t)((duty_percentage*256)/100);
}