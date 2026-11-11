
#ifndef TIMER_H
#define TIMER_H

#include <stdint.h>

extern volatile uint8_t timer_tick;

void Timer_Init(void);

#endif
