#include <avr/io.h>
#include "H2.h"

/**
 * @brief A function to initialise the ADC
 *
 */
void Init_ADC(){

    ADMUX=(1<<REFS0);                   // Reference Voltage
    ADCSRA=(1<<ADEN)|(7<<ADPS0);        //PreScale Enable


}
/** \brief Function for reading the data from ADC
 *
 */


uint16_t Read_ADC(uint8_t ch)
{
    ADMUX&=0xf8;
    ch = ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);             //Set  ADC Interrupt Flag

    while(!(ADCSRA & (1<<ADIF)));  //  Macro to check if interrupt occured or not
    ADCSRA|=(1<<ADIF);             //Set  Interrupt Flag

    return(ADC);

}
