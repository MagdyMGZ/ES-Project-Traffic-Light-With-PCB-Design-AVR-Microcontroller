/*
 * dio.c
 *
 * Created: 2/20/2023 9:46:33 PM
 *  Author: st
 */ 

#include "dio.h"

/************************************************************************/
/*              DIO DRIVER FUNCTIONS DEFINITIONS                        */
/************************************************************************/

// Digital Input / Output PIN Direction Initialization
void DIO_init(uint8_t portNumber, uint8_t pinNumber, uint8_t direction)
{
	// Check The Inputs Validity (PORTS & PINS)
	if ((portNumber <= PORT_D) && (pinNumber <= PIN7))
	{
		switch(portNumber)
		{
			case PORT_A:
			if(direction == IN)
			{					
				CLEAR_BIT(DDRA,pinNumber);
			}
			else if (direction == OUT)
			{
				SET_BIT(DDRA,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_B:
			if(direction == IN)
			{
				CLEAR_BIT(DDRB,pinNumber);
			}
			else if (direction == OUT)
			{
				SET_BIT(DDRB,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_C:
			if(direction == IN)
			{
				CLEAR_BIT(DDRC,pinNumber);
			}
			else if (direction == OUT)
			{
				SET_BIT(DDRC,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_D:
			if(direction == IN)
			{
				CLEAR_BIT(DDRD,pinNumber);
			}
			else if (direction == OUT)
			{
				SET_BIT(DDRD,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
		}
	}
}

// Digital Input / Output Write a Value On PIN
void DIO_write(uint8_t portNumber, uint8_t pinNumber, uint8_t value)
{
	// Check The Inputs Validity (PORTS & PINS)
	if ((portNumber <= PORT_D) && (pinNumber <= PIN7))
	{
		switch(portNumber)
		{
			case PORT_A:
			if(value == LOW)
			{
				//PORTA &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTA,pinNumber);
			}
			else if (value == HIGH)
			{
				//PORTA |= (1<<pinNumber); //write 1
				SET_BIT(PORTA,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_B:
			if(value == LOW)
			{
				//PORTB &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTB,pinNumber);
			}
			else if (value == HIGH)
			{
				//PORTB |= (1<<pinNumber); //write 1
				SET_BIT(PORTB,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_C:
			if(value == LOW)
			{
				//PORTC &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTC,pinNumber);
			}
			else if (value == HIGH)
			{
				//PORTC |= (1<<pinNumber); //write 1
				SET_BIT(PORTC,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
			case PORT_D:
			if(value == LOW)
			{
				//PORTD &= ~(1<<pinNumber); //write 0
				CLEAR_BIT(PORTD,pinNumber);
			}
			else if (value == HIGH)
			{
				//PORTD |= (1<<pinNumber); //write 1
				SET_BIT(PORTD,pinNumber);
			}
			else
			{
				// Error Handling
			}
			break;
		}
	}
}

// Digital Input / Output Toggle PIN Value
void DIO_toggle(uint8_t portNumber, uint8_t pinNumber)
{
	// Check The Inputs Validity (PORTS & PINS)
	if ((portNumber <= PORT_D) && (pinNumber <= PIN7))
	{
		switch(portNumber)
		{
			case PORT_A:
			//PORTA ^= (1<<pinNumber);
			TOGGLE_BIT(PORTA,pinNumber);
			break;
			case PORT_B:
			//PORTB ^= (1<<pinNumber);
			TOGGLE_BIT(PORTB,pinNumber);
			break;
			case PORT_C:
			//PORTC ^= (1<<pinNumber);
			TOGGLE_BIT(PORTC,pinNumber);
			break;
			case PORT_D:
			//PORTD ^= (1<<pinNumber);
			TOGGLE_BIT(PORTD,pinNumber);
			break;
		}	
	}
	else
	{
		// Error Handling
	}
}

// Digital Input / Output READ PIN Value
void DIO_read(uint8_t portNumber, uint8_t pinNumber, uint8_t* value)
{
	// Check The Inputs Validity (PORTS & PINS)
	if ((portNumber <= PORT_D) && (pinNumber <= PIN7))
	{
		switch (portNumber)
		{
			case PORT_A:
			//*value = ((PINA&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINA,pinNumber);
	    	break;
		    case PORT_B:
			//*value = ((PINB&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINB,pinNumber);
	     	break;
		    case PORT_C:
			//*value = ((PINC&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PINC,pinNumber);
		    break;
		    case PORT_D:
			//*value = ((PIND&(1<<pinNumber))>>pinNumber);
			*value = READ_BIT(PIND,pinNumber);
	    	break;
		}
	}
	else
	{
		// Error Handling
	}
}