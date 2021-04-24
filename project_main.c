/**
 * @file project_main.c
 * @author V S Annapoorna Devarasetty (annapurnadvs@gmail.com)
 * @brief   Activity-1 of Embedded Systems
 * @version 0.1
 * @date 2021-04-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>

/**
 * @brief 
 * 
 * @return int 
 */
int main(void)
{
    DDRB|=(1<<PB0);         //Set B0=1 for LED
    DDRD&=~(1<<PD0);        //Clear bit at D0
    PORTD|=(1<<PD0);        //Set bit at D0
    DDRD&=~(1<<PD1);        //Clear bit at D1
    PORTD|=(1<<PD1);        //Set bit at D1

    while(1)
    {
        if(!(PIND&(1<<PD0))&&!(PIND&(1<<PD1)))        //If both the switches are ON the LED glows
        {
            PORTB|=(1<<PB0);
        }
        else                                          //Even one switch is off the LED doesn't glow
        {
            PORTB&=~(1<<PB0);
        }
    }

    return 0;
}
