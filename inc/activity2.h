/**
 * @file activity2.h
 * @author Annapoorna Devarasetty
 * @brief Header files for Activity2
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief Intializing analog to digital coverter
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

#endif /* _ACTIVITY2_H_ */