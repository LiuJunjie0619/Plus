#include <iostream>

const int Limit = 10;
int main()
{
    std::cout << "EOF:" << std::cin.eof() << std::endl;
    std::cout << "Fail:" << std::cin.fail() << std::endl;
    std::cout << "Bad:" << std::cin.bad() << std::endl;

    char input[Limit];
    std::cout << "Enter a string for getline() processing:\n";
    std::cin.getline(input,Limit,'#');
    std::cout << "Here is your input:\n";
    std::cout << input << "\nDone with phase 1\n";
    std::cout << "EOF:" << std::cin.eof() << std::endl;
    std::cout << "Fail:" << std::cin.fail() << std::endl;
    std::cout << "Bad:" << std::cin.bad() << std::endl;
    std::cin.clear();

    char ch;
    std::cin.get(ch);
    std::cout << "The next input character is " << ch << std::endl;

    if(ch != '\n')
        std::cin.ignore(Limit,'\n');        //discard rest of line

    std::cout << "Enter a string for get() processing:\n";
    std::cin.get(input,Limit,'#');
    std::cout << "Here is your input:\n";
    std::cout << input << "\nDone with phase 2\n";
    std::cout << "EOF:" << std::cin.eof() << std::endl;
    std::cout << "Fail:" << std::cin.fail() << std::endl;
    std::cout << "Bad:" << std::cin.bad() << std::endl;
    std::cin.clear();

    std::cin.get(ch);
    std::cout << "The next input character is " << ch << std::endl;


    {
//        std::cout << "########################################################################" << std::endl;
//        std::cout << "显示字符串：";
//        std::cout << 65;
//        std::cout << " | 显示对应的ASCII(American Standard Code For Information Interchange):";
//        std::putchar(65);
//        std::cout << std::endl;

    }

    {
//        std::cout << "############################可以接收空白符 cin.get(ch)#############################" << std::endl;
//        int ct = 0;
//        char ch;
//        std::cin.get(ch);
//        while(ch != '\n')
//        {
//            std::cout << ch;
//            ct++;
//            std::cin.get(ch);
//        }
//        std::cout << std::endl;
//        std::cout << ct << std::endl;
    }
    {
//        std::cout << "############################可以接收空白符 ch = cin.get()#############################" << std::endl;
//        int ct = 0;
//        char ch;
//        ch = std::cin.get();
//        while(ch != EOF)
//        {
//            std::cout << ch;
//            ct++;
//            ch = std::cin.get();
//        }
//        std::cout << std::endl;
//        std::cout << ct << std::endl;
    }
    {
//        std::cout << "##############################跳过空白符###################################" << std::endl;
//        int ct = 0;
//        char ch;
//        std::cin >> ch;
//        while(ch != '\n' && ch != EOF)
//        {
//            std::cout << ch;
//            ct++;
//            std::cin >> ch;
//        }
//        std::cout << std::endl;
//        std::cout << ct << std::endl;
    }
    {
//        std::cout << "##############################字符串输入###################################" << std::endl;
//        char line[50];
//        std::cin.get(line,51,' ');
//        std::cout << line << std::endl;
    }

    return 0;
}
