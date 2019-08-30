/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: 7 SEGEMENT PRIVATE LINk TIME     	  */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#ifndef SEV_PRIVLT_H
#define SEV_PRIVLT_H

#define  SEV_COMMON_CATHOD      0
#define  SEV_COMMON_ANOD        1

typedef struct
{
	u8 u8Pin_A ;
	u8 u8Pin_B ;
	u8 u8Pin_C ;
	u8 u8Pin_D ;
	u8 u8Pin_E ;
	u8 u8Pin_F ;
	u8 u8Pin_G ;
	u8 u8Pin_CM;
}tstr7Seg;

extern tstr7Seg astr7SegCfg[SEV_MAX_NB];


#endif
