#include <iostream>
#include "stock00.h"
using namespace std;

int main()
{
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

    return 0;
}
