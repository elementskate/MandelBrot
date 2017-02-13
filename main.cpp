#include <iostream>
#include "pixel.h"
#include "stdFunctions.h"
#include "ImageProperties.h"
#include <complex>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{	
	uint32_t ui32ImageHeightUser = 10;
	uint32_t ui32ImageWidthUser = 10;

	cout<<"Image Width:>";
	cin>>ui32ImageWidthUser;

	cout<<"Image Height:>";
	cin >> ui32ImageHeightUser;


	complex<long double> CenterPoint(0.,0.);
	ImageProperties NextImage(ui32ImageWidthUser,ui32ImageHeightUser,1,CenterPoint);

	vector <Pixel> myImage(ui32ImageWidthUser*ui32ImageHeightUser);


	for(int i = 0; i<ui32ImageHeightUser;i++)
		for(int j = 0; j<ui32ImageWidthUser;j++)
		{
			myImage[i*ui32ImageWidthUser+j].Set_Properties(i,j,&NextImage);
			cout<<"Pixel Nr. "<<"["<<j<<"]"<<"["<<i<<"]"<<endl<<real(myImage[i*ui32ImageWidthUser+j].Get_CalcCoordinates())<<"+j*("<<imag(myImage[i*ui32ImageWidthUser+j].Get_CalcCoordinates())<<")"<<endl;
		}

	return 0;
}