//Filename:  test.cpp
//Filefunc:  The test case to validation
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/25
//--------------Modification Log-------------
//--12.29.2012--Add class Memory/CPU/Disk

#include "desktop.h"
#include "laptop.h"
#include "pad.h"

void test_computer();
void test_desktop();
void test_laptop();
void test_pad();

int main()
{
    test_computer();
	test_desktop();
	test_laptop();
    test_pad();	
    return 0; 
}

void test_computer()
{
    Computer Dell;
	cout << "-----INIT A Dell computer-----" << endl;
	Dell.Show_Hwinfo();
	Dell.Update_Hw("DISK", 1000);
	Dell.Update_Hw("CPU", 2);
	Dell.Update_Hw("MEM", 2048);
	Dell.Show_Hwinfo();
	cout << "-----We now have " << Dell.Howmany() << " computers.---" << endl;
}

void test_desktop()
{
    Desktop HP;
	int sum;
	
	cout << "------INIT A HP Desktop------" << endl;
	HP.Show_Hwinfo();
	HP.Update_Desktop("DISP", 21);
	HP.Update_Desktop("CPU", 2);
	HP.Update_Desktop("MEM", 3096);
	HP.Update_Desktop("DISK", 1000);
	HP.Update_Desktop("CPUU", 3);
	HP.Show_Hwinfo();
	sum = HP.Howmany();
	cout << "We have " << sum << " Desktops. " << endl;
}

void test_laptop()
{
    Laptop Lenovo;
	int sum;
	cout << "------INIT A Lenovo Laptop-------" << endl;
	Lenovo.Show_Hwinfo();
	Lenovo.Update_Laptop("CPU", 3);
	Lenovo.Update_Laptop("DISK", 600);
	Lenovo.Update_Laptop("MEM", 2048);
	Lenovo.Show_Hwinfo();
	
	sum = Lenovo.Howmany();
	cout << "We have " << sum << " Laptop." << endl;
}

void test_pad()
{
    Pad ipad;
	int sum;
	cout << "-------INIT A ipad PAD----------" << endl;
	ipad.Show_Hwinfo();
	sum = ipad.Howmany();
	
	cout << "We have " << sum << " PAD. " << endl;
}