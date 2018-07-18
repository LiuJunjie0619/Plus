#include <iostream>
#include <iomanip>

int main()
{
    int x;
    std::cout << "Please input a number: ";
    std::cin >> x;
    std::cout.fill('*');
    std::cout.setf(std::ios_base::right,std::ios_base::adjustfield);
    std::cout.setf(std::ios_base::showpos);
    std::cout.setf(std::ios_base::showbase);
    std::cout << std::dec << std::setw(15) << x << std::endl;
    std::cout << std::oct << std::setw(15) << x << std::endl;
    std::cout << std::hex << std::setw(15) << x << std::endl;
    return 0;
}
