/*
 * motor_rotate_withfunction_2.c
 *
 * Created: 28-01-2026 10:36:44
 * Author : ASIF
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


void cw(unsigned int delay_ms)
{
	PORTB |= (1 << PB4);   
	PORTB &= ~(1 << PB5); 
	_delay_ms(delay_ms);
}
void ccw(unsigned int delay_ms)
{
	PORTB &= ~(1 << PB4);  
	PORTB |= (1 << PB5);    
	_delay_ms(delay_ms);
}
void stp(unsigned int delay_ms)
{
	PORTB &= ~((1 << PB4) | (1 << PB5));
	_delay_ms(delay_ms);
}

int main(void)
{
	
	DDRB |= (1 << PB5) | (1 << PB4);

	while (1)
	{
		cw(2000);     
		stp(2000);    

		ccw(2000);    
		stp(2000);    
	}
}







