#ifndef H4_H_INCLUDED
#define H4_H_INCLUDED

#include <avr/io.h>
#include <util/delay.h>



/** \brief Initialising UART
 *
 *
 * \return void
 *
 */


void UARTinit(uint16_t ubrr_value);

/** \brief Read Data From UART
 *
 *
 * \return void
 *
 */



char UARTreadchar();
/** \brief  Write the data obtained on buffer
 *
 *
 * \return char
 *
 */


void UARTwritecharacter(char data);

#endif // H4_H_INCLUDED
