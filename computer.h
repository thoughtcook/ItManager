//Filename:  computer.h
//Filefunc:  The head file of Computer Class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/25
//--------------Modification Log-------------
//--12.29.2012--Add class Memory/CPU/Disk

#ifndef COMPUTER_H_
#define COMPUTER_H_
#include <iostream>

#define BRAND_MAX_LEN 15
#define COLOR_MAX_LEN 10

using namespace std;

//Class: Memory
class Memory
{
private:
    char *Brand;
    int MemorySize;   //Unit: MB
public:
    Memory();
    Memory(const char *m_brand, const int m_size);
    ~Memory();
    Memory(const Memory &mem);
    Memory operator+ (const Memory& mem) const;
    Memory operator+ ( const int m_size) { MemorySize += m_size; }
    void update_m(int m_size) { MemorySize = m_size;}
    friend ostream& operator<< (ostream &os, const Memory &m); 
    friend Memory operator+ (const int m_size, Memory& mem)
          { return mem+m_size; }
};

//Class: CPU
class CPU
{
private:
    char *Brand;
    double CPUFreq; //Unit: GHz
public:
    CPU();
    CPU(const char *c_brand, const double c_freq);
    ~CPU();
    
   void update_c(double c_freq) {CPUFreq = c_freq;}
   friend ostream &operator<< (ostream &os, const CPU &c);
};

//Class Disk
class Disk
{
private:
    char *Brand;
    int DiskSize;  // Unit: GB
public:
    Disk();
    Disk(const char *d_brand, const int d_size);
    ~Disk();
    Disk(const Disk& d);
    Disk operator+ (const int d_size) {DiskSize += d_size;}
    void update_d(int d_size) { DiskSize = d_size;}
    void show() const;
    friend Disk operator+ (const int d_size, Disk &d) { return d + d_size;}
    friend ostream &operator << (ostream &os, const Disk &d);
};

//Class: Computer
class Computer
{
private:
   CPU cCPU;
   Memory cMem;
   Disk cDisk;
   static int computer_num;
public:
   Computer() : cCPU("INITC", 1.2), cMem("INITM", 1024), cDisk("INITD", 500) {computer_num ++;}
   virtual int Howmany() {return computer_num;}
   virtual void Update_Hw(const char *Component, const int size);
   virtual void Show_Hwinfo();
};

#endif
