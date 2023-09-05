/*
 * button.h
 *
 * Created: 2/20/2023 9:51:31 PM
 *  Author: st
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_

#include "../../MCAL/DIO Driver/dio.h"

//Button port and pin
#define BUTTON_1_PORT PORT_D
#define BUTTON_1_PIN PIN2

/************************************************************************/
/*           BUTTON DRIVER FUNCTION PROTOTYPE                           */
/************************************************************************/

// Initialize Button PIN
void BUTTON_init(uint8_t buttonPort,uint8_t buttonPin);

// READ Button PIN Value
void BUTTON_read(uint8_t buttonPort,uint8_t buttonPin,uint8_t *value);

#endif /* BUTTON_H_ */