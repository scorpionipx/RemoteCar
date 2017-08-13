/*
 * pwm.c
 *
 * Created: 13-Aug-17 10:06:10 PM
 *  Author: ScorpionIPX
 */ 

#include <avr/io.h>

void init_PWM(void)
{
	DDRD = 0b00110000;
	ICR1 = 800; /*CUSTOM TOP OF TIMER1*/
	
	TCCR1A = 0b10100010; /*SET PWM ON BOTH PD4 AND PD5*/
	TCCR1B = 0b00011001; /*0x19*/
	
	OCR1A = 0; /*FACTOR DE UMPLERE PWM1: 0-800*/
	OCR1B = 0; /*FACTOR DE UMPLERE PWM2: 0:800*/
}