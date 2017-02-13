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

#pragma once
#include <stdint.h> 
#include <complex>
#include "ImageProperties.h"
#include "stdFunctions.h"
#include <iostream>

class Pixel
{
private:
	uint32_t ui32PixelX,ui32PixelY; //Pixel Coordinates 
	std::complex <long double> cmplxldCalcCoordinates; //Complex Coordinates for Calculation
	uint64_t ui64Counter; //
	uint16_t ui16CalcDone; //
	unsigned char ucRGB[4];
public:
	Pixel();

	~Pixel();

	Pixel operator++(int);

	uint32_t Get_X();
	uint32_t Get_Y();

	void Set_X(uint32_t ui32PixelX_t);
	void Set_Y(uint32_t ui32PixelY_t); 

	void Set_Properties(uint32_t ui32PixelX_t, uint32_t ui32PixelY_t, ImageProperties* IPcurrentProperties);

	unsigned char Get_Red();
	unsigned char Get_Green();
	unsigned char Get_Blue();
	unsigned char Get_Alpha();

	void Set_Red(unsigned char ucRed);
	void Set_Green(unsigned char ucGreen);
	void Set_Blue(unsigned char ucBlue);
	void Set_Alpha(unsigned char ucAlpha);


	uint64_t Get_Counter();
	void Set_Counter(uint64_t ui64Counter_t);

	uint16_t Get_Done();
	void Set_Done();

	std::complex <long double> Get_CalcCoordinates();

	
};

