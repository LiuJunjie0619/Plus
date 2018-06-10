#ifndef TEMPPARM_H
#define TEMPPARM_H
#include "stacktp.h"
#include <iostream>

template <template <typename T> class Thing>
class Crab
{
private:
    Thing<int> s1;
    Thing<double> s2;
public:
    Crab(){}
    bool push(int a,double x){return s1.push(a) && s2.push(x);}
    bool pop(int & a,double & x){return s1.pop(a) && s2.pop(x);}
};

#endif // TEMPPARM_H
