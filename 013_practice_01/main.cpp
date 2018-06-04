#include <iostream>
#include "classic.h"

using namespace std;

void Bravo(const Cd & disk);

int main()
{
    Cd c1("Cd1","Cd2",14,35.5);
    Classic c2("Csn","Cl1","Cl2",2,57.17);
    Cd * pcd = &c1;

    std::cout << "Using object directly:\n";
    c1.Report();
    c2.Report();

    std::cout << "Using type cd * pointer to object:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();

    std::cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);

    std::cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();

    return 0;
}

void Bravo(const Cd & disk)
{
    disk.Report();
}
