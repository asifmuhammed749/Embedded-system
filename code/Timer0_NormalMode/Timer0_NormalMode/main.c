/*
 * Timer0_NormalMode.c
 *
 * Created: 04-02-2026 09:55:44
 * Author : ASIF
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
void delay_1ms()
{
	for(long int i=0; i<62500;i++)
   {
	   while(!(TIFR0&(1<<TOV0)));//wait until TOV0=1
	   TIFR0|=(1<<TOV0);//writing 1 to TOV0 bit to make it 0.
   }
}
int main(void)
{
	TCNT0=0;//initial value of TCNT0=0
	//configuring Timer 0 for normal mode
		TCCR0B&=~(1<<WGM00);
		TCCR0B&=~(1<<WGM01);
    //configuring Time0 for no scalar condition
	TCCR0B|=(1<<CS00);
	TCCR0B&=~(1<<CS01);
	TCCR0B&=~(1<<CS02);
	//CONFIGURING A PIN FOR LED
	DDRB|=(1<<PB5);//CONFIGURING PIN5 AS OUTPUT
    while (1) 
    {
		PORTB|=(1<<PB5);
		delay_1ms();
		PORTB&=~(1<<PB5);
		delay_1ms();
    }
}

