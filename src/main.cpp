/* 
 * MeArm robotic arm - driver software.
 *
 * This project contains source code of an Arduino-based controller
 * for a custom-built MeArm robotic arm. Hardware is based on schematics
 * from: https://github.com/mimeindustries/MeArm
 *
 * Copyright 2017 Patryk Nowak - http://nowak.pt/
 */

#include <avr/io.h>
#include <util/delay.h>


#define LED_PIN 5


int main()
{
	DDRB |= (1 << LED_PIN);

	for (;;)
	{
		PORTB |= (1 << LED_PIN);
		_delay_ms(60);

		PORTB &= ~(1 << LED_PIN);
		_delay_ms(940);
	}
}

