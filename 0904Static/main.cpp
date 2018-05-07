#include <iostream>

using namespace std;

void staticNoLinkage();

int main()
{
    staticNoLinkage();  //Total:1
    staticNoLinkage();  //Total:2
    staticNoLinkage();  //Total:3
    staticNoLinkage();  //Total:4
    staticNoLinkage();  //Total:5
    return 0;
}

void staticNoLinkage()
{
    static int total = 0;
    total++;
    cout << "Total:" << total << endl;
}
