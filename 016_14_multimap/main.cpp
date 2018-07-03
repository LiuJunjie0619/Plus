#include <iostream>
#include <string>
#include <map>
#include <algorithm>

int main()
{
    std::multimap<int,std::string> codes;
    codes.insert(std::pair<const int,std::string>(415,"San Francisco"));
    codes.insert(std::pair<const int,std::string>(510,"Oakland"));
    codes.insert(std::pair<const int,std::string>(718,"Brooklyn"));
    codes.insert(std::pair<const int,std::string>(718,"Staten Island"));
    codes.insert(std::pair<const int,std::string>(415,"San Rafael"));
    codes.insert(std::pair<const int,std::string>(510,"Berkeley"));
    codes.insert(std::pair<const int,std::string>(718,"Test City"));

    std::cout << "Number of cities witch area code 415: " << codes.count(415) << std::endl;
    std::cout << "Number of cities with area code 718: " << codes.count(718) << std::endl;
    std::cout << "Number of cities witch area code 510:" << codes.count(510) << std::endl;
    std::cout << "Area Code \t City\n";

    std::multimap<int,std::string>::iterator it;
    for(it=codes.begin();it!=codes.end();++it)
        std::cout << "   " << (*it).first << "   \t  " << (*it).second << std::endl;

    std::pair<std::multimap<int,std::string>::iterator,std::multimap<int,std::string>::iterator> range
            = codes.equal_range(718);
    std::cout << "Cities with area code 718:\n";
    for(it = range.first;it != range.second;++it)
        std::cout << (*it).second << std::endl;

    return 0;
}
