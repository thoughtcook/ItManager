//Filename:  desktop.cpp
//Filefunc:  Implemention of Desktop Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#include "laptop.h"

//LaptopNum to record the total number of Laptop
int Laptop::LaptopNum = 0;

//Constructor of Laptop 
Laptop::Laptop() : Computer(), Brand ("Lenovo")
{
    LaptopSize = 14;
    LaptopNum++;
}

//Destructor of Laptop
Laptop::~Laptop()
{
    LaptopNum--;
}

//Update the Hardware component of Laptop
//You can update the CPU/MEM/DISK
void Laptop::Update_Laptop(const char *Component, const int num)
{
    Computer::Update_Hw(Component, num);
}

//Show the hardware info of Laptop 
void Laptop::Show_Hwinfo()
{
    cout << "-------------------------------" << endl;
	cout << Brand << " Hareware info: " << endl;
	cout << "Laptop Size: " << LaptopSize << endl;
	Computer::Show_Hwinfo();
}

