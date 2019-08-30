/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: 7 SEGEMENT PROGRAM LINK TIME	 	  */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#include"STD_types.h"
#include"Bit_math.h"

#include"DIO_int.h"

#include"SEV_intLT.h"
#include"SEV_cfgLT.h"
#include"SEV_privLT.h"



ErrorStatus SEV_enuNbDisplay(u8 u87segNbcpy , u8 u87segDisplaynbCpy)
{
ErrorStatus enuErrorStatus=OK;
#if(SEV_MODE==SEV_COMMON_CATHOD)
u8 seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

#elif(SEV_MODE==SEV_COMMON_ANOD)
u8 seg[10]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
	
#endif	
if(u87segNbcpy>SEV_MAX_NB || u87segDisplaynbCpy > 9 )
{


enuErrorStatus=INDEX_OUT_OF_RANGE;

}
else
{	 

 		    DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_A  ,GET_BIT(seg[u87segDisplaynbCpy],0));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_B  ,GET_BIT(seg[u87segDisplaynbCpy],1));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_C  ,GET_BIT(seg[u87segDisplaynbCpy],2));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_D  ,GET_BIT(seg[u87segDisplaynbCpy],3));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_E  ,GET_BIT(seg[u87segDisplaynbCpy],4));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_F  ,GET_BIT(seg[u87segDisplaynbCpy],5));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_G  ,GET_BIT(seg[u87segDisplaynbCpy],6));
			DIO_vidSetPinvalue(astr7SegCfg[u87segNbcpy].u8Pin_CM ,GET_BIT(seg[u87segDisplaynbCpy],7));
			

	
}
return enuErrorStatus;
	
	
}
