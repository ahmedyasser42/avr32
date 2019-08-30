/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	:  LCD PRIVATE LINk TIME       	      */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#ifndef LCD_PRIVLT_H
#define LCD_PRIVLT_H


typedef struct
{
	u8 LCD_u8Data_0 ;
	u8 LCD_u8Data_1 ;
	u8 LCD_u8Data_2 ;
	u8 LCD_u8Data_3 ;
	u8 LCD_u8Data_4 ;
	u8 LCD_u8Data_5 ;
	u8 LCD_u8Data_6 ;
	u8 LCD_u8Data_7 ;

	u8 LCD_u8RS;
	u8 LCD_u8RW;
	u8 LCD_u8EN;
}tstrLCD;
/***********************COMMANDS*******************************/
#define 	LCD_OFF			 				0
#define		LCD_ON		 	 				1

#define 	LCD_5x7	 		 				0
#define 	LCD_5x10 		 				1

#define 	LCD_ONE_LINE	 				0
#define 	LCD_TWO_LINE	 				1

#define 	LCD_4BITS		 				0
#define 	LCD_8BITS		 				1

#define		LCD_CUSTOM_CHAR_SIZE			8
#define		LCD_MAX_CHAR_SIZE				16

#define 	LCD_1ST_LINE	 				0
#define		LCD_2ND_LINE	 				1
/********************ADDRESSES************************************/
#define 	LCD_FUNCTION_SET				CONC(0,0,1,LCD_DATA_LENGTH,LCD_NUMBER_OF_LINES,LCD_FONT,0,0)
#define 	LCD_DISPLAY_ON_OFF_CTRL			CONC(0,0,0,0,1,1,LCD_CURSOR,LCD_CURSOR_BLINK)
#define 	LCD_CLEAR						0x01
#define		LCD_ENTERY_MODE_SET				0x04
#define		LCD_DISPLAY_ON					CONC(0,0,0,0,1,1,LCD_CURSOR,LCD_CURSOR_BLINK)
#define		LCD_DISPLAY_OFF					CONC(0,0,0,0,1,0,LCD_CURSOR,LCD_CURSOR_BLINK)
#define		LCD_CURSOR_HOME					0x02
#define		LCD_SHIFT_CRUSOR_LEFT			0x10
#define		LCD_SHIFT_CRUSOR_RIGHT			0x06
#define		LCD_SHIFT_DISPLAY_LEFT			0x18			
#define		LCD_SHIFT_DISPLAY_RIGHT			0x1C
#define		LCD_SET_CG_RAM					0x40

#define     LCD_BIT_START					0
#define		LCD_BIT_END						7

#define		LCD_1ST_LINE_BEGINNING			0x80
#define		LCD_2ND_LINE_BEGINNING			0xC0


/***********************GUARDIAN******************************/
#ifndef LCD_NUMBER_OF_LINES
#define LCD_NUMBER_OF_LINES  LCD_TWO_LINE
#endif
#ifndef LCD_FONT
#define LCD_FONT  LCD_5x7
#endif
#ifndef LCD_DATA_LENGTH
#define LCD_DATA_LENGTH  LCD_8BITS
#endif
#ifndef LCD_CURSOR
#define LCD_CURSOR  LCD_OFF
#endif
#ifndef LCD_CURSOR_BLINK
#define LCD_CURSOR_BLINK  LCD_OFF
#endif


/***********************FUNCTION******************************/

static void PutOnBus(u8 datacmdCpy);

static void vidStringLen(pu8 pu8strcpy);

static void vidShiftWordRight(pu8 pu8strcpy, u8 LCD_Indexcpy);
/************************************************************/
extern tstrLCD astrLCDCfg[1];


#endif
