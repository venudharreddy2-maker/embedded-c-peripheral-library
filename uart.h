
#ifndef UART_H
#define UART_H

#include <stdint.h>

void UART_Init(void);
void UART_Transmit(char data);
char UART_Receive(void);
uint8_t UART_Available(void);
void UART_SendString(const char *str);

#endif
