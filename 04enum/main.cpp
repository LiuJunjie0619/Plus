#include <iostream>

using namespace std;

enum spectrum{red, orange, yellow, green, blue, violet, indigo, ultraviolet};

int main()
{
#if 0
    ::spectrum band;
    band = ::spectrum::yellow;
    //cout << sizeof band << endl;

    long la = 223323L;
    long * fellow = &la;
    cout << *fellow << endl;

    int *pc;
    //pc = 0x8000000;
    pc = (int*)0x8000000;

    int *pn = new int;
    *pn = 8;
    cout << *pn << endl;

    int * ps = new int;
    int * pq = ps;
    delete pq;
    delete ps;

    int * psome = new int [10];
    delete []psome;
#endif

    double * p3 = new double[3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << p3[0] << " | " << p3[2] <<endl;
    p3 = p3 + 1;
    cout << p3[1] << endl;
    p3 = p3 - 1;
    delete []p3;

    return 0;
}
