//Filename:  desktop.cpp
//Filefunc:  Implemention of Desktop Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init
#include <cstring>
#include "laptop.h"

int Laptop::LaptopNum = 0;

Laptop::Laptop() : Computer()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INTIL");
    LaptopSize = 14;
    LaptopNum++;
}

Laptop::~Laptop()
{
    delete [] Brand;
    LaptopNum--;
}

void Laptop::Update_Laptop(const char *Component, const int num)
{
    Computer::Update_Hw(Component, num);
}
 
void Laptop::Show_Hwinfo()
{
    cout << "-------------------------------" << endl;
	cout << Brand << "Hareware info: " << endl;
	cout << "Laptop Size: " << LaptopSize << endl;
	Computer::Show_Hwinfo();
}

