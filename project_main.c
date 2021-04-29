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

#include <avr/io.h>
#include <util/delay.h>


/**
 * @brief Main program to execute the Heat Control System
 * 
 * @return int 
 */
int main(void)
{
    peripheralInit();
    Init_ADC();
    TimerGenerator();
    uint16_t t;
    char temp_data;
    while(1)
    {
        if(!(PIND&(1<<PD0))&&!(PIND&(1<<PD1)))        //If both button and heater are ON the LED glows
        {
            LED_ON;
            while(1)
            {
                t=Read_ADC(0);
                temp_data = PWMOutput(t);
                _delay_ms(200);
            }

        }
        else                                          //Even one of button and heater is off the LED doesn't glow
        {
            LED_OFF;
            OCR1A = 0;
            _delay_ms(200);
        }
    }
    return 0;
}


