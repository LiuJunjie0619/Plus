#include <iostream>

using namespace std;

void Show(double x)
{
    std::cout << x << std::endl;
}

int main()
{
    double prices[5] ={4.99,10.99,6.87,7.99,8.49};
    for(double x : prices)
        std::cout << x << std::endl;


    return 0;
}

