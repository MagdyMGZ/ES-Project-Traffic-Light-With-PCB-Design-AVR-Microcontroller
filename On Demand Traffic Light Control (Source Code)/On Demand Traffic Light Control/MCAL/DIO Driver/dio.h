/*
 * dio.h
 *
 * Created: 2/20/2023 9:46:45 PM
 *  Author: st
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Utilities/registers.h"
#include "../../Utilities/bit_manipulation.h"
#include "../../Utilities/types.h"

/************************************************************************/
/*                    DIO DRIVER MACROS                                 */
/************************************************************************/

// PORT Direction Macros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'

// PIN Direction defines
#define IN 0
#define OUT 1

// Value defines
#define LOW 0
#define HIGH 1

/************************************************************************/
/*                 DIO DRIVER FUNCTIONS PROTOTYPES                      */
/************************************************************************/

// Digital Input / Output PIN Direction Initialization
void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction);

// Digital Input / Output Write a Value On PIN 
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value);

// Digital Input / Output Toggle PIN Value
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber);

// Digital Input / Output READ PIN Value
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t* value);

#endif /* DIO_H_ */