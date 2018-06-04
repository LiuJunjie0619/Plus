#include <iostream>
#include "vintageport.h"

using namespace std;

int main()
{
    VintagePort vp("br",10,"nn",2018);
    std::cout << vp << std::endl;

    vp+=1;
    vp.Show();
    return 0;
}
