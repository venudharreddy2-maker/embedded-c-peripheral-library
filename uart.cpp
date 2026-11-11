
#include <avr/io.h>
#include "uart.h"

void UART_Init(void)
{
    // Configure baud rate: 9600 at 16 MHz
    UBRR0H = 0;
    UBRR0L = 103;

    // Enable transmitter and receiver
    UCSR0B = (1 << TXEN0) | (1 << RXEN0);

    // 8 data bits, 1 stop bit
    UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}

void UART_Transmit(char data)
{
    while (!(UCSR0A & (1 << UDRE0)));

    UDR0 = data;
}

char UART_Receive(void)
{
    while (!(UCSR0A & (1 << RXC0)));

    return UDR0;
}

uint8_t UART_Available(void)
{
    return (UCSR0A & (1 << RXC0));
}

void UART_SendString(const char *str)
{
    while (*str)
    {
        UART_Transmit(*str++);
    }
}
