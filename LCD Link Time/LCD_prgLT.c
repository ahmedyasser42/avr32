/******************************************************/
/* Author  	    : Ahmed yasser                        */
/* Description	: LCD PROGRAM LINK TIME	        	  */
/* Date    		: 30 AUG 2019                         */
/* Version 		: 1.0V                                */
/******************************************************/
#include"STD_types.h"
#include"Bit_math.h"

#include"DIO_int.h"

#include"LCD_intLT.h"
#include"LCD_cfgLT.h"
#include"LCD_privLT.h"

#include<util\delay.h>

u8 LCD_u8LineSize;
u8 LCD_u8AcChar;
u8 LCD_u8AcLine;
static u8 LCD_u8STR[33];
static u8 LCD_u8Tracer;
/*********************************************/
/**!:Comment : Sending commands Func         */
/* 	:Inputs  :								 */
/*			   u8LineSizeCpy : Line Size	 */
/*********************************************/
void LCD_vidInit(u8 u8LineSizeCpy)
{
	_delay_ms(35);
	LCD_vidSendCmd(LCD_FUNCTION_SET);
	_delay_ms(1);
	LCD_vidSendCmd(LCD_DISPLAY_ON_OFF_CTRL);
	_delay_ms(1);
	LCD_vidSendCmd(LCD_CLEAR);
	_delay_ms(2);
	LCD_vidSendCmd(LCD_ENTERY_MODE_SET);
	_delay_ms(1);
	LCD_u8AcChar=0;
	LCD_u8AcLine=0;
	DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8EN,DIO_u8LOW);
	LCD_vidClear();
	LCD_vidGoToxy(0,0);
	LCD_u8LineSize=u8LineSizeCpy;

}
/*********************************************/
/**!:Comment : reciving Date Function        */
/*********************************************/
static void PutOnBus(u8 u8DataCmdCpy)
{ u8 u8BitCounterLoc=LCD_BIT_START;
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8RW,DIO_u8LOW);
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_0,GET_BIT(u8DataCmdCpy,u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_1,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_2,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_3,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_4,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_5,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_6,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8Data_7,GET_BIT(u8DataCmdCpy,++u8BitCounterLoc));

DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8EN,DIO_u8HIGH);
_delay_ms(2);
DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8EN,DIO_u8LOW);
_delay_ms(2);

}

