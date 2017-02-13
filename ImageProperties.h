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
#define ABS_EDGE_VAL 2
class ImageProperties
{
private:
	uint32_t ui32ImageWidth;
	uint32_t ui32ImageHeight;
	long double ldScaleFactor;
	std::complex <long double> cmplxldCenterPoint;

public:
	ImageProperties(uint32_t ui32ImageWidth_t,uint32_t ui32ImageHeight_t, long double ldScaleFactor_t, std::complex<long double> cmplxldCenterPoint_t);
	
	~ImageProperties();

	uint32_t Get_ImageWidth();
	void Set_ImageWidth(uint32_t ui32ImageWidth_t);

	uint32_t Get_ImageHeight();
	void Set_ImageHeight(uint32_t ui32ImageHeight_t);

	long double Get_ScaleFactor();
	void Set_ScaleFactor(long double ldScaleFactor_t);

	std::complex<long double> Get_CenterPoint();
	void Set_CenterPoint(std::complex<long double> cmplxldCenterPoint_t);
	
};
