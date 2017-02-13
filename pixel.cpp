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
#include "pixel.h"

Pixel::Pixel():ui32PixelX(0),ui32PixelY(0)
{
	
}

Pixel::~Pixel()
{}

Pixel Pixel::operator++(int)
{}

uint32_t Pixel::Get_X()
{return ui32PixelX;}
uint32_t Pixel::Get_Y()
{return ui32PixelY;}

void Pixel::Set_X(uint32_t ui32PixelX_t)
{ui32PixelX = ui32PixelX_t;}
void Pixel::Set_Y(uint32_t ui32PixelY_t)
{ui32PixelY = ui32PixelY_t;} 

void Pixel::Set_Properties(uint32_t ui32PixelX_t, uint32_t ui32PixelY_t, ImageProperties* IPcurrentProperties)
{
	ui32PixelX = ui32PixelX_t;
	ui32PixelY = ui32PixelY_t;


	uint32_t ui32ZeroPointRealAxis = Round(static_cast<long double>(IPcurrentProperties->Get_ImageWidth())/2)-1; 
	uint32_t ui32ZeroPointImagAxis = Round(static_cast<long double>(IPcurrentProperties->Get_ImageHeight())/2)-1; 

	uint32_t ui32SmallestDistoFrame = SmallestValue(ui32ZeroPointRealAxis, ui32ZeroPointImagAxis);

	long double ldRealAxisTemp = (static_cast<long double>(ui32PixelX)-static_cast<long double>(ui32ZeroPointRealAxis))/static_cast<long double>(ui32SmallestDistoFrame);
	
	ldRealAxisTemp *= IPcurrentProperties->Get_ScaleFactor();
	ldRealAxisTemp *= ABS_EDGE_VAL;
	ldRealAxisTemp += real(IPcurrentProperties->Get_CenterPoint());

	long double ldImagAxisTemp = (static_cast<long double>(ui32PixelY)-static_cast<long double>(ui32ZeroPointImagAxis))/static_cast<long double>(ui32SmallestDistoFrame);
	ldImagAxisTemp *= IPcurrentProperties->Get_ScaleFactor();
	ldImagAxisTemp *= ABS_EDGE_VAL;
	ldImagAxisTemp += imag(IPcurrentProperties->Get_CenterPoint());

	cmplxldCalcCoordinates.real(ldRealAxisTemp);
	cmplxldCalcCoordinates.imag(ldImagAxisTemp);
}

unsigned char Pixel::Get_Red()
{return ucRGB[0];}
unsigned char Pixel::Get_Green()
{return ucRGB[1];}
unsigned char Pixel::Get_Blue()
{return ucRGB[2];}
unsigned char Pixel::Get_Alpha()
{return ucRGB[3];}

void Pixel::Set_Red(unsigned char ucRed)
{ucRGB[0] = ucRed;}
void Pixel::Set_Green(unsigned char ucGreen)
{ucRGB[1] = ucGreen;}
void Pixel::Set_Blue(unsigned char ucBlue)
{ucRGB[2] = ucBlue;}
void Pixel::Set_Alpha(unsigned char ucAlpha)
{ucRGB[3] = ucAlpha;}


uint64_t Pixel::Get_Counter()
{return ui64Counter;}
void Pixel::Set_Counter(uint64_t ui64Counter_t)
{ui64Counter = ui64Counter_t;}

uint16_t Pixel::Get_Done()
{return ui16CalcDone;}
void Pixel::Set_Done()
{ui16CalcDone = 1;}

std::complex <long double> Pixel::Get_CalcCoordinates()
{return cmplxldCalcCoordinates;}

