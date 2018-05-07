#include <iostream>

long LongToMa(long lin);

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

#if 0
    //第二章 开始学习C++ 课后练习题
    cout<<"Hello,world"<<endl;
    int cheeses;
    cheeses =32;
    cin>>cheeses;
    cout<<"We heve "<<cheeses<<" varieties of cheese,"<<endl;

    long lin;
    long lout;
    cout<<"请出入一个长度（单位：long）:";
    cin>>lin;
    lout=LongToMa(lin);
    cout<<"对应 "<<lout<<"码"<<endl;
#endif

    cout<<"test"<<endl;
    return 0;
}

long LongToMa(long lin)
{
    long lout=lin*220;
    return lout;
}
