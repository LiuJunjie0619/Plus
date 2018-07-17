#include <iostream>
#include <cstring>

int main()
{
    const char * state1 = "12345678";
    const char * state2 = "123456";
    const char * state3 = "1234567890";
    int len = std::strlen(state2);
    std::cout << "Increasing loop index:\n";    //递增下标循环
    int i;
    for(i = 1;i <= len; i++)
    {
        std::cout.write(state2,i);
        std::cout << std::endl;
    }
    //concatenate output        连接输出
    std::cout << "Decreasing loop index:\n";    //递减下标输出
    for(i = len;i > 0;i--)
        std::cout.write(state2,i).write("\n",1);
    //exceed string length  字符串长度越界
    std::cout << "Exceeding string length:\n";
    std::cout.write(state2,len + 15) << std::endl;//长度超出后，将读取，栈中相邻内存读数据，此地为相邻读变量 state3


    return 0;
}
