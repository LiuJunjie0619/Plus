#include <iostream>

extern double warming;
//function prototypes
void update(double dt);
void local();

using std::cout;
using std::endl;
void update(double dt)
{
    extern double warming;
    warming += dt;
    cout << "Updating global warming to " << warming;
    cout << " degrees." << endl;
}

void local()
{
    double warming = 0.8;
    cout << "Local warming = " << warming << " degrees.";
    cout << "But global warming = " << ::warming;
    cout << " degrees." << endl;
}
