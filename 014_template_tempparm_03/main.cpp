#include <iostream>
#include "tempparm.h"

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    Crab<Stack> nebula;

    int ni;
    double nb;
    std::cout << "Enter int double pairs,such as 4 3.5 (0 0 to end):\n";
    while(std::cin >> ni >> nb && ni > 0 && nb > 0)
    {
        if(!nebula.push(ni,nb))
            break;
    }

    while(nebula.pop(ni,nb))
        std::cout << ni << ", " << nb << endl;
    std::cout << "Done.\n";

    return 0;
}
