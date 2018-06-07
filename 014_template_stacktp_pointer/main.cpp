#include <iostream>
#include "stcktp1.h"
#include <cstdlib>
#include <ctime>

const int Num = 10;
int main()
{
    std::srand(std::time(0));
    std::cout << "Please enter stack size: ";
    int stacksize;
    std::cin >> stacksize;
    //create an empty stack witch stacksize slots
    Stack<const char *> st(stacksize);

    //in basket
    const char * in[Num] = {"1:001","2.002","3.003","4.004","5.005","6,006","7.007","8.008","9.009","10.010"};
    const char * out[Num];

    int processed = 0;
    int nextin = 0;
    while(processed < Num)
    {
        if(st.isempty())
            st.push(in[nextin++]);
        else if(st.isfull())
            st.pop(out[processed++]);
        else if(std::rand() % 2 && nextin < Num)
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }

    for(int i=0;i<Num;i++)
        std::cout << out[i] << std::endl;

    std::cout << "Bye\n";
    return 0;
}
