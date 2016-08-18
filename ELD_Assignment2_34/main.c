/*
 * main.c
 *
 *  Created on: 16-Aug-2016
 *      Author: ravi and Prasoon (Group34)
 */

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
 int delay=1000;
DDRB |= (1<<PB5); // declaring output pina
while(1)
{
    PORTB |= (1<<PB5);    // setting portb pin 6 to 1
    _delay_ms(delay);      //Delay for   1 second
    PORTB &= ~(1<<PB5);   //setting portb pin 6 to 1 zero
    _delay_ms(delay);      //Delay for  1 second
}
return 0;
}
