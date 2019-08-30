/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: LCD CONFIGURATION LINK TIME         */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#ifndef LCD_CFGLT_H
#define LCD_CFGLT_H

/************LCD_ONE_LINE/LCD_TWO_LINES********/
#define	    LCD_NUMBER_OF_LINES	LCD_ONE_LINE	    /*choose number of displayed lines*/
/************LCD_5x7/LCD_5x10******************/
#define	    LCD_FONT			LCD_5x10   			/*choose font size 5x10 size only works with One Line display*/
/************LCD_4BITS/LCD_8BITS***************/
#define  	LCD_DATA_LENGTH		LCD_8BITS			/*choose the mode to receieve data either on 8 bits or 4 bits*/
/***************DISPLAY ON/OFF*****************/
#define		LCD_CURSOR			LCD_OFF
#define     LCD_CURSOR_BLINK	LCD_OFF
/***************DATA PINS**********************/
 

#endif


