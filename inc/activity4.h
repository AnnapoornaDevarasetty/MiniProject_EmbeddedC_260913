/**
 * @file activity4.h
 * @author Annapoorna Devarasetty
 * @brief Header files for Activity4
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_

#include <avr/io.h>
#include <util/delay.h>
#include<string.h>
/**
 * @brief Intializing the UART Serial Communication
 * 
 * @param ubrrVal 
 */
void UART_Init(uint16_t ubrrVal);
/**
 * @brief Reading the UART Values
 * 
 * @return char 
 */
char UART_Read();
/**
 * @brief Writing the Characters from UART ports
 * 
 * @param data 
 */
void UART_Write(char data);

#endif /* _ACTIVITY4_H_ */