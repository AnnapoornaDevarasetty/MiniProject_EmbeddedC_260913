#include "heatcontrolsystem.h"
#include<avr/io.h>


void peripheralInit()
{
    DDRB|=(1<<PB0);         //Set B0=1 for LED
    DDRD&=~(1<<PD0);        //Clear bit at D0
    PORTD|=(1<<PD0);        //Set bit at D0
    DDRD&=~(1<<PD1);        //Clear bit at D1
    PORTD|=(1<<PD1);        //Set bit at D1
}