#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::ostringstream outstr;      //message o string stream
    std::string hdisk;
    std::cout << "What's the name of your hard disk? ";
    std::getline(std::cin,hdisk);
    int cap;
    std::cout << "What's its capacity in GB? ";
    std::cin >> cap;
    //write formatted information to string stream
    outstr << "The hard disk " << hdisk << " has a capacity of "
           << cap << " gigabytes.\n";
    std::string result = outstr.str();          //save result
    std::cout << result << std::endl;           //show contents

    std::istringstream instr(result);           //string to istringstream
    std::cout << instr.str() << std::endl;

    return 0;
}
