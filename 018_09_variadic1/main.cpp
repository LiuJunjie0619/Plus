#include <iostream>
#include <string>

//参数最少的函数需要放在前边，因为，程序将按照声明顺序依次查找匹配的函数。
//definition for - parameters -- terminating call
void show_list3(){}

template <typename T>
void show_list3(T value)
{
    std::cout << value << '\n';
}

//definition for 1 or more parameters
template <typename T,typename... Args>
void show_list3(T value,Args... args)
{
    std::cout << value << ",";
    show_list3(args...);
}

int main()
{
    int n = 14;
    double x = 2.71828;
    std::string mr = "Mr. String objects!";
    show_list3(n,x);
//    std::cout << std::endl;
    show_list3(x*x, '!' , 7, mr);
//    std::cout << std::endl;

    return 0;
}
