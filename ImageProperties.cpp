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
#include "ImageProperties.h"

ImageProperties::ImageProperties(uint32_t ui32ImageWidth_t,uint32_t ui32ImageHeight_t, long double ldScaleFactor_t, std::complex<long double> cmplxldCenterPoint_t)
{
	ui32ImageWidth = ui32ImageWidth_t;
	ui32ImageHeight = ui32ImageHeight_t;
	ldScaleFactor = ldScaleFactor_t;
	cmplxldCenterPoint = cmplxldCenterPoint_t;
}
ImageProperties::~ImageProperties()
{}

uint32_t ImageProperties::Get_ImageWidth()
{return ui32ImageWidth;}
void ImageProperties::Set_ImageWidth(uint32_t ui32ImageWidth_t)
{ui32ImageWidth = ui32ImageWidth_t;}

uint32_t ImageProperties::Get_ImageHeight()
{return ui32ImageHeight;}
void ImageProperties::Set_ImageHeight(uint32_t ui32ImageHeight_t)
{ui32ImageHeight = ui32ImageHeight_t;}

long double ImageProperties::Get_ScaleFactor()
{return ldScaleFactor;}
void ImageProperties::Set_ScaleFactor(long double ldScaleFactor_t)
{ldScaleFactor = ldScaleFactor_t;}

std::complex<long double> ImageProperties::Get_CenterPoint()
{return cmplxldCenterPoint;}
void ImageProperties::Set_CenterPoint(std::complex<long double> cmplxldCenterPoint_t)
{cmplxldCenterPoint = cmplxldCenterPoint_t;}
