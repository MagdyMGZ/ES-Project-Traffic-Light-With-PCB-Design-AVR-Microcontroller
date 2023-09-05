/*
 * timer.c
 *
 * Created: 2/20/2023 9:48:59 PM
 *  Author: st
 */ 

#include "timer.h"
#include <math.h>
#include "../../Utilities/bit_manipulation.h"

void TIMER_init()
{
	//normal mode Timer Counter Control Register
	TCCR0 = 0x00;
}

void TIMER_delay(uint16_t millisec)
{
	uint16_t Noverflows,TimerInitial;
	double Tmaxdelay,Ttick;
	uint32_t overFlowcnt = 0;
	
	// max delay 256 micro second
	// at 1MHz no Prescaler
	// 256 Prescaler 0 -> 255
	// ms    Ttick = Presc/FCPU
	// timer is set up to generate interrupts at a fixed time interval of Ttick.
	Ttick = 256.0/1000.0;
	// ms		Tmaxdelay = Ttick * 2^8 // as Timer0 (8 bits)
	Tmaxdelay = 65.536; 
	// takes the maximum delay time Tmaxdelay and the current value of the timer in milliseconds (millisec) as input, 
	// and calculates the initial timer value (TimerInitial) and the number of timer overflows required (Noverflows) 
	// to generate the desired delay.
	if(millisec<Tmaxdelay)
	{
		// checks if the remaining time to reach Tmaxdelay is less than the current timer interval (Ttick). 
		// If so, it sets the TimerInitial to the number of timer ticks remaining to reach Tmaxdelay, 
		// and sets Noverflows to 1, indicating that only one timer overflow is needed to generate the delay.
		TimerInitial = (Tmaxdelay-millisec)/Ttick;
		Noverflows = 1;
	}
	else if(millisec == (int)Tmaxdelay)
	{
		TimerInitial=0;
		Noverflows=1;
	}
	else
	{
		// calculates the number of timer overflows needed to generate the delay by dividing the 
		// total delay time (millisec) by Tmaxdelay and taking the ceiling of the result 
		// (to ensure that enough overflows are generated to reach the desired delay). 
		// The code then calculates the initial timer value by subtracting the current timer value 
		// from (1<<8) (i.e. 256) and dividing by the number of overflows required.
		Noverflows = ceil((double)millisec/Tmaxdelay);
		TimerInitial = (1<<8) - ((double)millisec/Ttick)/Noverflows;
	}
	// Timer0 Counter
	TCNT0 = TimerInitial;
	//set 256 Prescaler
	TCCR0 |= (1<<2); 
	
	while(overFlowcnt<Noverflows)
	{
		// TIFR = Timer Interrupt Flag Register
		// busy wait
		while(READ_BIT(TIFR,0)==0);
		// clear overflow flag
		SET_BIT(TIFR,0);
		// increment counter
		overFlowcnt++;
	}
	
	// Timer stop
	TCCR0 = 0x00;
}