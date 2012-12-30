//Filename:  desktop.cpp
//Filefunc:  Implemention of Desktop Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#include <cstring>
#include "desktop.h"

int Desktop::DesktopNum = 0;

Desktop::Desktop() : Computer()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INITD");
    DisplaySize = 14;
    BoxColor = new char[COLOR_MAX_LEN];
    strcpy(BoxColor, "BLACK");
	DesktopNum++;
}

Desktop::~Desktop()
{
    DesktopNum--;
    delete [] Brand;
    delete [] BoxColor;
}

void Desktop::Update_Desktop(const char *Component, const int num)
{
    if(strcmp(Component, "DISP") == 0)
	    DisplaySize = num;
	else if(strcmp(Component, "CPU") == 0 || strcmp(Component, "MEM") == 0 ||strcmp(Component, "DISK") == 0)
        Update_Hw(Component, num);
	else
	{
	    cout << "Please choose \"DISP/CPU/MEM/DISK\" to update" << endl;	
	}
}

void Desktop::Show_Hwinfo()
{
    cout << "------------------------------------" << endl;
    cout << Brand << " hardware info:" << endl;
	cout << "Display Size: " << DisplaySize << endl;
	cout << "BoxColor: " << BoxColor << endl;
    Computer::Show_Hwinfo();
}

