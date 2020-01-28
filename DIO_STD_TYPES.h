/*
 * DIO_STD_TYPES.h
 *
 * Created: 1/28/2020 5:32:47 PM
 *  Author: Eslam Yasser
 */ 


#ifndef DIO_STD_TYPES_H_
#define DIO_STD_TYPES_H_

typedef enum
{
	LOW,
	HIGH
	
}Dio_LevelType;

typedef enum 
{
	DIO_A,
	DIO_B,
	DIO_C,
	DIO_D
	
}Dio_PortType;

typedef enum 
{
	DIO_A0,
	DIO_A1,
	DIO_A2,
	DIO_A3,
	DIO_A4,
	DIO_A5,
	DIO_A6,
	DIO_A7,

	DIO_B0,
	DIO_B1,
	DIO_B2,
	DIO_B3,
	DIO_B4,
	DIO_B5,
	DIO_B6,
	DIO_B7,

	DIO_C0,
	DIO_C1,
	DIO_C2,
	DIO_C3,
	DIO_C4,
	DIO_C5,
	DIO_C6,
	DIO_C7,

	DIO_D0,
	DIO_D1,
	DIO_D2,
	DIO_D3,
	DIO_D4,
	DIO_D5,
	DIO_D6,
	DIO_D7
	
}Dio_ChannelType; 



#endif /* DIO_STD_TYPES_H_ */