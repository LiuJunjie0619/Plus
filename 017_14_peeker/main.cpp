#include <iostream>

int main()
{
    //read and echo input up to a # character
    char ch;

    while(std::cin.get(ch))     //terminates on EOF
    {
        if(ch != '#')
            std::cout << ch;
        else
        {
            std::cin.putback(ch);
            break;
        }
    }

    if(!std::cin.eof())
    {
        std::cin.get(ch);
        std::cout << std::endl << ch << " is next input character.\n";
    }
    else
    {
        std::cout << "End of file reached.\n";
    }

    while(std::cin.peek() != '#')       //look ahead
    {
        std::cin.get(ch);
        std::cout << ch;
    }

    if(!std::cin.eof())
    {
        std::cin.get(ch);
        std::cout << std::endl << ch << " is next input character.\n";
    }
    else
    {
        std::cout << "End of file reached.\n";
    }

    return 0;
}
