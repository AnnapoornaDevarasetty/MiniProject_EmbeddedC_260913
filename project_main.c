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
//#include <avr/io.h>
#include "heatcontrolsystem.h"

/**
 * @brief 
 * 
 * @return int 
 */
int main(void)
{
    peripheralInit();
    Init_ADC();
    uint16_t temp;
    while(1)
    {
        if(!(PIND&(1<<PD0))&&!(PIND&(1<<PD1)))        //If both button and heater are ON the LED glows
        {
            LED_ON;
            while(1)
            {
                temp=Read_ADC(0);
                _delay_ms(200);
            }

        }
        else                                          //Even one of button and heater is off the LED doesn't glow
        {
            LED_OFF;
        }
    }
    return 0;
}


