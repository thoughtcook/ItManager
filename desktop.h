//Filename:  desktop.h
//Filefunc:  The head file of Desktop Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init


#ifndef DESKTOP_H_
#define DESKTOP_H_
#include "computer.h"

//Class Desktop
class Desktop :public Computer
{
private:
    char *Brand;
    int DisplaySize;     //Unit: inch
    char *BoxColor;
    static int DesktopNum;
public:
    Desktop();
    ~Desktop();
	int Howmany() { return DesktopNum; } 
    virtual void Update_Desktop(const char *Component, const int size);
    virtual void Show_Hwinfo();
};

#endif
