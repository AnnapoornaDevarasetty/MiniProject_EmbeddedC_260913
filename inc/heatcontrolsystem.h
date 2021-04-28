#ifndef _HEATCONTROLSYSTEM_H_
#define _HEATCONTROLSYSTEM_H_

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
#endif //_HEATCONTROLSYSTEM_H_