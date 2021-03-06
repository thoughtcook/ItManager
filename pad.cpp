//Filename:  pad.cpp
//Filefunc:  Implemention of Pad Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#include "pad.h"
#include <cstring>

//PadNum to record the total number of Pad
int Pad::PadNum = 0;

// Constructor of Class Pad
Pad::Pad() : Computer()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "Ipad");
	PadSize = 7;
	Weight = 2.5;
    PadNum++;
}

//Destructor of Class Pad
Pad::~Pad()
{
    delete [] Brand;
    PadNum--;
}

//Show the hardware info of Pad
void Pad::Show_Hwinfo()
{
    cout << "------------PAD--------------" << endl;
	cout << Brand << " Hardware info:" << endl;
	cout << "PadSize: " << PadSize << endl;
	cout << "Weight:" << Weight << endl;
	Computer::Show_Hwinfo();
}

