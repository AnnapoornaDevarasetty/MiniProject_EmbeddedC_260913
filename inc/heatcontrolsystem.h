#ifndef __HEATCONTROLSYSTEM_H_
#define __HEATCONTROLSYSTEM_H_
/**
 * @file heatcontrolsystem.h
 * @author V S Annapoorna Devarasetty
 * @brief  Header file to execute the heat control system
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <avr/io.h>
#include <util/delay.h>

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
/**
 * @brief Intialising analog to digital coverter
 * 
 */
void Init_ADC();
/**
 * @brief To recieve the inputs from temperature sensor to a register ADC
 * 
 * @param ch 
 * @return uint16_t 
 */
uint16_t Read_ADC(uint8_t ch);


#endif /** __HEATCONTROLSYSTEM_H_ */