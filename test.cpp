//Filename: test.cpp
//Filefunc: The test case to validation
//Coder:    Huangqiang
//Version:  v0.1

#include <iostream>
#include "computer.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    
    Computer Dell (1.6, 2.5, 300);
    Computer HP;
    
    cout << "The hardware info of Dell: " << endl;
    Dell.Show_Hwinfo();
    cout << "The hardware info of HP: " << endl;
    HP.Show_Hwinfo();
    
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Now Create a Copy of Dell Computer" << endl;

    Computer Dell1 = Dell;
    cout << "the hardware info of Dell 1: " << endl;
    Dell1.Show_Hwinfo();
    
    cout << endl;
    cout << "-----------------------------"<< endl;
    cout << "Update hardware:" << endl;
    Dell1.Update_Hw("DISK", 500);
    cout << "Now the Dell1 computer hardware information: " << endl;
    Dell1.Show_Hwinfo();
}
