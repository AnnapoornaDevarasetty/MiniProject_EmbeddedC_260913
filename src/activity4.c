#include "activity4.h"
#include <avr/io.h>
#include <util/delay.h>
#include<string.h>

void UART_Init(uint16_t ubrrVal)
{

    UBRR0L = ubrrVal;
    UBRR0H = (ubrrVal>>8)&(0x00ff);
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ00)|(1<<UCSZ01);
    UCSR0B = (1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

char UART_Read()
{
    while(!(UCSR0A & (1<<RXC0)))
    {

    }
    return UDR0;
}

void UART_Write(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {

    }
    UDR0 = data;
}