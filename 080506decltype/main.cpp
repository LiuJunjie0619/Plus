#include <iostream>

using namespace std;

long indeed(int);

auto func(int x, int y) -> double;
auto func(int x, int y) -> decltype(x + y);
int main()
{
//    int x = 10;
//    int y = 20;
//    decltype(x + y) z = x + y;      //z type of int
//    cout << z << endl;

//    double x = 5.5;
//    double y = 7.9;
//    double &rx = x;
//    const double * pd;
//    decltype(x) w;          //w is type double
//    decltype(rx) u = y;     //u is type double &
//    decltype(pd) v;         //v is type const double *

//    decltype(indeed(3)) m;      //m is type long

//    double xx = 6.6;
//    decltype((xx)) r2 = xx;     //r2 is double &
//    decltype(xx) w = xx;        //w is double (第一步的逻辑)

//    double xx = 6.6;
//    xx = 98.6;
//    (xx) = 98.6;

//    int j = 3;
//    int &k = j;
//    int &n = j;
//    decltype(j+6) i1;       //i1 type int
//    decltype(100L) i2;      //i2 type long
//    decltype(k+n) i3;       //i3 type int



    return 0;
}



//template<class T1,class T2>
//void ft(T1 x, T2 y)
//{
//    typedef decltype(x + y) xytype;
//    xytype xpy = x + y;
//    xytype arr[10];
//    xytype & rxy = arr[2];      //rxy a referenct
//}
