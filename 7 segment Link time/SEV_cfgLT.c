/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: 7 SEGEMENT CONFIGURATION LINK TIME  */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/

#include "DIO_int.h"

#include"SEV_cfgLT.h"
#include"SEV_privLT.h"

tstr7Seg astr7SegCfg[SEV_MAX_NB]={
									{DIO_u8PIN_0,
									DIO_u8PIN_1, 
									DIO_u8PIN_2,
									DIO_u8PIN_3,
									DIO_u8PIN_4,
									DIO_u8PIN_5,
									DIO_u8PIN_6,
									DIO_u8PIN_7
									},
									{DIO_u8PIN_8,
									DIO_u8PIN_9, 
									DIO_u8PIN_10,
									DIO_u8PIN_11,
									DIO_u8PIN_12,
									DIO_u8PIN_13,
									DIO_u8PIN_14,
									DIO_u8PIN_15
									}
									
									
};
