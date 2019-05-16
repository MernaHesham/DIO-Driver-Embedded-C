/*
 * DIO_private.h
 *
 *  Created on: May 10, 2019
 *      Author: Merna
 */

/* Private function prototypes */
//from data sheet Register summary page 299
#define PORTA_REG *((volatile u8*) 0x3B)
#define DDRA_REG *((volatile u8*) 0x3A)
#define PINA_REG *((volatile u8*) 0x39)

//copy and paste and ctrl+f to find A and replace it with B
#define PORTB_REG *((volatile u8*) 0x38)
#define DDRB_REG *((volatile u8*) 0x37)
#define PINB_REG *((volatile u8*) 0x36)

#define PORTC_REG *((volatile u8*) 0x35)
#define DDRC_REG *((volatile u8*) 0x34)
#define PINC_REG *((volatile u8*) 0x33)

#define PORTD_REG *((volatile u8*) 0x32)
#define DDRD_REG *((volatile u8*) 0x31)
#define PIND_REG *((volatile u8*) 0x30)




/* Register definitions */