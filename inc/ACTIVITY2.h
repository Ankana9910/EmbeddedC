#ifndef ACTIVITY2_H_INCLUDED
#define ACTIVITY2_H_INCLUDED
void InitAdc()
{

    ADMUX=(1<<REFS0); //avcc to 5v
    ADCSRA=(1<<ADEN)|(7<<ADPS0);
}
uint16_t readadc(uint8_t);



#endif // ACTIVITY2_H_INCLUDED

