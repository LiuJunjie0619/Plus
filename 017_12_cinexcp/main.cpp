#include <iostream>
#include <exception>

int main()
{
    //have failbit cause an exception to be thrown
    //std::cin.exceptions(std::ios_base::failbit | std::ios_base::badbit | std::ios_base::eofbit);
    //std::cin.exceptions(std::ios_base::failbit | std::ios_base::badbit);

    std::cout << "Enter numbers: ";
    int sum = 0;
    int input;
    try
    {
        while(std::cin >> input)
            sum += input;
    }
    catch(std::ios_base::failure & bf)
    {
        std::cout << bf.code() << std::endl;
        std::cout << bf.what() << std::endl;
        std::cout << "O! the horror!\n";
    }
    std::cout << "cin state:" << std::cin.eof() << std::cin.bad() << std::cin.fail() << std::endl;
    std::cout << "Last value entered = " << input << std::endl;
    std::cout << "Sum = " << sum << std::endl;

    //std::cin.exceptions();
    std::cin.clear();

    std::cout << "cin state:" << std::cin.eof() << std::cin.bad() << std::cin.fail() << std::endl;
    while(std::cin >> input)
        sum += input;
    if(std::cin.fail() && !std::cin.bad())
    {
        std::cin.clear();
        while(!std::isspace(std::cin.get()))
            continue;
    }
    else
    {
        std::cout << "I cannot go on!\n";
        std::exit(1);
    }
    std::cout << "Last value entered = " << input << std::endl;
    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
