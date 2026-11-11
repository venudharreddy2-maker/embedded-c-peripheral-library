
#include "uart.h"

char received_data[32];
uint8_t index = 0;

void setup()
{
    UART_Init();
    UART_SendString("UART Ready!\r\n");
}

void loop()
{
    if (UART_Available())
    {
        char received = UART_Receive();

        if (received == '\n' || received == '\r')
        {
            if (index > 0)
            {
                received_data[index] = '\0';

                UART_SendString("Received: ");
                UART_SendString(received_data);
                UART_SendString("\r\n");

                index = 0;
            }
        }
        else
        {
            if (index < sizeof(received_data) - 1)
            {
                received_data[index++] = received;
            }
        }
    }
}
