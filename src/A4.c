/**
 * @file A4.c
 * @author Ankana ()
 * @brief
 * @version 0.1
 * @date 2021-04-30
 *
 * @copyright Copyright (c) 2021
 *
 */



#include <avr/io.h>
#include "H4.h"

void UARTinit(uint16_t ubrr_value){

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&(0x00ff);
    UCSR0C|=(1<<UCSZ00)|(1<<UCSZ01);                          //Initialise Serial Communication with UART
    UCSR0B|=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);    //Enable UART

}



char UARTreadchar(){

while(!(UCSR0A & (1<<RXC0))){     //To check if Data is received or not

}

return UDR0;

}



void UARTwritecharacter(char data){

while(!(UCSR0A & (1<<UDRE0))){      //To check if data is written or not

}

UDR0 = data;

}
