#include <iostream>
#include <vector>
#include <valarray>
#include <algorithm>

template <typename T>
void Show(T & t)
{
    std::cout << t << " ";
}

int main()
{
    std::vector<double> data;
    double temp;

    std::cout << "Enter numbers (<=0 to quit):\n";
    while(std::cin >> temp && temp > 0)
        data.push_back(temp);
    std::cout << "vector:";
    std::for_each(data.begin(),data.end(),Show<double>);
    std::cout << std::endl;
//    std::sort(data.begin(),data.end());
//    std::for_each(data.begin(),data.end(),Show<double>);
//    std::cout << std::endl;

    int size = data.size();
    std::valarray<double> numbers(size);
    int i;
    for(i=0;i<size;i++)
        numbers[i] = data[i];
    std::cout << "valarray:";
    std::for_each(std::begin(numbers),std::end(numbers),Show<double>);
    std::cout << std::endl;

    std::valarray<double> sq_rts(size);
    sq_rts = std::sqrt(numbers);
    std::cout << "sqrt valarray:";
    std::for_each(std::begin(sq_rts),std::end(sq_rts),Show<double>);
    std::cout << std::endl;

    std::valarray<double> results(size);
    results = numbers + 2.0 * sq_rts;
    std::for_each(std::begin(results),std::end(results),Show<double>);
    std::cout << std::endl;

    std::cout.setf(std::ios_base::fixed);
    std::cout.precision(4);
    for(i=0;i<size;i++)
    {
        std::cout.width(8);
        std::cout << numbers[i] << ": ";
        std::cout.width(8);
        std::cout << results[i] << std::endl;
    }
    std::cout << "done\n";

    return 0;
}
