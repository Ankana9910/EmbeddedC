#ifndef H3_H_INCLUDED
#define H3_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>


/** \brief Initialise timer for PWM
 *
 *
 * \return  void
 *
 */


void TimerMode(void);
 /** \brief Get PWM Output
  *
  *
  * \return void
  *
  */


void outputbyPWM(uint16_t ADC_val);

#endif // H3_H_INCLUDED
