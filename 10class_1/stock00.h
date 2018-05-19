#ifndef STOCK_H
#define STOCK_H

#include <string>

class Stock
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot(){total_val = shares * share_val;}
public:
    Stock();
    Stock(int x);
    ~Stock();
public:
   void acquire(const std::string & co, long n, double pr);
   void buy(long num,double price);
   void sell(long num,double price);
   void update(double price);
   void show();
};//note semicolon at the end

#endif // STOCK_H
