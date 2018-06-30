#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

void Show(double x)
{
    std::cout << x << std::endl;
}

template<typename T>
bool lessonThan(T & a,T & b)
{
    if(a < b)
        return true;
    else
        return false;
}
template<typename T>
bool moreThan(T & a,T & b)
{
    if(a >= b)
        return true;
    else
        return false;
}
int main()
{
    double prices[5] ={4.99,10.99,6.87,7.99,8.49};
    for(double x : prices)
        std::cout << x << std::endl;

    std::cout << "--------------------------------" << std::endl;

    std::sort(prices,prices+5);
    std::for_each(prices,prices+5,Show);

    std::cout << "--------------------------------" << std::endl;
    std::random_shuffle(&prices[0],&prices[5]);
    std::for_each(&prices[0],&prices[5],Show);

    std::cout << "*********************************" << std::endl;
    int casts[10] = {6,7,2,9,4,11,8,7,10,5};
    std::vector<int> dice(10);
    std::copy(casts,casts+10,dice.begin());

    std::sort(dice.begin(),dice.end());
    std::ostream_iterator<int,char> out_iter(std::cout,"\n");
    //*out_iter++ = 15;   //works licke std::cout << 15 << " " << std::endl;

    std::copy(dice.begin(),dice.end(),out_iter);
    std::cout << "*********************************" << std::endl;
    std::sort(dice.begin(),dice.end(),::moreThan<int>);
    std::copy(dice.begin(),dice.end(),std::ostream_iterator<int,char>(std::cout,"\n"));

    std::cout << "++++++++++++++++++++++++++++++++" << std::endl;
    std::vector<int> dice2(10);
    std::copy(std::istream_iterator<int,char>(std::cin),std::istream_iterator<int,char>(),dice2.begin());
    std::cout << "++++++++++++++++++++++++++++++++" << std::endl;
    std::copy(dice2.begin(),dice2.end(),std::ostream_iterator<int,char>(std::cout,"\n"));

    std::cout << "+++++++++++++++reverse+++++++++++++++++" << std::endl;
    std::copy(dice2.rbegin(),dice2.rend(),std::ostream_iterator<int,char>(std::cout,"\n"));

    std::reverse_iterator<std::vector<int>::iterator> out_reverse;
    out_reverse = dice2.rbegin();
    std::copy(out_reverse,dice2.rend(),std::ostream_iterator<int,char>(std::cout,"\n"));

    return 0;
}

