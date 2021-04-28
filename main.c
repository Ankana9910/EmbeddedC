/**
 * @file main.c
 * @author Ankana ()
 * @brief
 * @version 0.1
 * @date 2021-04-28
 *
 * @copyright Copyright (c) 2021
 *
 */
#include "Activity2.h"
#include "act1.h"
#include<avr/io.h>
#include<util/delay.h>

void config_init(void)
{
    /*Configure LED and Switch pins*/
    DDRB|=(1<<PB1);
    DDRD&=~(1<<PD0);
    PORTD|=(1<<PD0);
    PORTD|=(1<<PD1);
    InitAdc();

}
int main(void)
{
    uint16_t temp;
    // Initialize peripherals
    config_init();
    while(1)
    {
        if(!(PIND&(1<<PD0))) //If switch_1 is ON
        {
            if(!(PIND&(1<<PD1))) //If switch_2 is ON
            {
                PORTB|=(1<<PB0);
               _delay_ms(2000);
                 temp=ReadADC(0);
            }
        }
        else
        {
            PORTB &= ~(1<<PB0);
          _delay_ms(2000);
        }
    }
    return 0;
}


