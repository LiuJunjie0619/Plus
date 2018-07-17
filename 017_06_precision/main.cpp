#include <iostream>

int main()
{
    float price1 = 20.40;
    float price2 = 1.9 + 8.0/9.0;

    std::cout << "\"Furry Friends\" is $" << price1 << "!\n";
    std::cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    std::cout.precision(2);
    std::cout << "\"Furry Friends\" is $" << price1 << "!\n";
    std::cout << "\"Fiery Fiends\" is $" << price2 << "!\n";

    return 0;
}
