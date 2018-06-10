#include <iostream>
#include "tempmemb.h"

using namespace std;

int main()
{
    beta<double> guy(3.5,3);
    std::cout << "T was set to deouble\n";
    guy.Show();

    std::cout << "V was set to T,which is double,then V was set to int\n";
    std::cout << guy.blab(10,2.3) << std::endl;

    std::cout << "U was set to int\n";
    std::cout << guy.blab(10.0,2.3) << std::endl;

    std::cout << "U was set to double \n";
    std::cout << "Done\n";

    return 0;
}
