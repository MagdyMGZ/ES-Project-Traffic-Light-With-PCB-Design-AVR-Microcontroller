/*
 * bit_manipulation.h
 *
 * Created: 2/20/2023 9:42:50 PM
 *  Author: st
 */ 


#ifndef BIT_MANIPULATION_H_
#define BIT_MANIPULATION_H_

// Set Bit Macro
#define SET_BIT(REG,NUM) (REG |= (1 << NUM))

// Clear Bit Macro
#define CLEAR_BIT(REG,NUM) (REG &= ~ (1 << NUM))

// Read Bit Macro
#define READ_BIT(REG,NUM) ((REG & (1 << NUM)) >> NUM)

// Toggle Bit Macro
#define TOGGLE_BIT(REG,NUM) (REG ^= (1 << NUM))

#endif /* BIT_MANIPULATION_H_ */