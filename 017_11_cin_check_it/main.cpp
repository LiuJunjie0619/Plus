#include <iostream>

int main()
{
    std::cout << "Enter numbers: ";
    int sum = 0;
    int input;
    while(std::cin >> input)
        sum += input;
    std::cout << "Last value entered = " << input << std::endl;
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