/*********************************************/
/**!:Comment : Sending commands Func         */
/* 	:Inputs  :								 */
/*			   u8CmdCpy : the desired cmd add*/
/*********************************************/
void LCD_vidSendCmd(u8 u8CmdCpy)
{

	DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8RS,DIO_u8LOW);
	/*read/write low*/
	PutOnBus(u8CmdCpy);

}
/*********************************************/
/**!:Comment : Clearing LCD Function         */
/*********************************************/
void LCD_vidClear()
{
	LCD_vidSendCmd(LCD_CLEAR);
}
/*********************************************/
/**!:Comment : Prints Char on LCD Func       */
/* 	:Inputs  :								 */
/*			   u8CharCpy : the desired Char	 */
/*********************************************/
void LCD_vidWriteChar(u8 u8CharCpy)
{    
	DIO_vidSetPinvalue(astrLCDCfg[0].LCD_u8RS,DIO_u8HIGH);
	PutOnBus(u8CharCpy);
	LCD_u8AcChar++;
	if(LCD_u8AcChar==LCD_u8LineSize)
	{
		LCD_u8AcChar=0;
		LCD_u8AcLine++;

		if(LCD_u8AcLine==2)

		{
			LCD_u8AcLine=0;
		}
		LCD_vidGoToxy(LCD_u8AcChar,LCD_u8AcLine);
	}
	LCD_u8Tracer++;
}
/*********************************************/
/**!:Comment : Return Cursor to 1st Position */
/*********************************************/
void LCD_vidHome()
{
	LCD_vidSendCmd(LCD_CURSOR_HOME);
}
/*********************************************/
/**!:Comment : Shift Display to the Left	 */
/*********************************************/
void LCD_vidDisplayShiftLeft()
{
	LCD_vidSendCmd(LCD_SHIFT_DISPLAY_LEFT);
}
/*********************************************/
/**!:Comment : Shift Display to the right	 */
/*********************************************/
void LCD_vidDisplayShiftRight()
{
	LCD_vidSendCmd(LCD_SHIFT_DISPLAY_RIGHT);
}
/*********************************************/
/**!:Comment : Shift Cursor to the Left 	 */
/*********************************************/
void LCD_vidCursorShiftLeft()
{ LCD_u8AcChar--;
LCD_vidSendCmd(LCD_SHIFT_CRUSOR_LEFT);
}
/*********************************************/
/**!:Comment : Shift Cursor to the right	*/
/*********************************************/
void LCD_vidCursorShiftRight()
{   LCD_u8AcChar++;
LCD_vidSendCmd(LCD_SHIFT_CRUSOR_RIGHT);
}
/*********************************************/
/**!:Inputs : 								 */
/*			 pu8StrCpy :"string"             */
/*********************************************/
void LCD_vidWriteString(pu8 pu8StrCpy)
{
	u8 u8CounterLoc=0;
	while(pu8StrCpy[u8CounterLoc]!='\0')
	{
		LCD_vidWriteChar(pu8StrCpy[u8CounterLoc]);
		u8CounterLoc++;
		LCD_u8STR[u8CounterLoc]=pu8StrCpy[u8CounterLoc];
	}
}
/*********************************************/
/**:Inputs:								     */	
/*		u8x :char position [0,,,LineSize]    */
/*		u8y :LCD_1ST/2ND_lINE			     */
/*********************************************/
void LCD_vidGoToxy(u8 u8x,u8 u8y)
{

	if(u8x==0 || u8x <LCD_u8LineSize)
	{
		if(u8x!=LCD_u8AcChar)
		{
			LCD_u8AcChar=u8x;
		}



	switch(u8y)
	{
	case LCD_1ST_LINE:
		LCD_vidSendCmd((u8x+LCD_1ST_LINE_BEGINNING));
		LCD_u8Tracer=0+u8x;
		break;

	case LCD_2ND_LINE:
		LCD_vidSendCmd((u8x+LCD_2ND_LINE_BEGINNING));
		LCD_u8Tracer=16+u8x;
		break;
	default:
		if(u8y%2==0)
		{
			LCD_vidSendCmd((u8x+LCD_1ST_LINE_BEGINNING));
		}
		else if(u8y%2==1)
		{
			LCD_vidSendCmd((u8x+LCD_2ND_LINE_BEGINNING));
		}
	}
}
}
/*********************************************/
/**!:Comment : Display ON		        	 */
/*********************************************/
void LCD_vidDisplayOn()
{
	LCD_vidSendCmd(LCD_DISPLAY_ON);
}

/*********************************************/
/**!:Comment : Display OFF		        	 */
/*********************************************/
void LCD_vidDisplayOff()
{
	LCD_vidSendCmd(LCD_DISPLAY_OFF);
}
/*********************************************/
/**:Inputs:								     */	
/*		u8x :char position [0,,,etc]	     */
/*		u8y :LCD_1ST/2ND_lINE				 */
/*		pu8NewCharCpy:arr[]                  */
/*********************************************/
void LCD_vidWriteNewWord(pu8 pu8NewCharCpy,u8 u8x,u8 u8y,u8 u8Index)
{  static u8 u8CallCounterLoc=LCD_BIT_START;
u8 u8AdCounterLoc=LCD_BIT_START;

LCD_vidSendCmd((LCD_SET_CG_RAM+(u8CallCounterLoc*LCD_CUSTOM_CHAR_SIZE)));

for( u8AdCounterLoc=LCD_BIT_START;u8AdCounterLoc<u8Index;u8AdCounterLoc++)
{
	LCD_vidWriteChar(pu8NewCharCpy[u8AdCounterLoc]);
	_delay_ms(5);
}
LCD_vidSendCmd(LCD_1ST_LINE_BEGINNING);
LCD_vidGoToxy(u8x,u8y);

for( u8AdCounterLoc=LCD_BIT_START;u8AdCounterLoc<u8Index;u8AdCounterLoc++)
{
	LCD_vidWriteChar(u8AdCounterLoc);
	_delay_ms(5);
}

u8CallCounterLoc++;
if(u8CallCounterLoc==8)
{u8CallCounterLoc=LCD_BIT_START;}
}
/*********************************************/
/**:Inputs:								     */
/*		pu8strcpy:str                        */
/*********************************************/
static u8 u8StringLen(pu8 pu8strcpy)
{ u8 LCD_StringCounterLoc=0;
while(pu8strcpy[LCD_StringCounterLoc]!='\0')
{
	LCD_StringCounterLoc++;
}
return LCD_StringCounterLoc;
}
/*********************************************/
/**!:Comment : Delete Char                   */
/*********************************************/
void LCD_vidDeleteChar()
{LCD_vidCursorShiftLeft();
 LCD_vidWriteChar(' ');
 LCD_vidCursorShiftLeft();
}

