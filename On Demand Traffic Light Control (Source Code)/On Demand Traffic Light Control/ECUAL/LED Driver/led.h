/*
 * led.h
 *
 * Created: 2/20/2023 9:52:02 PM
 *  Author: st
 */ 


#ifndef LED_H_
#define LED_H_

#include "../../MCAL/DIO Driver/dio.h"

/************************************************************************/
/*               LED DRIVER FUNCTIONS PROTOTYPES                        */
/************************************************************************/

// Car port and pins
#define LED_CAR_PORT PORT_A
#define LED_CAR_G_PIN PIN0
#define LED_CAR_Y_PIN PIN1
#define LED_CAR_R_PIN PIN2

// Pedestrian port and pins
#define LED_PED_PORT PORT_B
#define LED_PED_G_PIN PIN0
#define LED_PED_Y_PIN PIN1
#define LED_PED_R_PIN PIN2

// Initialize The LED PIN
void LED_init(uint8_t ledPort,uint8_t ledPin);

// Turn ON The LED PIN
void LED_on(uint8_t ledPort,uint8_t ledPin);

// Turn OFF The LED PIN
void LED_off(uint8_t ledPort,uint8_t ledPin);

// Toggle The LED PIN
void LED_toggle(uint8_t ledPort,uint8_t ledPin);

#endif /* LED_H_ */