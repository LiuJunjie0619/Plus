#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <functional>
#include <cmath>

double sqrtTest(double x)
{
    return std::sqrt(x);
}

void Show(double);
const int LIM = 6;
int main()
{
    double arr1[LIM] = {28, 29, 30, 35, 38, 59};
    double arr2[LIM] = {63, 65, 69, 75, 80, 99};
    std::vector<double> gr8(arr1,arr1+LIM);
    std::vector<double> m8(arr2,arr2+LIM);
    std::cout.setf(std::ios_base::fixed);
    std::cout.precision(1);
    std::cout << "gr8:\t";
    std::for_each(gr8.begin(),gr8.end(),Show);
    std::cout << std::endl;
    std::cout << "m8:\t";
    std::for_each(m8.begin(),m8.end(),Show);
    std::cout << std::endl;

    std::vector<double> sum(LIM);
    std::transform(gr8.begin(),gr8.end(),m8.begin(),sum.begin(),std::plus<double>());
    std::cout << "Sum:\t";
    std::for_each(sum.begin(),sum.end(),Show);
    std::cout << std::endl;

    std::vector<double> prod(LIM);
    std::transform(gr8.begin(),gr8.end(),prod.begin(),std::bind1st(std::multiplies<double>(),2.5));
    std::cout << "prod:\t";
    std::for_each(prod.begin(),prod.end(),Show);
    std::cout << std::endl;

    return 0;
}

void Show(double v)
{
    std::cout << v << " ";
}
