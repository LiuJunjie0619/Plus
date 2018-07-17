#include <iostream>

int main()
{
    std::cout << "12345678901234567890\n";
    char ch = 'K';
    int t = 273;
    std::cout << ch << ":\n";
    std::cout << t << ":\n";
    std::cout << -t << ":\n";

    double f1 = 1.200;
    std::cout << f1 << ":\n";
    std::cout << (f1 + 1.0/9.0) << ":\n";       //display 1.31111:

    double f2 = 1.67E2;
    std::cout << f2 << ":\n";                   //display 167
    f2 += 1.0/9.0;
    std::cout << f2 << ":\n";                   //display 167.111
    std::cout << (f2 * 1.0e2) << ":\n";         //display 16711.1
    std::cout << (f2 * 1.0e4) << ":\n";         //display 1.67111e+06

    double f3 = 2.3e-4;
    std::cout << f3 << ":\n";                   //display 0.00023
    std::cout << f3/10 << ":\n";                //display 2.3e-05

    std::cout.flags(std::ios_base::hex);
    std::cout << 16 << std::endl;               //display 10
    std::cout.unsetf(std::ios_base::hex);
    std::cout.setf(std::ios_base::dec);
    std::cout << 16 << std::endl;               //display 16
    std::oct(std::cout);
    std::cout << 16 << std::endl;               //display 20

    return 0;
}
