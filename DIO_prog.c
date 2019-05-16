/*
 * DIO_prog.c

 *
 *  Created on: May 10, 2019
 *      Author: Merna
 */


/******************************* Includes **********************************************/
#include "lib/STD_TYPES.h"
#include "lib/BIT_MATH.h"
#include "DIO_interface.h"
#include "DIO_private.h"

/******************************* Function implementation ********************************/
//copy paste the name and arguments to avoid the first integration errors


/*******************************************************************/
/*******************************************************************/
void DIO_vidSetPinVal(u8 PortId, u8 PinId, u8 PinVal){
//for safety check for the value the user sent
	if( PortId <= DIO_PORTD && PinId <= DIO_PIN7 ){
		if( PinVal == DIO_HIGH )
		{
			switch(PortId)
			{
			case DIO_PORTA: SET_BIT(PORTA_REG, PinId); break;
			case DIO_PORTB: SET_BIT(PORTB_REG, PinId); break;
			case DIO_PORTC: SET_BIT(PORTC_REG, PinId); break;
			case DIO_PORTD: SET_BIT(PORTD_REG, PinId); break;
			}
		}else if( PinVal == DIO_LOW ){
			switch(PortId)
			{
			case DIO_PORTA: CLR_BIT(PORTA_REG, PinId); break;
			case DIO_PORTB: CLR_BIT(PORTB_REG, PinId); break;
			case DIO_PORTC: CLR_BIT(PORTC_REG, PinId); break;
			case DIO_PORTD: CLR_BIT(PORTD_REG, PinId); break;
			}
		}
	}else{
		//error report enum errors so you can check for errors in the application
		//you will change the function type to enum instead of void
	}

}

/*******************************************************************/
/*******************************************************************/
void DIO_vidSetPinDir(u8 PortId, u8 PinId, u8 PinDir){
	if( PortId <= DIO_PORTD && PinId <= DIO_PIN7 ){
		if( PinDir == DIO_OUTPUT )
		{
			switch(PortId)
			{
			case DIO_PORTA: SET_BIT(DDRA_REG, PinId); break;
			case DIO_PORTB: SET_BIT(DDRB_REG, PinId); break;
			case DIO_PORTC: SET_BIT(DDRC_REG, PinId); break;
			case DIO_PORTD: SET_BIT(DDRD_REG, PinId); break;
			}
		}else if( PinDir == DIO_INPUT ){


			switch(PortId)
			{
			case DIO_PORTA: CLR_BIT(DDRA_REG, PinId); break;
			case DIO_PORTB: CLR_BIT(DDRB_REG, PinId); break;
			case DIO_PORTC: CLR_BIT(DDRC_REG, PinId); break;
			case DIO_PORTD: CLR_BIT(DDRD_REG, PinId); break;
			}

		}
	}else{
		//error report enum errors so you can check for errors in the application
		//you will change the function type to enum instead of void
	}
}

/*******************************************************************/
/*******************************************************************/
u8 DIO_u8GetPinVal(u8 PortId, u8 PinId){
	u8 u8_PinValue_Loc;


	if( PortId <= DIO_PORTD && PinId <= DIO_PIN7 ){

		switch(PortId)
		{
		case DIO_PORTA: u8_PinValue_Loc = GET_BIT(PINA_REG, PinId); break;
		case DIO_PORTB: u8_PinValue_Loc = GET_BIT(PINB_REG, PinId); break;
		case DIO_PORTC: u8_PinValue_Loc = GET_BIT(PINC_REG, PinId); break;
		case DIO_PORTD: u8_PinValue_Loc = GET_BIT(PIND_REG, PinId); break;
		}

	}else{
		//enum errors
	}
	return u8_PinValue_Loc;
}

/*******************************************************************/
/*******************************************************************/
void DIO_vidSetPortVal(u8 PortId, u8 PortVal){
	if( PortId <= DIO_PORTD ){

		switch(PortId)
		{
		case DIO_PORTA: PORTA_REG = PortVal; break;
		case DIO_PORTB: PORTB_REG = PortVal; break;
		case DIO_PORTC: PORTC_REG = PortVal; break;
		case DIO_PORTD: PORTD_REG = PortVal; break;
		}

	}else{
		//enum errors
	}
}

/*******************************************************************/
/*******************************************************************/
void DIO_vidSetPortDir(u8 PortId, u8 PortDir){

	if( PortId <= DIO_PORTD ){
		if(PortDir == DIO_OUTPUT){
				switch(PortId)
				{
				case DIO_PORTA: DDRA_REG = 0xff; break;
				case DIO_PORTB: DDRB_REG = 0xff; break;
				case DIO_PORTC: DDRC_REG = 0xff; break;
				case DIO_PORTD: DDRD_REG = 0xff; break;
				}

				}else if(PortDir == DIO_INPUT){
					switch(PortId)
							{
							case DIO_PORTA: DDRA_REG = 0; break;
							case DIO_PORTB: DDRB_REG = 0; break;
							case DIO_PORTC: DDRC_REG = 0; break;
							case DIO_PORTD: DDRD_REG = 0; break;
							}
				}else{
					//error enum invalid DIO port value
				}

	}else{
		//enum errors
	}

}