/*********************************************/
/**:Inputs:								     */
/*		pu8strcpy:str                        */
/*********************************************/
/******************************not done yet****************************/
void LCD_vidShiftWord(pu8 pu8strcpy)
{ u8 LCD_u8SizeOfWordLoc=u8StringLen(pu8strcpy);
static u8 LCD_u8CharCounter=0;
static u8 LCD_u8Line2Counter=0;
static u8 LCD_SwitchLine=0;
u8 LCD_SizeCounter2Loc=0;
u8 LCD_SizeCounterLoc=0;
u8 max=LCD_u8LineSize-LCD_u8SizeOfWordLoc;
u8 max2=LCD_u8CharCounter-max;
u8 max3=(LCD_u8SizeOfWordLoc-1)-LCD_u8Line2Counter;
u8 posi1=0;
u8 posi2=0;
LCD_vidClear();
LCD_vidGoToxy(LCD_u8CharCounter,LCD_SwitchLine);

if(LCD_u8CharCounter<max)
{
    LCD_vidWriteString(pu8strcpy);
}
else if(LCD_u8CharCounter>=max && LCD_u8CharCounter<16)
{
	for(LCD_SizeCounter2Loc=0;LCD_SizeCounter2Loc<max3;LCD_SizeCounter2Loc++)
	{
		LCD_vidWriteChar(pu8strcpy[LCD_SizeCounter2Loc]);
	}
	LCD_SwitchLine++;
	LCD_vidGoToxy(LCD_u8Line2Counter,LCD_SwitchLine);


	for(LCD_SizeCounterLoc=0;LCD_SizeCounterLoc<=max2;LCD_SizeCounterLoc++)
	{
		--LCD_u8SizeOfWordLoc;
		LCD_vidWriteChar(pu8strcpy[LCD_u8SizeOfWordLoc]);
		posi1= LCD_u8Line2Counter-(++posi2);
		LCD_vidGoToxy(posi1,LCD_SwitchLine);
	}

	LCD_u8Line2Counter++;
	LCD_SwitchLine--;
	if(LCD_u8CharCounter==15)
	{   LCD_u8Line2Counter=0;
	LCD_u8CharCounter=0;
	LCD_SwitchLine++;

	}

}

LCD_u8CharCounter++;


}

static void vidShiftWordRight(pu8 pu8strcpy , u8 LCD_Indexcpy)
{

	static u8 LCD_u8CharCounter=0;
	static u8 LCD_u8Line2Counter=0;
	static u8 LCD_SwitchLine=0;
	u8 LCD_SizeCounter2Loc=0;
	u8 LCD_SizeCounterLoc=0;
	u8 max=LCD_u8LineSize-LCD_Indexcpy;
	u8 max2=LCD_u8CharCounter-max;
	u8 max3=(LCD_Indexcpy-1)-LCD_u8Line2Counter;
	u8 posi1=0;
	u8 posi2=0;
	LCD_vidClear();
	LCD_vidGoToxy(LCD_u8CharCounter,LCD_SwitchLine);

	if(LCD_u8CharCounter<max)
	{
	    LCD_vidWriteString(pu8strcpy);
	}
	else if(LCD_u8CharCounter>=max && LCD_u8CharCounter<16)
	{
		for(LCD_SizeCounter2Loc=0;LCD_SizeCounter2Loc<max3;LCD_SizeCounter2Loc++)
		{
			LCD_vidWriteChar(pu8strcpy[LCD_SizeCounter2Loc]);
		}
		LCD_SwitchLine++;
		LCD_vidGoToxy(LCD_u8Line2Counter,LCD_SwitchLine);


		for(LCD_SizeCounterLoc=0;LCD_SizeCounterLoc<=max2;LCD_SizeCounterLoc++)
		{
			--LCD_Indexcpy;
			LCD_vidWriteChar(pu8strcpy[LCD_Indexcpy]);
			posi1= LCD_u8Line2Counter-(++posi2);
			LCD_vidGoToxy(posi1,LCD_SwitchLine);
		}

		LCD_u8Line2Counter++;
		LCD_SwitchLine--;
		if(LCD_u8CharCounter==15)
		{   LCD_u8Line2Counter=0;
		LCD_u8CharCounter=0;
		LCD_SwitchLine++;

		}

	}

	LCD_u8CharCounter++;

}


