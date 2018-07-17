#include <iostream>

int main()
{
    std::cout.fill('*');
    const char * staff[2] = {"001 000001","002 000002"};
    //long bonus[2] = {900, 13500000000};
    long bonus[2] = {900, 13500};

    for(int i = 0;i < 2; i++)
    {
        std::cout << staff[i] << ": $";
        std::cout.width(7);
        std::cout << bonus[i] << '\n';
    }

    return 0;
}
