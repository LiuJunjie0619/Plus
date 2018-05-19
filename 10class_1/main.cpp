#include <iostream>
#include "stock00.h"
using namespace std;

class A
{
private:
//    const int Month = 12;     //declare a constant? Fails
//    enum {Month = 12};          //Success
    static const int Month = 12;
    double costs[Month];
    int x = 10;
    friend int operator*(int x,const A a);
    friend ostream& operator<<(ostream & os,const A a);
};

//enum class egg {Small,Medium,Large,Jumbo};
//enum struct t_shirt {Small,Medium,Large,XLarge};
enum class pizza {a,b,c};

int operator*(int x,const A a)
{
    std::cout << x * a.x;
    return x*a.x;
}

ostream& operator<<(ostream & os,const A a)
{
    os << a.x;
    return  os;
}

int main()
{
    A a;
    A b;
    cout << a << b << std::endl;
    cerr << a << b << std::endl;
//    int x =2;
//    int b = x * a;
//    std::cout << b<< std::endl;
//    Stock one = 12;
    //int x = egg::Small;
//    int y = t_shirt::Small;

//    t_shirt Folyd = t_shirt::Medium;
#if 0
    Stock s;

    s.acquire("AA",20,12.50);
    s.show();

    s.buy(15,18.125);
    s.show();

    s.sell(400,20.00);
    s.show();

    s.buy(300000,40.125);
    s.show();

    s.sell(300000,0.125);
    s.show();
#endif

    return 0;
}
