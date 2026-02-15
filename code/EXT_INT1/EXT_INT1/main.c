/*
 * EXT_INT1.c
 *
 * Created: 14-02-2026 13:53:56
 * Author : ASIF
 */ 

 #define F_CPU 16000000UL
 #include <avr/io.h>
 #include <util/delay.h>
 #include <avr/interrupt.h>
 uint8_t flag=0;
 ISR(INT1_vect)//INTERRUPT VECTOR TABLE
 {
	 flag=1;
 }
 int main(void)
 {
	 DDRB|=(1<<PB5);//PB5 AS OUTPUT
	 DDRB|=(1<<PB4);//PB4 AS OUTPUT
	 DDRD&=~(1<<PD3);//PD2 AS INPUT
	 EIMSK|=(1<<INT1);//ENABLING INT0
	 EICRA|=(1<<ISC11);//INTERRUPT ON FALLING EDGE
	 sei();// ENABLING GOLBAL INTERUPT
	 while (1)
	 {
		 PORTB|=(1<<PB5);
		 _delay_ms(1000);
		 PORTB&=~(1<<PB5);
		 _delay_ms(1000);
		 if (flag==1)
		 {
			 PORTB|=(1<<PB4);
			 _delay_ms(5000);
			 PORTB&=~(1<<PB4);
		 }
	 }
 }

