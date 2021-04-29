#include"activity3.h"
#include <avr/io.h>
#include <util/delay.h>
#include<string.h>

void TimerGenerator(void)
{
    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11);
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRB|=(1<<PB1);
}

char PWMOutput(uint16_t ADCval)
{
    int i;
    if((ADCval>=0) && (ADCval<=200))
    {

        OCR1A = 170;    //Duty cycle=20%
        char temp1[25]="Temperature is 20°C\n";
        for(i=0;i<=20;i++)
        {
            UART_Write(temp1[i]);
        }
        _delay_ms(20);
    }
    else if((ADCval>=210) && (ADCval<=500))
    {

        OCR1A = 390;    //Duty cycle=40%
        char temp2[25]="Temperature is 25°C\n";
        for(i=0;i<=20;i++)
        {
            UART_Write(temp2[i]);
        }
        _delay_ms(20);
    }
    else if((ADCval>=510) && (ADCval<=700))
    {

        OCR1A = 670;    //Duty cycle=70%
        char temp3[25]="Temperature is 29°C\n";
        for(i=0;i<=20;i++)
        {
            UART_Write(temp3[i]);
        }
        _delay_ms(20);
    }
    else if((ADCval>=710) && (ADCval<=1024))
    {

        OCR1A = 970;    //Duty cycle=95%
        char temp4[25]="Temperature is 33°C\n";
        for(i=0;i<=20;i++)
        {
            UART_Write(temp4[i]);
        }
        _delay_ms(20);
    }
    else
    {
        OCR1A = 0; //0% output
        char temp5[25]="Heater is OFF\n";
        for(i=0;i<=15;i++)
        {
            UART_Write(temp5[i]);
        }
    }
    return 0;
}