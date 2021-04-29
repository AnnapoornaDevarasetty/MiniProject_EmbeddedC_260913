#include"activity3.h"
#include <avr/io.h>
#include <util/delay.h>

void TimerGenerator(void)
{
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char PWMOutput(uint16_t ADCval)
{
    if((ADCval>=0) && (ADCval<=200))
    {

        OCR1A = 170; //20% duty cycle
        _delay_ms(20);
    }
    else if((ADCval>=210) && (ADCval<=500))
    {

        OCR1A = 390; //40% duty cycle
        _delay_ms(20);
    }
    else if((ADCval>=510) && (ADCval<=700)){

        OCR1A = 673;//70% duty cycle
        _delay_ms(20);
    }
    else if((ADCval>=710) && (ADCval<=1024))
    {

        OCR1A = 973; //95% duty cycle
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; //0% output
    }
}