/*
 * timer.h
 *
 * Created: 2/20/2023 9:49:15 PM
 *  Author: st
 */ 


#ifndef TIMER_H_
#define TIMER_H_


#include "../../Utilities/registers.h"
#include "../../Utilities/types.h"

// Timer0 is an 8-bit timer, which means that it can count from 0 to 255 (256 steps) before it overflows. 
// It can operate in different modes, including normal mode, CTC (Clear Timer on Compare) mode, and PWM (Pulse Width Modulation) mode.
// In normal mode, Timer0 simply counts up from 0 to 255 and then starts over again. 
// the timer can be configured to generate an interrupt or reset itself when it reaches a certain value. 
// And useful for generating precise delays and for timing events. 
// initialize Timer0
void TIMER_init();
// delay of specific amount default uses 256 Prescalar (Counts From 0 -> 255)
void TIMER_delay(uint16_t millisec); 


#endif /* TIMER_H_ */