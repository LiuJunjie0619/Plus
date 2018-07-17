#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
    //use new standard manipulators
    std::cout << std::fixed << std::right;
    //use iomanip manipulators
    std::cout << std::setw(6) << "N" << std::setw(14) << "square root"
              << std::setw(15) << "fourth root\n";

    double root;
    for(int n = 10; n <= 100; n+=10)
    {
        root = std::sqrt(double(n));
        std::cout << std::setw(6) << std::setfill('.') << n << std::setfill(' ')
                  << std::setw(12) << std::setprecision(3) << root
                  << std::setw(14) << std::setprecision(4) << std::sqrt(root)
                  << std::endl;
    }

    return 0;
}
