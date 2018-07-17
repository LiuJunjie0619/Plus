#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;

    std::cout << "n\tn*n\n";
    std::cout << n << "\t" << n*n << " (decimal)\n";

    //set to hex mode
    std::cout << std::hex;
    std::cout << n << "\t";
    std::cout << n*n << " (hexadecimal)\n";

    return 0;
}
