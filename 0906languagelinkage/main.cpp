#include <iostream>

using namespace std;

extern "C" void spiff(int);         //use C protocal for name look-up
extern void spoff(int);             //use C++ protocal for name look-up
extern "C++" void spaff(int);       //use C++ protocal for name look-up

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
