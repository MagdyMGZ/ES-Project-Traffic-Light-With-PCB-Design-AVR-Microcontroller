/*
 * led.c
 *
 * Created: 2/20/2023 9:51:48 PM
 *  Author: st
 */ 

#include "led.h"

/************************************************************************/
/*           LED DRIVER FUNCTIONS DEFINITIONS                           */
/************************************************************************/

// Initialize The LED PIN
void LED_init(uint8_t ledPort,uint8_t ledPin)
{
	DIO_init(ledPort,ledPin,OUT);
}

// Turn ON The LED PIN
void LED_on(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,HIGH);
}

// Turn OFF The LED PIN
void LED_off(uint8_t ledPort,uint8_t ledPin)
{
	DIO_write(ledPort,ledPin,LOW);
}

// Toggle The LED PIN
void LED_toggle(uint8_t ledPort,uint8_t ledPin)
{
	DIO_toggle(ledPort,ledPin);
}