/**
 * @file activity1.h
 * @author Annapoorna Devarasetty
 * @brief Header files for Activity1
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY1_H_
#define _ACTIVITY1_H_

#include <avr/io.h>
/**
 * @brief Macro to turn the LED ON by setting 0th bit of PORTB
 * 
 */
#define LED_ON PORTB|=(1<<PB0)
/**
 * @brief Macro to turn the LED OFF by clearing the 0th bit of PORTB
 * 
 */
#define LED_OFF PORTB&=~(1<<PB0)
/**
 * @brief Setting and Clearing the LED's
 * 
 */
void peripheralInit();

#endif /* _ACTIVITY1_H_ */

