/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: LCD CONFIGURATION LINK TIME         */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/

#include "DIO_int.h"

#include"LCD_cfgLT.h"
#include"LCD_privLT.h"

tstrLCD astrLCDCfg[1]={
									{DIO_u8PIN_15, /*********LCD_u8Data_0*********/
									DIO_u8PIN_14,  /*********LCD_u8Data_1*********/
									DIO_u8PIN_13,  /*********LCD_u8Data_2*********/
									DIO_u8PIN_12,  /*********LCD_u8Data_3*********/
									DIO_u8PIN_11,  /*********LCD_u8Data_4*********/
									DIO_u8PIN_10,  /*********LCD_u8Data_5*********/
									DIO_u8PIN_9,  /*********LCD_u8Data_6*********/
									DIO_u8PIN_8,  /*********LCD_u8Data_7*********/
									DIO_u8PIN_2,  /*********LCD_u8RS*************/
									DIO_u8PIN_1,  /*********LCD_u8RW*************/
									DIO_u8PIN_0  /*********LCD_u8EN*************/}
									
									};
									
									
									

