#include <iostream>
#include <sstream>

int main()
{
    std::istringstream s1;
    s1 = std::istringstream("test");        //ok

    //std::cin = std::istringstream("test");  //ERROR: 'operator=' is protected

    std::cout << s1.str() << std::endl;

    return 0;
}
