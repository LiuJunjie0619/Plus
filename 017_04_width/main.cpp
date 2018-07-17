#include <iostream>

int main()
{
    std::cout.fill('*');
    std::cout << "#";
    int w = std::cout.width(30);
//    w = std::cout.width(30);
    std::cout << w << std::endl;
    //std::cout << "default field width = " << w << ":\n";
    std::cout.fill(' ');
    std::cout.width(5);
    std::cout << "N" << ':';
    std::cout.width(8);
    std::cout << "N * N" << ":\n";

    for(long i = 1;i <= 100; i *= 10)
    {
        std::cout.width(5);
        std::cout << i << ':';
        std::cout.width(8);
        std::cout << i * i << ":\n";
    }

    return 0;
}
