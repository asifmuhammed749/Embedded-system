/*
 * Timer0_PWM8Khz.c
 *
 * Created: 08-02-2026 16:22:29
 * Author : ASIF
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>

int main(void)
{
	DDRD |= (1<<DDD6);   // PD6  as output

	// Fast PWM
	TCCR0A |= (1<<WGM00) | (1<<WGM01);

	// Inverting PWM
	TCCR0A |= (1<<COM0A1) | (1<<COM0A0);

	// Prescaler = 8
	TCCR0B |= (1<<CS01);

	// 60% duty cycle
	OCR0A = 102;

	while (1)
	{
	}
}


