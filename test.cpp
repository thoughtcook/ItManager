//Filename: test.cpp
//Filefunc:  The test case to validation
//Coder:    Huangqiang
//Version:  v0.1

#include "desktop.h"

int main()
{
    Computer Dell;
    int num;
	Dell.Update_Hw("DISK", 1000);
    Dell.Show_Hwinfo();
    
	Desktop HP;
	HP.Show_Hwinfo();
	HP.Update_Desktop("DISP", 19);
	HP.Show_Hwinfo();
	num = HP.Howmany();
	cout << "We have " << num << " Desktops. " << endl;
	
    return 0; 
}
