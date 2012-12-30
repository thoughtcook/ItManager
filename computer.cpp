//Filename:  computer.cpp
//Filefunc:  Implementation of Computer Class
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/25
//--------------Modification Log-------------
//--12.29.2012--Add class Memory/CPU/Disk

#include <cstring>
#include <iostream>
#include "computer.h"

//Class Memory constructor
//default
Memory::Memory()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INITM");
    MemorySize = 2048;
}

//Class Memory constructor
//e.g. Memory mem0 ("Qmem", 1024);
Memory::Memory(const char *m_brand, const int m_size)
{
    int len = strlen(m_brand);
    Brand = new char[len+1];
    strcpy(Brand, m_brand);
    MemorySize = m_size;
}

//Class Memory destructor
Memory::~Memory()
{
    delete [] Brand;
}

//Class Memory construcor
//---e.g.---Mem0 = Mem1
Memory::Memory(const Memory& mem)
{
    int len = strlen(mem.Brand);
    Brand = new char[len+1];
    strcpy(Brand, mem.Brand);
    MemorySize = mem.MemorySize;
}

//Class Memory method: operator+
//---e.g.--- mem = mem0 + mem1;
Memory Memory::operator+ (const Memory& mem) const
{   
    Memory memTemp;
    memTemp.Brand = strcat(Brand, mem.Brand);
    memTemp.MemorySize = MemorySize + mem.MemorySize;
    return memTemp;
}


ostream& operator<< (ostream &os, const Memory &m)
{
     os << "----------Memory info----------" << endl;
     os << "Brand:   " << m.Brand << endl;
     os << "Size:    " << m.MemorySize << endl;
     return os;
}

//Class CPU constructor
//default
//---e.g.---CPU Intel;
CPU::CPU()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INITC");
    CPUFreq = 1.2;
}

//Class CPU constructor
//---e.g.---CPU Intel ("Intel", 1.5);

CPU::CPU(const char *c_brand, const double c_freq)
{
    int len = strlen(c_brand);
    Brand = new char[len+1];
    strcpy(Brand, c_brand);
    CPUFreq = c_freq;
}

//Class CPU destructor
CPU::~CPU()
{
    delete [] Brand;
}

ostream &operator<< (ostream &os, const CPU &c)
{
    os << "----------CPU info----------" << endl;
    os << "Brand:    " << c.Brand << endl;
    os << "Freq:     " << c.CPUFreq << endl;
    return os;
}

//Class Disk constuctor
//default
//---e.g.---Disk Disk0;
Disk::Disk()
{
    Brand = new char[BRAND_MAX_LEN];
    strcpy(Brand, "INITD");
    DiskSize = 300;
}

//Class Disk construtor
//---e.g.---Disk sandisk ("Sandisk", 500);
Disk::Disk(const char *d_brand, const int d_size)
{
    int len = strlen(d_brand);
    Brand = new char[len+1];
    strcpy(Brand, d_brand);
    DiskSize = d_size;
}

//Class Disk destructor
Disk::~Disk()
{
    delete [] Brand;
}

//Class Disk method: Disk(const Disk &d)
//---e.g.--- Disk Sandisk = westdisk;

Disk::Disk(const Disk &d)
{
    int len = strlen(d.Brand);
	Brand = new char[len+1];
    strcpy(Brand, d.Brand);
    DiskSize = d.DiskSize;
}


ostream &operator<< (ostream &os, const Disk &d)
{
    os << "----------Disk info----------" << endl;
    os << "Brand:     " << d.Brand << endl;
    os << "Size:      " << d.DiskSize << endl;
    return os;
} 

//Class Computer memthod
//Description: Update hardware
void Computer::Update_Hw(const char *Component, const int size)
{

    if(strcmp(Component, "CPU") == 0)
    {
        cCPU.update_c(size);
    }
    else if(strcmp(Component, "MEM") == 0)
    {
        cMem.update_m(size);
    }
    else if(strcmp(Component, "DISK") == 0)
    {
        cDisk.update_d(size);
    }
    else
    {
        cout << "Wrong HW name, Please Select \"CPU/MEM/DISK\" ";
        cout << endl;
    }
}

void Computer::Show_Hwinfo()
{
     cout << cCPU;
     cout << cMem;
     cout << cDisk;
}

