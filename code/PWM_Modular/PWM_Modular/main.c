/*
 * PWM_Modular.c
 *
 * Created: 11-02-2026 11:10:19
 * Author : ASIF
 */ 
#define F_cpu 16000000UL
#include <avr/io.h>
#include "PWM.h"

int main(void)
{
   PWM_int();//initializing PWM
  PWM0__Duty(40);//Duty cycle selection
    while (1) 
    {
    }
}

