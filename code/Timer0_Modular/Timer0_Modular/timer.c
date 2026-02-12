/*
 * timer.c
 *
 * Created: 12-02-2026 09:23:40
 *  Author: ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
void Timer0_init(void)
{
	//normal mode
	TCCR0A&=~(1<<WGM00);
    TCCR0A&=~(1<<WGM01);
	//prescalar=0
	TCCR0B|=(1<<CS00);
	TCCR0B&=~(1<<CS01);
	TCCR0B&=~(1<<CS02);

}
void delay_1ms(void)
{
	for (long int i=0;i<62500;i++)
	{
		TCNT0 = 0;
		while(!(TIFR0&(1<<TOV0)));//wait until TOV0=1
		TIFR0|=(TOV0);// FOR clearing 
	}
}