/**
 * @file activity3.h
 * @author Annapoorna Devarasetty
 * @brief Header files for Activity3
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY3_H_
#define _ACTIVITY3_H_

#include <avr/io.h>
#include <util/delay.h>
/**
 * @brief Generating Timer Wave
 * 
 */
void TimerGenerator(void);
/**
 * @brief Output of Pulse Width Modulation
 * 
 * @param ADCval 
 * @return char 
 */
char PWMOutput(uint16_t ADCval);

#endif /* _ACTIVITY3_H_ */