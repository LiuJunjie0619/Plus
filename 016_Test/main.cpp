#include <iostream>
#include <string>
#include <complex>

void Show(std::string s)
{
    std::cout << s << " ";
}
void ToUpper(std::string & s);
bool HuiWen(std::string & s)
{
    std::string temp(s.size(),'\0');
    //std::copy(s.rbegin(),s.rend(),std::ostream_iterator<char,char>(std::cout,""));
    std::copy(s.rbegin(),s.rend(),temp.begin());
    std::cout << std::endl;
    //    temp = s.reserve();
    if(s == temp)
        return true;
    return false;
}

int main()
{
    std::string * s = new std::string("o,.,.,.tT,o");
    std::cout << *s << std::endl;
    ::ToUpper(*s);
    std::cout << *s << std::endl;

    if(::HuiWen(*s))
        std::cout << *s << "是回文" << std::endl;
    else
        std::cout << *s << "不是回文" << std::endl;

    return 0;
}

void ToUpper(std::string & s)
{
    std::string::iterator its;
    for(its = s.begin();its!=s.end();its++)
    {
        if(std::isalpha(*its))
            *its = std::toupper(*its);
        else
            *its = ' ';
    }

    int index = -1;
    while( (index = s.find(' ')) != std::string::npos)
    {
        s.erase(index,1);
    }
    //return s;
}
