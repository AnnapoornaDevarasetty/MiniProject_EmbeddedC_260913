#include"activity2.h"
#include <avr/io.h>
#include <util/delay.h>


void Init_ADC()                                       //Intializing the analog to digital convertor
{
    ADMUX=(1<<REFS0);
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}

uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;                                       //Selecting ADC Channel
    ch=ch&0b00000111;
    ADMUX|=ch;
    ADCSRA|=(1<<ADSC);                                 //Starts Single Conversion
    while(!(ADCSRA&(1<<ADIF)));
    ADCSRA|=(1<<ADIF);                                 //Clearing ADIF
    return(ADC);
}
