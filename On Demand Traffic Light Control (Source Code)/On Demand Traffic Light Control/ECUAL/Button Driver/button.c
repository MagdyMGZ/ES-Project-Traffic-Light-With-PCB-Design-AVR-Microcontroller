/*
 * button.c
 *
 * Created: 2/20/2023 9:51:18 PM
 *  Author: st
 */ 

#include "button.h"

/************************************************************************/
/*           BUTTON DRIVER FUNCTIONS DEFINITIONS                        */
/************************************************************************/

// Initialize Button PIN
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin)
{
	DIO_init(buttonPort,buttonPin,IN);
}

// READ Button PIN Value
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value)
{
	DIO_read(buttonPort,buttonPin,value);
}
