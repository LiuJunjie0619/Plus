#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <vector>
#include <cmath>

template <typename T>
class TooBig
{
private:
    T cutoff;
public:
    TooBig(const T & t):cutoff(t){}
    bool operator()(const T & v)
    {
        return v > cutoff;
    }
};

class A
{
public:
    void operator()(const int & a)
    {
        std::cout << a << " ";
    }
};

double add(double x, double y)
{
    return x+y;
}

double sqrtTest(double x)
{
    return std::sqrt(x);
}

template <typename T>
void output(const T & t)
{
    std::cout << t << " ";
}

int main()
{
    TooBig<int> f100(100);
    int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
    std::list<int> yadayada(vals,vals + 10);
    std::list<int> etcetera(vals,vals + 10);

//    C++11 can use the following instead
//    list<int> yadayada = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};
//    list<int> etcetera = {50, 100, 90, 180, 60, 210, 415, 88, 188, 201};

    A a;
    std::for_each(yadayada.begin(),yadayada.end(),a);
    std::cout << std::endl;

    std::cout << "Original lists:\n";
    std::for_each(yadayada.begin(),yadayada.end(),output<int>);
    std::cout << std::endl;
    std::for_each(etcetera.begin(),etcetera.end(),output<int>);
    std::cout << std::endl;

    yadayada.remove_if(f100);
    etcetera.remove_if(TooBig<int>(200));

    std::cout << "Trimmed lists: \n";
    std::for_each(yadayada.begin(),yadayada.end(),output<int>);
    std::cout << std::endl;
    std::for_each(etcetera.begin(),etcetera.end(),output<int>);
    std::cout << std::endl;

    std::cout << "函数符的参数大于1" << std::endl;
    const int LIM = 5;
    double arr1[LIM] = {36, 39, 42, 45, 48};
    std::vector<double> gr8(arr1, arr1 + LIM);
    std::vector<double> m8(arr1, arr1 + LIM);
    std::ostream_iterator<double,char> out(std::cout , " ");
    std::transform(gr8.begin(), gr8.end(), gr8.begin(),out, add);
    std::cout << std::endl;
    std::transform(gr8.begin(), gr8.end(), gr8.begin(),m8.begin(), add);
    std::for_each(m8.begin(), m8.end(), output<double>);
    std::cout << std::endl;

    std::cout << "函数符的参数等于1" << std::endl;
    std::transform(m8.begin(),m8.end(),out,sqrtTest);
    std::cout << std::endl;

    return 0;
}
