#include <iostream>

int main()
{
//    std::ios_base::fmtflags setf(std::ios_base::fmtflags);
//    std::ios_base::fmtflags setf(std::ios_base::fmtflags,std::ios_base::fmtflags);
    int temperature = 63;
    std::cout << "##############################################################" << std::endl;
    std::cout << "Today's water temperature: ";
    std::cout.setf(std::ios_base::showpos);         //show plus sign
    std::cout << temperature << std::endl;

    std::cout << "For our programming friends,that's\n";
    std::cout << std::hex << temperature << std::endl;      //use hex
    std::cout.setf(std::ios_base::uppercase);                    //use uppercase in hex
    std::cout.setf(std::ios_base::showbase);                     //use 0X prefix for hex
    std::cout << "or\n";
    std::cout << temperature << std::endl;
    std::cout << "How " << true << "!  oops -- How ";
    std::cout.setf(std::ios_base::boolalpha);
    std::cout << true << "!\n";

    return 0;
}
