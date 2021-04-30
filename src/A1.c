#include <avr/io.h>

#include "H1.h"

/**
 * @brief A function to check for button and heater
 *
 */
void Led_Init()
{
    DDRB|=(1<<PB0);
    DDRB&=~(1<<PD0);
    PORTB|=(1<<PD1);
    DDRB&=~(1<<PD1);
    PORTB|=(1<<PD1);

}
