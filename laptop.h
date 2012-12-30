//Filename:  pad.h
//Filefunc:  The head file of Laptop class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#ifndef LAPTOP_H_
#define LAPTOP_H_
#include "computer.h"

class Laptop : public Computer
{
private:
    char *Brand;
    int LaptopSize;
    static int LaptopNum;
public:
    Laptop();
    ~Laptop();
	
	int Howmany() {return LaptopNum; }
    virtual void Update_Laptop(const char *Component, const int size);
    virtual void Show_Hwinfo();
};
#endif

