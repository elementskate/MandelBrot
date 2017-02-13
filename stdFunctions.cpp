/*****************************************************************************
1. * Copyright 2012, All rights reserved, For internal use only
*
* FILE: pixel.h
* PROJECT: MandelBrot
* MODULE:
*
* Description:
*
* Notes:
*
* Compiler dependencies or special instructions:
*
* REVISION HISTORY
* Date: By: Description:
*
*****************************************************************************/
#include "stdFunctions.h"
#include <iostream>


uint32_t Round(long double Val_t)
{
	uint32_t Temp = static_cast<uint32_t>(Val_t);
	
	if(Val_t>1.)
	{

	if((Val_t-Temp)>=0.5) Val_t++;

	}
	else
	{

	if((Val_t)>=0.5) Val_t++;
	
	}

	Temp = Val_t;
	
	return Temp; 
}

uint32_t SmallestValue(uint32_t ui32Val1, uint32_t ui32Val2)
{
	if(ui32Val1<=ui32Val2) return ui32Val1;
	else return ui32Val2;
}