#include <iostream>
#include <cmath>

int main()
{
    //use left justification,show the plus sign,show trailing zeros,with a precision of 3
    std::cout.setf(std::ios_base::left,std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::showpos);
    std::cout.setf(std::ios_base::showpoint);
    std::cout.precision(3);

    //use e-notation and save old format setting
    std::ios_base::fmtflags old = std::cout.setf(std::ios_base::scientific,std::ios_base::floatfield);
    std::cout << "Left Justification:\n";
    long n;
    for(n = 1;n <= 61; n += 10)
    {
        std::cout.width(6);
        std::cout << n << "|";
        std::cout.width(12);
        std::cout << std::sqrt(double(n)) << "|\n";
    }

    //change to internal justification
    std::cout.setf(std::ios_base::internal,std::ios_base::adjustfield);
    //restore default floating-point display style
    std::cout.setf(old,std::ios_base::floatfield);
    std::cout << "Internal Justification:\n";
    for(n = 1;n <= 61; n+=10)
    {
        std::cout.width(6);
        std::cout << n << "|";
        std::cout.width(12);
        std::cout << std::sqrt(double(n)) << "|\n";
    }

    //use right justification,fixed notation
    std::cout.setf(std::ios_base::right,std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::cout << "Right Justification:\n";
    for(n = 1; n <=61; n += 10)
    {
        std::cout.width(6);
        std::cout << n << "|";
        std::cout.width(12);
        std::cout << std::sqrt(double(n)) << "|\n";
    }

    //进入float默认显示模式
    std::cout.setf(0,std::ios_base::floatfield);
    std::cout.unsetf(std::ios_base::floatfield);
    std::cout << 1.234567890 << std::endl;

    return 0;
}
