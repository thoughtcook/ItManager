//Filename: computer.h
//Filefunc: The Component of Computer Class 
//Coder:    Huangqiang
//Version:  v0.1
//Date:     2012/12/25
//Modification log:
//

#ifndef COMPUTER_H_
#define COMPUTER_H_

class Computer
{
private:
   double CPUFreq;
   double MemorySize;
   int DiskSize;
public:
   Computer();
   Computer(double CPU_freq, double Memory_size, int Disk_size);
   Computer(Computer &Comp);
   ~Computer();

   void Update_Hw(const char *Component, const int size);
   void Show_Hwinfo();
};

#endif
