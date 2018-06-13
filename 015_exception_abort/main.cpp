#include <iostream>
#include <stdlib.h>

double hmean(double a,double b);

int main()
{
    double x,y,z;
    std::cout << "Enter tow numbers: ";
    while(std::cin >> x >> y)
    {
        z = hmean(x,y);
        std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
        std::cout << "Enter next set fo numbers <q to Quit>";
    }
    std::cout << "Bye!";

    return 0;
}

double hmean(double a,double b)
{
    if(a==-b)
    {
        std::cout << "a == -b untenable atguments to hmean()\n";
        std::abort();
    }
    return 2.0 * a * b / (a + b);
}
