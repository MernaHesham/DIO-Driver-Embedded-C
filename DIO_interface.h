/*
 * DIOInterface.h
 *
 *  Created on: May 10, 2019
 *      Author: Merna
 */

#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/***************************** Public Macros *******************************/

/* PORT definition */
#define DIO_PORTA 0
#define DIO_PORTB 1
#define DIO_PORTC 2
#define DIO_PORTD 3

/* PINS definitions */
#define DIO_PIN0 0
#define DIO_PIN1 1
#define DIO_PIN2 2
#define DIO_PIN3 3
#define DIO_PIN4 4
#define DIO_PIN5 5
#define DIO_PIN6 6
#define DIO_PIN7 7

/* OUTPUT states */
#define DIO_HIGH 1
#define DIO_LOW 0

/* Direction states */
#define DIO_INPUT 0
#define DIO_OUTPUT 1

/*****************************************************************************************/
/***************************** Public functions Prototypes *******************************/
/*****************************************************************************************/

/*******************************************************************/
/* Description: this function is to set pin value to one or zero

 * Input      : PortId, Range: 0 ~ 3 	[DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD]
 * 				PinId , Range: 0 ~ 7 	[DIO_PIN0 ~ DIO_PIN7]
 * 				PinVal, Range: [DIO_LOW, DIO_HIGH]
 * Return     : Void
 *
 *  naming rules: indicates the return type and functioning
 *******************************************************************/
void DIO_vidSetPinVal(u8 PortId, u8 PinId, u8 PinVal);

/*******************************************************************/
/* Description: this function is to set port value
 * Input      : PortId, Range: 0 ~ 3 [DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD]
 * 				PinId , Range: 0 ~ 7 [DIO_PIN0 ~ DIO_PIN7]
 * 				PinDir, Range: [DIO_INPUT, DIO_OUTPUT]
 * Return     : Void
 *******************************************************************/
void DIO_vidSetPinDir(u8 PortId, u8 PinId, u8 PinDir);

/*******************************************************************/
/* Description: this function is to Get the pin value
 * Input      : PortId, Range: 0 ~ 3 [DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD]
 * 				PinId , Range: 0 ~ 7 [DIO_PIN0 ~ DIO_PIN7]
 * Return     : Void
 *******************************************************************/
u8 DIO_u8GetPinVal(u8 PortId, u8 PinId);

/*******************************************************************/
/* Description: this function is to set port value
 * Input      : PortId,  Range: 0 ~ 3 [DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD]
 * 				PortVal, Range: 0~255 [0x00 ~ 0xff]
 * Return     : Void
 *******************************************************************/
void DIO_vidSetPortVal(u8 PortId, u8 PortVal);

/*******************************************************************/
/* Description: this function is to set port direction
 * Input      : PortId,	Range: 0 ~ 3 [DIO_PORTA, DIO_PORTB, DIO_PORTC, DIO_PORTD]
 * 				PortDir,Range: [DIO_INPUT, DIO_OUTPUT]
 * Return     : Void
 *******************************************************************/
void DIO_vidSetPortDir(u8 PortId, u8 PortDir);

#endif /* DIO_INTERFACE_H_ */
