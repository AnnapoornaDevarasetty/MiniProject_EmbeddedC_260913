/**
 * @file project_main.c
 * @author V S Annapoorna Devarasetty 
 * @brief  Main program to execute heat control system
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include"activity1.h"
#include"activity2.h"
#include"activity3.h"
#include"activity4.h"

#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief Main program to execute the Seat Heater Control System
 * 
 * @return int 
 */
int main(void)
{
    peripheralInit();
    Init_ADC();                                        //Intializing ADC(Analog to Digital convertor)
    TimerGenerator();                                  //Generates the Timer Wave
    UART_Init(103);                                    //Intializing UART
    uint16_t read;
    while(1)
    {
        if(!(PIND&(1<<PD0))&&!(PIND&(1<<PD1)))        //If both the switches are ON the LED glows
        {
            LED_ON;
            while(1)
            {
                read=Read_ADC(0);
                PWMOutput(read);                       //PWM Output of the given temperature input by ADC
                _delay_ms(200);
            }

        }
        else                                          //Even one switch is off the LED doesn't glow
        {
            OCR1A = 0;
            LED_OFF;
            _delay_ms(200);
        }
    }
    return 0;
}



