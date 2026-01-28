/*
 * motot_rotate_withfunction.c
 *
 * Created: 28-01-2026 10:07:01
 * Author : ASIF
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void CW(void){
	PORTB |= (1 << PB5);    
	PORTB &= ~(1 << PB4); 
}

void CCW(void){
	PORTB |= (1 << PB4);    
	PORTB &= ~(1 << PB5);  
}

void STP(void){
	PORTB &= ~(1 << PB4);
	PORTB &= ~(1 << PB5);
}



int main(void)
{
	DDRB |= (1 << DDB5);
	DDRB |= (1 << DDB4);

	while (1)
	{
		CW();         
		_delay_ms(2000);

		STP();        
		_delay_ms(2000);

		CCW();         
		_delay_ms(2000);

		STP();         
		_delay_ms(2000);
	}
}


