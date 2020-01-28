/*
 * DIO.h
 *
 * Created: 1/28/2020 4:49:17 PM
 *  Author: Eslam Yasser
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "DIO_STD_TYPES.h"
#include "Data_Types.h"


/*
	Service Name	: Dio_ReadChannel
	Description		: Returns the value of the specified DIO channel.	
	Parameters		: ID of DIO channel
	Return value	: Dio_Level-Type (HIGH or LOW)
*/
Dio_LevelType Dio_ReadChannel			( Dio_ChannelType ChannelId );

/*
	Service Name	: Dio_WriteChannel
	Description		: Service to set a level of a channel.	
	Parameters		: ID of DIO channel - Value to be written
	Return value	: None
*/
void Dio_WriteChannel					( Dio_ChannelType ChannelId, Dio_LevelType Level );

/*
	Service Name	: Dio_ReadPort
	Description		: Returns the level of all channels of that port.	
	Parameters		: ID of DIO Port
	Return value	: Dio_PortLevelType
*/
uint8 Dio_ReadPort						( Dio_PortType PortId );

/*
	Service Name	: Dio_WritePort
	Description		: Service to set a value of the port.	
	Parameters		: ID of DIO Port - Value to be written
	Return value	: None
*/
void Dio_WritePort						( Dio_PortType PortId, uint8 Level );

/*
	Service Name	: Dio_FlipChannel
	Description		: Service to flip (change from 1 to 0 or from 0 to 1) the level of a channel.	
	Parameters		: ID of DIO channel
	Return value	: None
*/
void Dio_FlipChannel					( Dio_ChannelType ChannelId );




#endif /* DIO_H_ */