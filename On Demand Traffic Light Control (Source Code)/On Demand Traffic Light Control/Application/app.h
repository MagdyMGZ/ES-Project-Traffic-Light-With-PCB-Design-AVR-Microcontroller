/*
 * app.h
 *
 * Created: 2/20/2023 9:52:34 PM
 *  Author: st
 */ 


#ifndef APP_H_
#define APP_H_

/************************************************************************/
/*                    FUNCTIONS PROTOTYPES                              */
/************************************************************************/

#include "../ECUAL/LED Driver/led.h"
#include "../ECUAL/Button Driver/button.h"
#include "../MCAL/Timer Driver/timer.h"
#include "../Utilities/interrupts.h"

// Application Initialization
void APP_init(void);
// Start The Application
void APP_start(void);

#endif /* APP_H_ */