#include "stock00.h"

#include <iostream>
#include <string>

Stock::Stock()
{

}

Stock::Stock(int x)
{
    std::cout << "一个参数的初始化：" << x << std::endl;
}

Stock::~Stock()
{

}

void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if(n < 0)
    {
        std::cout << "Number of shares cat't be negative; "
                  << company << " shares set to 0.\n"
                  << std::endl;
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double price)
{
    if(num < 0)
    {
        std::cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n"
                  << std::endl;
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price)
{
    using std::cout;
    using std::endl;

    if(num < 0)
    {
        cout << "Number of shares purchased can't be negative."
                  << "Transaction is aborted.\n"
                  << endl;
    }
    else if(num > shares)
    {
        cout << "You can't sell more than you have!"
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show()
{
    std::ios_base::fmtflags orig = std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::streamsize prec = std::cout.precision(3);
    std::cout << "Company: " << company
              << " Shares:" << shares << "\n"
              << " Share Prive: $" << share_val;
    std::cout.precision(2);
    std::cout << " Total Worth: $" << total_val << '\n';
}
