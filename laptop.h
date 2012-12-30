#ifndef LAPTOP_H_
#define LAPTOP_H_
#include "computer.h"

class Laptop : public Computer
{
private:
    char *Brand;
    int LaptopSize;
    static int LaptopNum;
public:
    Laptop();
    ~Laptop();
    virtual void Update_Laptop(const char *Component, const int size);
    virtual void Show_Hwinfo();
};
#endif

