
#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

typedef enum {
    GPIO_INPUT,
    GPIO_OUTPUT
} GPIO_Mode;

void GPIO_Init(uint8_t pin, GPIO_Mode mode);
void GPIO_Write(uint8_t pin, uint8_t state);
uint8_t GPIO_Read(uint8_t pin);

#endif
