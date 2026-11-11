
#include <Arduino.h>
#include "gpio.h"

void GPIO_Init(uint8_t pin, GPIO_Mode mode)
{
    pinMode(pin, mode);
}

void GPIO_Write(uint8_t pin, uint8_t state)
{
    digitalWrite(pin, state);
}

uint8_t GPIO_Read(uint8_t pin)
{
    return digitalRead(pin);
}
