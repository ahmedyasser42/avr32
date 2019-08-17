/*************************************************/
/*Author	:G-x				 */
/*Description	:Program file DIO                */
/*Date		:17 Aug 2019	   	         */
/*Version	:1.0V				 */
/*************************************************/
#include "STD_types.h"
#include "Bit_math.h"


#include "DIO_int.h"
#include "DIO_cfg.h"
#include "DIO_priv.h"




/*********************************************/
/**!:Comment : intialzation function         */
/*********************************************/
void DIO_vidint(void)
{
	DDRA = CONC(DIO_u8PIN_DIR_7, DIO_u8PIN_DIR_6, DIO_u8PIN_DIR_5, DIO_u8PIN_DIR_4, DIO_u8PIN_DIR_3, DIO_u8PIN_DIR_2, DIO_u8PIN_DIR_1, DIO_u8PIN_DIR_0);
	DDRB = CONC(DIO_u8PIN_DIR_15, DIO_u8PIN_DIR_14, DIO_u8PIN_DIR_13, DIO_u8PIN_DIR_12, DIO_u8PIN_DIR_11, DIO_u8PIN_DIR_10, DIO_u8PIN_DIR_9, DIO_u8PIN_DIR_8);
	DDRC = CONC(DIO_u8PIN_DIR_23, DIO_u8PIN_DIR_22, DIO_u8PIN_DIR_21, DIO_u8PIN_DIR_20, DIO_u8PIN_DIR_19, DIO_u8PIN_DIR_18, DIO_u8PIN_DIR_17, DIO_u8PIN_DIR_16);
	DDRD = CONC(DIO_u8PIN_DIR_31, DIO_u8PIN_DIR_30, DIO_u8PIN_DIR_29, DIO_u8PIN_DIR_28, DIO_u8PIN_DIR_27, DIO_u8PIN_DIR_26, DIO_u8PIN_DIR_25, DIO_u8PIN_DIR_24);
}
/*********************************************/
/**Inputs : 				     */
/*	       u8Valuecpy : DIO_u8HIGH       */
/*		            DIO_u8LOW        */
/*	       u8PinNbcpy : DIO_u8PIN_x	     */
/*			    x range [0..31]  */
/*********************************************/
void DIO_vidSetPinvalue(u8 u8PinNbcpy, u8 u8Valuecpy)
{
	if(u8PinNbcpy <= DIO_u8PIN_7)
		{
		if( u8Valuecpy == DIO_u8HIGH)
			{
			SET_BIT(PORTA, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(PORTA, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_8 && u8PinNbcpy <= DIO_u8PIN_15)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8Valuecpy == DIO_u8HIGH)
			{
			SET_BIT(PORTB, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(PORTB, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_16 && u8PinNbcpy <= DIO_u8PIN_23)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8Valuecpy == DIO_u8HIGH)
			{
			SET_BIT(PORTC, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(PORTC, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_24 && u8PinNbcpy <= DIO_u8PIN_31)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8Valuecpy == DIO_u8HIGH)
			{
			SET_BIT(PORTD, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(PORTD, u8PinNbcpy);
			}
		}
	else
	{}
}
/*********************************************/
/**Inputs : 				     */
/*	   u8PinNbcpy : DIO_u8PIN_x	     */
/*		        x range [0..31]      */
/*********************************************/
u8 DIO_u8GetpinValue(u8 u8PinNbcpy)
{
	u8 u8PinValueLoc = INVALID_INPUT;
	if(u8PinNbcpy <= DIO_u8PIN_7)
		{
		u8PinValueLoc = GET_BIT(PINA, u8PinNbcpy);
		}
	else if (u8PinNbcpy >= DIO_u8PIN_8 && u8PinNbcpy <= DIO_u8PIN_15)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;


		u8PinValueLoc = GET_BIT(PINB, u8PinNbcpy);


		}
	else if (u8PinNbcpy >= DIO_u8PIN_16 && u8PinNbcpy <= DIO_u8PIN_23)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		u8PinValueLoc = GET_BIT(PINC, u8PinNbcpy);
		}
	else if (u8PinNbcpy >= DIO_u8PIN_24 && u8PinNbcpy <= DIO_u8PIN_31)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		u8PinValueLoc = GET_BIT(PIND, u8PinNbcpy);
		}
	else
	{}
	return u8PinValueLoc;
}
/*********************************************/
/**Inputs : 	                             */
/*	               DIO_u8PIN_DIR_X 	     */
/*	               x range [0..31]       */
/*	   u8PinNbcpy :DIO_u8PIN_x	     */
/*		       x range [0..31]	     */
/*********************************************/
void DIO_vidActivePulluP(u8 DIO_u8PIN_DIR_X, u8 u8PinNbcpy)
{
	if(u8PinNbcpy <= DIO_u8PIN_7 && DIO_u8PIN_DIR_X == DIO_u8INPUT)
		{


		SET_BIT(PORTA, u8PinNbcpy);

		}
	else if (u8PinNbcpy >= DIO_u8PIN_8 && u8PinNbcpy <= DIO_u8PIN_15  && DIO_u8PIN_DIR_X == DIO_u8INPUT)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE; u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;

		SET_BIT(PORTB, u8PinNbcpy);

		}
	else if (u8PinNbcpy >= DIO_u8PIN_16 && u8PinNbcpy <= DIO_u8PIN_23 && DIO_u8PIN_DIR_X == DIO_u8INPUT)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;

		SET_BIT(PORTC, u8PinNbcpy);

		}
	else if (u8PinNbcpy >= DIO_u8PIN_24 && u8PinNbcpy <= DIO_u8PIN_31 && DIO_u8PIN_DIR_X == DIO_u8INPUT)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		SET_BIT(PORTD, u8PinNbcpy);
		}
	else
	{}
}
/*********************************************/
/**Inputs : 				     */
/*	 u8PinNbcpy :DIO_u8PIN_x       	     */
/*		     x range [0..31]	     */
/*	 u8PinDirectioncpy: DIO_u8INPUT	     */
/*			    DIO_u8OUTPUT     */
/*********************************************/
void DIO_vidSetPinDirection(u8 u8PinNbcpy, u8 u8PinDirectioncpy)
{
	if(u8PinNbcpy <= DIO_u8PIN_7)
		{
		if( u8PinDirectioncpy == DIO_u8OUTPUT)
			{
			SET_BIT(DDRA, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(DDRA, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_8 && u8PinNbcpy <= DIO_u8PIN_15)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8PinDirectioncpy == DIO_u8OUTPUT)
			{
			SET_BIT(DDRB, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(DDRB, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_16 && u8PinNbcpy <= DIO_u8PIN_23)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8PinDirectioncpy == DIO_u8OUTPUT)
			{
			SET_BIT(DDRD, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(DDRD, u8PinNbcpy);
			}
		}
	else if (u8PinNbcpy >= DIO_u8PIN_24 && u8PinNbcpy <= DIO_u8PIN_31)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		if( u8PinDirectioncpy == DIO_u8OUTPUT)
			{
			SET_BIT(DDRD, u8PinNbcpy);
			}
		else
			{
			CLEAR_BIT(DDRD, u8PinNbcpy);
			}
		}
	else
	{}
}
/*********************************************/
/**Inputs : 		       		     */
/*	u8PinNbcpy:DIO_u8PIN_x     	     */
/*		   x range [0..31]  	     */
/*********************************************/
void DIO_vidTogglePinValue(u8 u8PinNbcpy)
{
	if(u8PinNbcpy <= DIO_u8PIN_7)
		{
		TOGGLE_BIT(PORTA, u8PinNbcpy);
		}
	else if (u8PinNbcpy >= DIO_u8PIN_8 && u8PinNbcpy <= DIO_u8PIN_15)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;


		TOGGLE_BIT(PORTB, u8PinNbcpy);


		}
	else if (u8PinNbcpy >= DIO_u8PIN_16 && u8PinNbcpy <= DIO_u8PIN_23)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		TOGGLE_BIT(PORTC, u8PinNbcpy);
		}
	else if (u8PinNbcpy >= DIO_u8PIN_24 && u8PinNbcpy <= DIO_u8PIN_31)
		{
		u8PinNbcpy = u8PinNbcpy % REGISTER_SIZE;
		TOGGLE_BIT(PORTD, u8PinNbcpy);
		}
	else
	{}
}

