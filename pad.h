//Filename:  pad.h
//Filefunc:  The head file of Pad class 
//Coder:     Johnny Huang
//Version:   v0.1
//Date:      2012/12/29
//--------------Modification Log-------------
//--12.29.2012--Init

#ifndef PAD_H_
#define PAD_H_
#include "computer.h"

//Class Pad
class Pad : public Computer
{
private:
    char *Brand;
    int PadSize;        //Unit: inch
    double Weight;      //Unit: pound
    static int PadNum;
public:
    Pad();
    ~Pad();
    virtual void Show_Hwinfo();
    int Howmany() { return PadNum; }	
};

#endif

