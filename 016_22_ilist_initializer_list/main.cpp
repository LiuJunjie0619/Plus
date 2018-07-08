#include <iostream>
#include <initializer_list>
#include <map>

double sum(std::initializer_list<double> il);
double average(const std::initializer_list<double> & ril);

int main()
{    
    std::cout << "List 1: sum = " << ::sum({2,3,4})
              << ", ave = " << ::average({2,3,4})
              << '\n';

    std::initializer_list<double> dl = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "List 2: sum = " << sum(dl)
              << ", ave = " << average(dl)
              << '\n';

    std::initializer_list<double> dl2 = {16.0, 25.0, 36.0, 40.0, 64.0};
    std::cout << "List 3: sum = " << sum(dl2)
              << ", ave = " << average(dl2)
              << '\n';

    std::cout.setf(std::ios_base::fixed);
    std::cout.precision(2);
    dl2 = {16.0111111, 25.022222, 36.033333, 40.0444444, 64.055555};
    std::cout << "List 3: sum = " << sum(dl2)
              << ", ave = " << average(dl2)
              << '\n';

    return 0;
}

double sum(std::initializer_list<double> il)
{
    double tot = 0;
    for(auto p = il.begin();p != il.end(); p++)
        tot += *p;
    return tot;
}

double average(const std::initializer_list<double> & ril)
{
    double tot = 0;
    int n = ril.size();
    double ave = 0.0;
    if(n > 0)
    {
        std::initializer_list<double>::iterator p;
        for(p=ril.begin();p!=ril.end();p++)
            tot += *p;
        ave = tot/n;
    }
    return ave;
}
