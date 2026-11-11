
#include <avr/io.h>
#include <avr/interrupt.h>
#include "timer.h"

// Flag updated by timer interrupt
volatile uint8_t timer_tick = 0;

// Timer1 Compare Match Interrupt
ISR(TIMER1_COMPA_vect)
{
    timer_tick = 1;
}

void Timer_Init(void)
{
    cli();  // Disable interrupts during configuration

    TCCR1A = 0;
    TCCR1B = 0;

    TCNT1 = 0;

    // 1 second at 16 MHz with prescaler 1024
    OCR1A = 15624;

    // Enable CTC mode
    TCCR1B |= (1 << WGM12);

    // Set prescaler to 1024
    TCCR1B |= (1 << CS12) | (1 << CS10);

    // Enable Timer1 compare interrupt
    TIMSK1 |= (1 << OCIE1A);

    sei();  // Enable interrupts
}
