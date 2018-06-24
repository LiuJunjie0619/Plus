//  capacity() and reserve()

#include <iostream>
#include <string>

int main()
{
    std::string empty;
    std::string small = "bit";
    std::string larger = "Elephants are a girl's best friend";
    std::cout << "Size:\n";
    std::cout << "\tempty: " << empty.size() << std::endl;
    std::cout << "\tsmall: " << small.size() << std::endl;
    std::cout << "\tlarger: " << larger.size() << std::endl;

    std::cout << "Capacities:\n";
    std::cout << "\tempty: " << empty.capacity() << std::endl;
    std::cout << "\tsmall: " << small.capacity() << std::endl;
    std::cout << "\tlarger: " << larger.capacity() << std::endl;
    empty.reserve(50);
    std::cout << "Capactiy after empty.reserve(50): "
              << empty.capacity() << std::endl;

    return 0;
}
