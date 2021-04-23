/**
 * @file main.c
 * @author Ankana (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2021-04-23
 *
 * @copyright Copyright (c) 2021
 *
 */


#include <avr/io.h>


#include <util/delay.h>
/**
 * @brief
 *
 * @return int
 */
int main(void)
{


  DDRC|= (1<<PB0); //B0 =1
  DDRD&=~(1<<PD0);  //
  PORTD|=(1<<PD0); //D0=1
  PORTD|=(1<<PD1);


  while(1)
  {
      if((!(PIND&(1<<PD0)) && (!(PIND&(1<<PD1)))))
      {
           PORTB|=(1<<PB0);
          _delay_ms(2000);

      }
      else
      {
          PORTB &= ~(1<<PB0);
          _delay_ms(2000);
      }

  }
  return 0;
}


