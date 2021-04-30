/**
 * @file A1.c
 * @author Ankana ()
 * @brief
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */

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
