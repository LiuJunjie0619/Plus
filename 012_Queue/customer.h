#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>

class Customer
{
public:
    Customer(){arrive = processtime = 0;}
    void set(long when);
    long when() const{return arrive;}
    int ptime() const{return processtime;}
private:
    long arrive;            //arrival time for customer
    int processtime;        //processing time for customer
};

#endif // CUSTOMER_H
