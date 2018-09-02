#include <iostream>
#include <string>

void show_list(){}

template <typename T>
void show_list(const T& value)
{
    std::cout << value << std::endl;
}

template <typename T, typename... Args>
void show_list(const T& value,const Args&... args)
{
    std::cout << value << ',';
    show_list(args...);
}
int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    std::string mregex = "\\n\\t\\d\\w\\d";
    std::string mregex2 = R"(\t\t\t\t\t\t\t\t\t\t\t\t\t\n\t\d\w\d)";
    show_list(n,x);
    show_list(x*x, '!' , 7 ,mr,mregex,mregex2);

    return 0;
}
