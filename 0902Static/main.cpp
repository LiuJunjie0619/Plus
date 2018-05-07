#include <iostream>

using namespace std;

int global = 1000;              //static duration, external linkage
static int one_file = 50;       //static duration, internal linkage
void funcct1(int n)
{
    static int count = 0;       //static duration, no linkage
}
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}
