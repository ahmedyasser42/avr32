/*************************************************/
/*Author					:G-x				 */
/*Description				:Private file DIO    */
/*Date						:17 Aug 2019	   	 */
/*Version					:1.0V				 */
/*************************************************/
#ifndef DIO_PRIVATE_H
#define	DIO_PRIVATE_H

#define DDRA							*((volatile pu8)(0x3A))
#define PORTA 							*((volatile pu8)(0x3B))
#define PINA							*((volatile pu8)(0x39))

#define DDRB  							*((volatile pu8)(0x37))
#define	PINB							*((volatile pu8)(0x36))
#define PORTB							*((volatile pu8)(0x38))
						
#define DDRC 							*((volatile pu8)(0x34))
#define	PORTC							*((volatile pu8)(0x35))
#define PINC 							*((volatile pu8)(0x33))
						
#define DDRD							*((volatile pu8)(0x31))
#define PORTD							*((volatile pu8)(0x32))
#define PIND 							*((volatile pu8)(0x30))

/*************************************/
#define REGISTER_SIZE		8		 
#define INVALID_INPUT		0x80
/*************************************/
#ifndef DIO_CONFIGRATOIN_H
#define	DIO_CONFIGRATOIN_H
/*****************DDRA****************/
#define DIO_u8PIN_DIR_0		DIO_u8INPUT
#define DIO_u8PIN_DIR_1     DIO_u8INPUT
#define DIO_u8PIN_DIR_2     DIO_u8INPUT
#define DIO_u8PIN_DIR_3     DIO_u8INPUT
#define DIO_u8PIN_DIR_4     DIO_u8INPUT
#define DIO_u8PIN_DIR_5     DIO_u8INPUT
#define DIO_u8PIN_DIR_6     DIO_u8INPUT
#define DIO_u8PIN_DIR_7     DIO_u8INPUT
/*****************DDRB****************/
#define DIO_u8PIN_DIR_8     DIO_u8INPUT
#define DIO_u8PIN_DIR_9     DIO_u8INPUT
#define DIO_u8PIN_DIR_10    DIO_u8INPUT
#define DIO_u8PIN_DIR_11    DIO_u8INPUT
#define DIO_u8PIN_DIR_12    DIO_u8INPUT
#define DIO_u8PIN_DIR_13    DIO_u8INPUT
#define DIO_u8PIN_DIR_14    DIO_u8INPUT
#define DIO_u8PIN_DIR_15    DIO_u8INPUT
/*****************DDRC****************/
#define DIO_u8PIN_DIR_16    DIO_u8INPUT
#define DIO_u8PIN_DIR_17    DIO_u8INPUT
#define DIO_u8PIN_DIR_18    DIO_u8INPUT
#define DIO_u8PIN_DIR_19    DIO_u8INPUT
#define DIO_u8PIN_DIR_20    DIO_u8INPUT
#define DIO_u8PIN_DIR_21    DIO_u8INPUT
#define DIO_u8PIN_DIR_22    DIO_u8INPUT
#define DIO_u8PIN_DIR_23    DIO_u8INPUT
/*****************DDRD****************/
#define DIO_u8PIN_DIR_24    DIO_u8INPUT
#define DIO_u8PIN_DIR_25    DIO_u8INPUT
#define DIO_u8PIN_DIR_26    DIO_u8INPUT
#define DIO_u8PIN_DIR_27    DIO_u8INPUT
#define DIO_u8PIN_DIR_28    DIO_u8INPUT
#define DIO_u8PIN_DIR_29    DIO_u8INPUT
#define DIO_u8PIN_DIR_30    DIO_u8INPUT
#define DIO_u8PIN_DIR_31	DIO_u8INPUT
/************************************/
#endif


#endif