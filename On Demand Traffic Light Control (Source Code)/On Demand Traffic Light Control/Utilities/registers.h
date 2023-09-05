/*
 * registers.h
 *
 * Created: 2/20/2023 9:43:34 PM
 *  Author: st
 */ 


/************************************************************************/
/*                  All MicroController Registers                       */
/************************************************************************/

#ifndef REGISTERS_H_
#define REGISTERS_H_

#include "types.h"
// #include <avr/io.h> // (Don't Use This Library)

//PINS
#define PIN0 0
#define PIN1 1
#define PIN2 2
#define PIN3 3
#define PIN4 4
#define PIN5 5
#define PIN6 6
#define PIN7 7

/************************************************************************/
/*                        DIO Registers                                 */
/************************************************************************/

// PORTA Registers
#define PORTA *((volatile uint8_t*)0x3B) // 8 bit register
#define DDRA *((volatile uint8_t*)0x3A) // 8 bit register
#define PINA *((volatile uint8_t*)0x39) // 8 bit register
// PORTB Registers
#define PORTB *((volatile uint8_t*)0x38) // 8 bit register
#define DDRB *((volatile uint8_t*)0x37) // 8 bit register
#define PINB *((volatile uint8_t*)0x36) // 8 bit register
// PORTC Registers
#define PORTC *((volatile uint8_t*)0x35) // 8 bit register
#define DDRC *((volatile uint8_t*)0x34) // 8 bit register
#define PINC *((volatile uint8_t*)0x33) // 8 bit register
// PORTD Registers
#define PORTD *((volatile uint8_t*)0x32) // 8 bit register
#define DDRD *((volatile uint8_t*)0x31) // 8 bit register
#define PIND *((volatile uint8_t*)0x30) // 8 bit register

/************************************************************************/
/*                    TIMER 0 / TIMER 2 Registers                       */
/************************************************************************/

#define TCCR0 *((volatile uint8_t*)0x53) // 8 bit register
#define TCNT0 *((volatile uint8_t*)0x52) // 8 bit register
#define TIFR *((volatile uint8_t*)0x58) // 8 bit register
#define TCCR1A *((volatile uint8_t*)0x4F) // 8 bit register
#define TCCR1B *((volatile uint8_t*)0x4E) // 8 bit register
#define TCCR2 *((volatile uint8_t*)0x45) // 8 bit register
#define TCNT2 *((volatile uint8_t*)0x44) // 8 bit register

/************************************************************************/
/*           EXTERNAL INTERRUPTS Registers                              */
/************************************************************************/
#define SREG *((volatile uint8_t*)0x5F) // 8 bit register
#define GICR *((volatile uint8_t*)0x5B) // 8 bit register
#define GIFR *((volatile uint8_t*)0x5A) // 8 bit register
#define TIMSK *((volatile uint8_t*)0x59) // 8 bit register
#define MCUCR *((volatile uint8_t*)0x55) // 8 bit register
#define MCUCSR *((volatile uint8_t*)0x54) // 8 bit register


#endif /* REGISTERS_H_ */