/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: LCD INTERFACE LINK TIME             */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#ifndef LCD_INTLT_H
#define LCD_INTLT_H

/*********************************************/
/**!:Comment : Sending commands Func         */
/* 	:Inputs  :								 */
/*			   u8LineSizeCpy : Line Size	 */
/*********************************************/
void LCD_vidInit(u8 u8LineSizeCpy);

/*********************************************/
/**!:Comment : Sending commands Func         */
/* 	:Inputs  :								 */
/*			   u8CmdCpy : the desired cmd add*/
/*********************************************/
void LCD_vidSendCmd(u8 u8CommandCpy);
/*********************************************/
/**!:Comment : Clearing LCD Function         */
/*********************************************/
void LCD_vidClear();

/*********************************************/
/**!:Comment : Prints Char on LCD Func       */
/* 	:Inputs  :								 */
/*			   u8CharCpy : the desired Char	 */
/*********************************************/
void LCD_vidWriteChar(u8 u8CharCpy);

/*********************************************/
/**!:Comment : Return Cursor to 1st Position */
/*********************************************/
void LCD_vidHome();

/*********************************************/
/**!:Comment : Shift Display to the Left	 */
/*********************************************/
void LCD_vidDisplayShiftLeft();

/*********************************************/
/**!:Comment : Shift Display to the right	 */
/*********************************************/
void LCD_vidDisplayShiftRight();

/*********************************************/
/**!:Comment : Shift Cursor to the Left 	 */
/*********************************************/
void LCD_vidCursorShiftLeft();

/*********************************************/
/**!:Comment : Shift Cursor to the right	 */
/*********************************************/
void LCD_vidCursorShiftRight();

/*********************************************/
/**!:Inputs : 								 */
/*			 pu8StrCpy :"string"             */
/*********************************************/
void LCD_vidWriteString(pu8 pu8StrCpy);

/*********************************************/
/**:Inputs:								     */	
/*		u8x :char position [0,,,etc]	     */
/*		u8y :LCD_1ST/2ND_lINE			     */
/*********************************************/
void LCD_vidGoToxy(u8 u8x,u8 u8y);

/*********************************************/
/**!:Comment : Display ON		        	 */
/*********************************************/
void LCD_vidDisplayOn();

/*********************************************/
/**!:Comment : Display OFF		        	 */
/*********************************************/
void LCD_vidDisplayOff();
/*********************************************/
/**:Inputs:								     */	
/*		u8x :char position [0,,,etc]	     */
/*		u8y :LCD_1ST/2ND_LINE				 */
/*		pu8NewCharCpy:arr[]                  */
/*		u8Index:Number of chars for each word*/
/*********************************************/
/*********************************************/
/**!:Comment : Delete Char                   */
/*********************************************/
void LCD_vidDeleteChar();


void LCD_vidWriteNewWord(pu8 pu8NewCharCpy,u8 u8x,u8 u8y,u8 u8Index);
void LCD_vidShiftWord(pu8 pu8strcpy);
#endif