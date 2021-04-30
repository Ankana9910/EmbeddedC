#ifndef H2_H_INCLUDED
#define H2_H_INCLUDED
#include <avr/io.h>

/** \brief Initialising ADC
 *
 *
 * \return void
 *
 */

void Init_ADC();

/** \brief Read Data from ADC
 *
 * \param
 * \param
 * \return uint16_t
 *
 */

uint16_t Read_ADC(uint8_t ch);




#endif // H2_H_INCLUDED
