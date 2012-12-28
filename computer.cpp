//Filename: computer.cpp
//Filefunc: 
//Coder:    Huangqiang
//Version:  v0.1

#include <cstring>
#include <iostream>
#include "computer.h"

Computer::Computer()
{
    CPUFreq =  1.2; // Defoult CPU frequency: 1.2 GHz
    MemorySize = 2.0;
    DiskSize = 250;
}

Computer::Computer(double CPU_freq, double Memory_size, int Disk_size)
{
    CPUFreq = CPU_freq;
    MemorySize = Memory_size;
    DiskSize = Disk_size;
}

Computer::Computer(Computer &Comp)
{
     CPUFreq = Comp.CPUFreq;
     MemorySize = Comp.MemorySize;
     DiskSize = Comp.DiskSize;
}

Computer::~Computer()
{
}

void Computer::Update_Hw(const char *Component, const int size)
{
    using std::cout;
    using std::endl;    

    if(strcmp(Component, "CPU") == 0)
    {
        CPUFreq = size;
    }
    else if(strcmp(Component, "MEM") == 0)
    {
        MemorySize = size;
    }
    else if(strcmp(Component, "DISK") == 0)
    {
        DiskSize = size;
    }
    else
    {
        cout << "Wrong HW name, Please Select \"CPU/MEM/DISK\" ";
        cout << endl;
    }
}

void Computer::Show_Hwinfo()
{
    using std::cout;
    using std::endl;

    cout << "CPU frequency: " << CPUFreq << endl;
    cout << "Memory Size:   " << MemorySize << endl;
    cout << "Disk Size::    " << DiskSize << endl;
}
