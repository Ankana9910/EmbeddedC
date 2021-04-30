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

#include "H3.h"
#include "H4.h"
#include <string.h>
/** \brief A function to set the timer for PWM
 *
 *
 * \return  void
 *
 */


void TimerMode(void){

    TCCR1A|=(1<<COM1A1)|(1<<WGM10)|(1<<WGM11); //Set Timer1A for PWM
    TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);    //PreScalar
    DDRB|=(1<<PB1);                            //Set PWM as Output



}
/** \brief A function to get 10 bit input from ADC and display it in form of PWM
 *
 *
 * \return void
 *
 */


void outputbyPWM(uint16_t val){
    int i;
    char temp[10];

    if(val<=209){

        OCR1A = 205; //20% duty cycle
        temp[0] = '2';
        temp[1] = '0';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';

        for(i=0;i<=5;i++){

            UARTwritecharacter(temp[i]);
        }

        _delay_ms(20);
    }
    else if((val>=210) && (val<=509)){

        OCR1A = 410; //40% duty cycle
        temp[0] = '2';
        temp[1] = '5';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<5;i++){
            UARTwritecharacter(temp[i]);


        }
        _delay_ms(20);
    }
    else if((val>=510) && (val<=709)){

        OCR1A = 717;                //70% duty cycle
        temp[0] = '2';
        temp[1] = '9';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temp[i]);
        }

        _delay_ms(20);
    }
    else if((val>=710) && (val<=1024)){

        OCR1A = 973;                  //95% duty cycle
        temp[0] = '3';
        temp[1] = '3';
        temp[2] = 176;
        temp[3] = 'C';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temp[i]);
        }


        _delay_ms(20);
    }
    else{
        OCR1A = 0;                         //0% output
        temp[0] = 'O';
        temp[1] = 'F';
        temp[2] = 'F';
        temp[3] = ' ';
        temp[4] = ' ';
        temp[5] = '\0';
        for(i=0;i<=5;i++){
            UARTwritecharacter(temp[i]);
        }

        _delay_ms(20);
    }

}
