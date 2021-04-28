#include <avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include "Activity2.h"


/*void InitAdc()
{

    ADMUX=(1<<REFS0); //avcc to 5v
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}*/

uint16_t readadc(uint8_t ch)
{

    ADMUX&=0Xf8;
    ch=ch&0b00000111;
    ADMUX|=ch;

    ADCSRA|=(1<<ADSC);

    while(!(ADCSRA &(1<<ADIF)));
    ADCSRA|=(1<<ADIF);

    return (ADC);

}

int main(void)
{
     InitAdc();
     uint8_t temp;

    // Insert code

    while(1)
    {
        temp=readadc(0);
        _delay_ms(200);

    }

    return 0;
}
