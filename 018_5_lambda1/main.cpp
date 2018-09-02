#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
//#include <cmath>

const long Size = 390000L;
int main()
{
    std::vector<int> numbers(Size);
    std::srand(std::time(0));
    std::generate(numbers.begin(), numbers.end(),std::rand);
    std::cout << "Sample size = " << Size << '\n';

    int count3 = 0;
    int count13 = 0;
    //using lambdas
    auto md3 = [](int x){ return x % 3 == 0;};
    count3 = std::count_if(numbers.begin(), numbers.end(),md3);
    std::cout << "Count of numbers  divisible by 3: " << count3 << '\n';
    std::for_each(numbers.begin(),numbers.end(),
                  [&count13](int x)
    {
        //&count3 += (x % 3 == 0);
        count13 += (x % 13 == 0);
    });
    std::cout << "Count of numbers divisible by 13: " << count13 << "\n\n";

    //using single lambda
    count3 = 0;
    count13 = 0;
    std::for_each(numbers.begin(), numbers.end(),
                  [&](int x)
    {
        count3 += (x % 3 == 0);
        count13 += (x % 13 == 0);
    });
    std::cout << "Count of numbers divisible by 3: " << count3 << "\n";
    std::cout << "Count of numbers divisible by 13: " << count13 << "\n\n";

    return 0;
}
