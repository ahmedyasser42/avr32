/*************************************************/
/*Author					:G-x				 */
/*Description				:Private file DIO    */
/*Date						:29 Aug 2019	   	 */
/*Version					:1.3V				 */
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

/***************DDRA****************/
#ifndef DIO_u8PIN_DIR_0
#define DIO_u8PIN_DIR_0		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_0 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_0  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_1
#define DIO_u8PIN_DIR_1		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_1 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_1  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_2
#define DIO_u8PIN_DIR_2		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_2 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_2  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_3
#define DIO_u8PIN_DIR_3		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_3 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_3  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_4
#define DIO_u8PIN_DIR_4		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_4 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_4  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_5
#define DIO_u8PIN_DIR_5		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_5 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_5  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_6
#define DIO_u8PIN_DIR_6		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_6 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_6  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_7
#define DIO_u8PIN_DIR_7		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_7 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_7  DIO_u8INPUT
#endif
/*****************DDRB****************/
#ifndef DIO_u8PIN_DIR_8
#define DIO_u8PIN_DIR_8		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_8 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_8  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_9
#define DIO_u8PIN_DIR_9		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_9 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_9  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_10
#define DIO_u8PIN_DIR_10  DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_10 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_10  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_11
#define DIO_u8PIN_DIR_11		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_11 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_11  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_12
#define DIO_u8PIN_DIR_12		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_12 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_12  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_13
#define DIO_u8PIN_DIR_13		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_13 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_13  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_14
#define DIO_u8PIN_DIR_14		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_14 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_14  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_15
#define DIO_u8PIN_DIR_15		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_15 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_15  DIO_u8INPUT
#endif
/*****************DDRC****************/
#ifndef DIO_u8PIN_DIR_16
#define DIO_u8PIN_DIR_16		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_16 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_16  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_17
#define DIO_u8PIN_DIR_17		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_17 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_17  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_18
#define DIO_u8PIN_DIR_18		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_18 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_18  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_19
#define DIO_u8PIN_DIR_19		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_19 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_19  DIO_u8INPUT
#endif
#ifndef DIO_u8PIN_DIR_20
#define DIO_u8PIN_DIR_20		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_20 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_20  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_21
#define DIO_u8PIN_DIR_21		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_21 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_21  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_22
#define DIO_u8PIN_DIR_22		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_22 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_22  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_23
#define DIO_u8PIN_DIR_23		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_23 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_23  DIO_u8INPUT
#endif
/*****************DDRD****************/
#ifndef DIO_u8PIN_DIR_24
#define DIO_u8PIN_DIR_24		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_24 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_24  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_25
#define DIO_u8PIN_DIR_25		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_25 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_25  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_26
#define DIO_u8PIN_DIR_26		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_26 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_26  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_27
#define DIO_u8PIN_DIR_27		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_27 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_27  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_28
#define DIO_u8PIN_DIR_28		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_28 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_28  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_29
#define DIO_u8PIN_DIR_29		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_29 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_29  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_30
#define DIO_u8PIN_DIR_30		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_30 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_30  DIO_u8INPUT
#endif

#ifndef DIO_u8PIN_DIR_31
#define DIO_u8PIN_DIR_31		DIO_u8INPUT
#elif  (DIO_u8PIN_DIR_31 !=DIO_u8INPUT || DIO_u8PIN_DIR_0 !=DIO_u8OUTPUT )
#define DIO_u8PIN_DIR_31  DIO_u8INPUT
#endif
/*************************************/



#endif
