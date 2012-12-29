//Filename: test.cpp
//Filefunc:  The test case to validation
//Coder:    Huangqiang
//Version:  v0.1

#include "computer.h"

int main()
{
    Computer Dell;
    Dell.Update_Hw("DISK", 1000);
    Dell.Show_Hwinfo();
    
    return 0; 
}
