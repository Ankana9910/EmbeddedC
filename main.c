/**
 * @file main.c
 * @author Ankana ()
 * @brief
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */


#include <avr/io.h>
#include <util/delay.h>
#include "H1.h"
#include "H2.h"
#include "H3.h"
#include "H4.h"

/** \brief The Main Code
 *
 *
 * \return  integer
 *
 */

int main(void)
{
   Led_Init();           //Initialise LED
    Init_ADC();         //Initialise ADC
    TimerMode();     //Initialise PWM Timer Mode
    UARTinit(103);   //Initialise UART
    uint16_t temp1;


    while(1)
    {
       if(!(PINB&(1<<PB7)))    //Checking if input switch is pressed
        {

            if(!(PINB&(1<<PB6))) //Checking if input switch is pressed
        {
            {
                _delay_ms(20);
                PORTB|=(1<<PB0);  //TURN ON LED

                temp1 = Read_ADC(0);
                outputbyPWM(temp1);  //Get PWM Output
                _delay_ms(20);

            }
        }
            else
            {
                _delay_ms(20);
                OCR1A = 0;          //PWM output 0 for no input
               PORTB&=~(1<<PB0);    //Turn Off LED
            }
        }
        else
           {

            PORTB&=~(1<<PB0);     //Turn Off LED
                OCR1A = 0;        //PWM output 0 for no input
                _delay_ms(20);
        }
    }

 return 0;
}
