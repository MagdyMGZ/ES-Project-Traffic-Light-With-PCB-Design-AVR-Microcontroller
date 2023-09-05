/*
 * interrupts.h
 *
 * Created: 2/20/2023 9:43:18 PM
 *  Author: st
 */ 


#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

// #include <avr/interrupt.h>  // (Don't Use This Library)

#include "registers.h"

// Interrupt vectors Requests
#define EXT_INT_0 __vector_1
#define EXT_INT_1 __vector_2

// Enable interrupts

// Set Global Interrupts, Set the I_bit in Status Register to 1
#define sei()  __asm__ __volatile__ ("sei" ::: "memory")
// CLEAR Global Interrupts, Set the I_bit in Status Register to 0
#define cli()  __asm__ __volatile__ ("cli" ::: "memory")

// Rising edge
#define RISING_EDGE_SETUP() MCUCR|= (1<<1) | (1<<0)

// Setup use INT0
#define SETUP_INT0() GICR|=(1<<6)

// ISR (Interrupt Surface Routine) macro (Definition)
#define ISR(INT_VECT) \
void INT_VECT(void) __attribute__ ((signal,used)); \
void INT_VECT(void)

#endif /* INTERRUPTS_H_ */