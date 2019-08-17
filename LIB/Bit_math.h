
/******************************************/
/*Author       :ahmed yasser              */
/*Describtion  :bit math lib              */
/*Date         :8/17/2019			      */
/*Version      :1.1v				      */
/******************************************/

#ifndef 		BIT_MATH_H
#define 		BIT_MATH_H
#define			SET_BIT(Reg,Bit) 								(Reg|=(1<<Bit))
#define			CLEAR_BIT(Reg,Bit) 								(Reg&=~(1<<Bit))
#define			TOGGLE_BIT(Reg,Bit) 							(Reg^=(1<<Bit))
#define			GET_BIT(Reg,Bit)								((Reg>>Bit)&(0x01))
#define			CONC(B7,B6,B5,B4,B3,B2,B1,B0)					CONC_HELP(B7,B6,B5,B4,B3,B2,B1,B0)	
#define			CONC_HELP(b7,b6,b5,b4,b3,b2,b1,b0)				0b##b7##b6##b5##b4##b3##b2##b1##b0
#endif