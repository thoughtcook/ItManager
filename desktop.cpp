//Filename:  desktop.cpp
//Filefunc:  Implemention of Desktop Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#include <cstring>
#include "desktop.h"

//use DesktopNum to record the totall number of Desktop we have
int Desktop::DesktopNum = 0;

//Constructor of Class Desktop
Desktop::Desktop() : Computer()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INITD");
    DisplaySize = 14;
    BoxColor = new char[COLOR_MAX_LEN];
    strcpy(BoxColor, "BLACK");
	DesktopNum++;
}

//Destructor of Class Desktop
Desktop::~Desktop()
{
    DesktopNum--;
    delete [] Brand;
    delete [] BoxColor;
}

//Update the hardware component of Desktop
//You can update DISP(Display)/CPU/MEM/DISK
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

//Show the hardware info of Desktop
void Desktop::Show_Hwinfo()
{
    cout << "------------------------------------" << endl;
    cout << Brand << " hardware info:" << endl;
	cout << "Display Size: " << DisplaySize << endl;
	cout << "BoxColor: " << BoxColor << endl;
    Computer::Show_Hwinfo();
}

