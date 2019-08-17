/*********************************************/
/*Author	:G-x	                     */
/*Description	:Interface file DIO          */
/*Date		:17 Aug 2019	   	     */
/*Version	:1.0V  	                     */
/*********************************************/
#ifndef DIO_INTERFACE_H
#define	DIO_INTERFACE_H
/**********PINVALUE*********/
#define	DIO_u8HIGH          1
#define DIO_u8LOW           0
/**********PINSTATE*********/
#define	DIO_u8INPUT         1 				
#define DIO_u8OUTPUT        0
/**********PORTA************/
#define DIO_u8PIN_0         0
#define DIO_u8PIN_1         1
#define DIO_u8PIN_2         2
#define DIO_u8PIN_3         3
#define DIO_u8PIN_4         4
#define DIO_u8PIN_5         5
#define DIO_u8PIN_6         6
#define DIO_u8PIN_7         7
/**********PORTB************/
#define DIO_u8PIN_8         8
#define DIO_u8PIN_9         9
#define DIO_u8PIN_10        10
#define DIO_u8PIN_11        11
#define DIO_u8PIN_12        12
#define DIO_u8PIN_13        13
#define DIO_u8PIN_14        14
#define DIO_u8PIN_15        15
/**********PORTC************/
#define DIO_u8PIN_16        16
#define DIO_u8PIN_17        17
#define DIO_u8PIN_18        18
#define DIO_u8PIN_19        19
#define DIO_u8PIN_20        20
#define DIO_u8PIN_21        21
#define DIO_u8PIN_22        22
#define DIO_u8PIN_23        23
/**********PORTD************/
#define DIO_u8PIN_24        24
#define DIO_u8PIN_25        25
#define DIO_u8PIN_26        26
#define DIO_u8PIN_27        27
#define DIO_u8PIN_28        28
#define DIO_u8PIN_29        29
#define DIO_u8PIN_30        30
#define DIO_u8PIN_31	    31

/*********************************************/
/**!:Comment : intialzation function         */
/*********************************************/
void DIO_vidint(void);
/*********************************************/
/**Inputs : 				     */				                 
/*	    u8Valuecpy : DIO_u8HIGH	     */		         
/*		       : DIO_u8LOW           */        
/*	    u8PinNbcpy : DIO_u8PIN_x	     */	         	
/*			 x range [0..31]     */	           
/*********************************************/
void DIO_vidSetPinvalue(u8 u8PinNbcpy,u8 u8Valuecpy);
/*********************************************/
/**Inputs : 				     */				                           
/*	   u8PinNbcpy : DIO_u8PIN_x	     */	         	
/*			x range [0..31]      */ 	           
/*********************************************/
u8 DIO_u8GetpinValue(u8 u8PinNbcpy);
/*********************************************/
/**Inputs : 				     */				                           
/*		        :DIO_u8PIN_DIR_X:    */	                   	
/*		         x range [0..31]     */     
/*           u8PinNbcpy :DIO_u8PIN_x	     */	         
/*	                 x range [0..31]     */		       		
/*********************************************/
void DIO_vidActivePulluP(u8 DIO_u8PIN_DIR_X,u8 u8PinNbcpy);
/*********************************************/
/**Inputs :                                  */          	 
/*	    u8PinNbcpy :DIO_u8PIN_x	     */
/*			 x range [0..31]     */		
/*	    u8PinDirectioncpy: DIO_u8INPUT   */
/*			       DIO_u8OUTPUT  */
/*********************************************/
void DIO_vidSetPinDirection(u8 u8PinNbcpy,u8 u8PinDirectioncpy);
/*********************************************/
/**Inputs : 	     	                     */          
/*	    u8PinNbcpy:DIO_u8PIN_x     	     */	
/*		       x range [0..31]       */
/*********************************************/
void DIO_vidTogglePinValue(u8 u8PinNbcpy);

#endif
