/*
 * DIO.c
 *
 * Created: 1/28/2020 4:49:36 PM
 *  Author: Eslam Yasser
 */ 

#include "DIO.h"
#include "DIO_HW.h"


Dio_LevelType Dio_ReadChannel	( Dio_ChannelType ChannelId )
{
	Dio_ChannelType PIN_NUM	 = ChannelId % 8;
	Dio_PortType	PORT_NUM = ChannelId / 8;
	
	Dio_LevelType OUT = LOW;
	 
	switch(PORT_NUM)
	{
		case DIO_A :
			OUT = PINA_REG & (1<<PIN_NUM);
		break;
		
		case DIO_B :
			OUT = PINB_REG & (1<<PIN_NUM);
		break;
		
		case DIO_C :
			OUT = PINC_REG & (1<<PIN_NUM);
		break;
		
		case DIO_D:
			OUT = PIND_REG & (1<<PIN_NUM);
		break;
		
	}
	return OUT;
}

void Dio_WriteChannel	( Dio_ChannelType ChannelId, Dio_LevelType Level )
{
	Dio_ChannelType PIN_NUM	 = ChannelId % 8;
	Dio_PortType	PORT_NUM = ChannelId / 8;

		switch(PORT_NUM)
		{
			case DIO_A :
					PORTA_REG = ( (PORTA_REG & (~(1<<PIN_NUM)))  | (Level<<PIN_NUM) )  ;
			break;
			
			case DIO_B :
					PORTB_REG = ( (PORTB_REG & (~(1<<PIN_NUM)))  | (Level<<PIN_NUM) )  ;
			break;
			
			case DIO_C :
					PORTC_REG = ( (PORTC_REG & (~(1<<PIN_NUM)))  | (Level<<PIN_NUM) )  ;
			break;
			
			case DIO_D:
					PORTD_REG = ( (PORTD_REG & (~(1<<PIN_NUM)))  | (Level<<PIN_NUM) )  ;
			break;
			
		}
}
uint8 Dio_ReadPort	( Dio_PortType PortId )
{
	uint8 data = 0x00;
	
		switch(PortId)
		{
			case DIO_A :
				data = PINA_REG ;
			break;
			
			case DIO_B :
				data = PINB_REG ;
			break;
			
			case DIO_C :
				data = PINC_REG ;
			break;
			
			case DIO_D:
				data = PIND_REG ;
			break;
			
		}
		
		return data ;
}
void Dio_WritePort	( Dio_PortType PortId, uint8 Level )
{
	switch(PortId)
	{
		case DIO_A :
			PORTA_REG = Level ;
		break;
		
		case DIO_B :
			PORTB_REG = Level ;
		break;
		
		case DIO_C :
			PORTC_REG = Level ;
		break;
		
		case DIO_D:
			PORTD_REG = Level ;
		break;
		
	}
}
void Dio_FlipChannel	( Dio_ChannelType ChannelId )
{
	Dio_ChannelType PIN_NUM	 = ChannelId % 8;
	Dio_PortType	PORT_NUM = ChannelId / 8;

	switch(PORT_NUM)
	{
		case DIO_A :
			PORTA_REG ^= (1<<PIN_NUM);
		break;
		
		case DIO_B :
			PORTB_REG ^= (1<<PIN_NUM);
		break;
		
		case DIO_C :
			PORTC_REG ^= (1<<PIN_NUM);
		break;
		
		case DIO_D:
			PORTD_REG ^= (1<<PIN_NUM);
		break;
		
	}
}