#include <iostream>
#include <cmath>

using namespace std;

inline double square(double x){return x*x;}

//template<typename T>
void swapr( int & x, int & y );

class A
{
public:
    A(int a):x(a)
    {
        cout << "A()" << endl;
    }
    A(const A & another)
    {
        this->x=another.x;
        cout << "A(const A & another)" << endl;
    }
public:
    int x;
};

const A & clone(A & ri);
double refcube(const double &ra);

int main()
{
#if 0
    double x=square(10);
    cout << x << endl;

    int rats;
    int & rodents = rats;
    int * prats = &rats;

    rats = 10;
    cout << rodents << " " << *prats << endl;

    int & bunnies = rats;
    cout << bunnies << endl;
#endif

#if 0
    int rats = 101;
    int * pt = &rats;
    int & rodents = *pt;
    int bunnies = 50;
    *pt = 102;
    cout << *pt << endl;
    pt = &bunnies;
    cout << *pt << rodents <<endl;
#endif

#if 0
    double dd = std::sqrt(36.00);
    double & rdd = dd;

    double && rref = sqrt(36.00);       //not allowed for double &
    double j = 15.0;
    double && jref = 2.0 * j + 18.5;    //not allowd for double &

    std::cout << rref << '\n';          //display 6.0
    std::cout << jref << '\n';          //display 48.5
    std::cout << rdd << '\n';
#endif

#if 0
    int a = 10;
    int b = 20;
    cout << a << '|' << b << endl;
    swapr(a,b);
    cout << a << '|' << b << endl;

    double && rrCube = refcube(a);
    cout << rrCube << endl;
#endif

#if 0
    A a(10);
    cout << a.x << endl;
    A b = clone(a);
    cout << b.x << endl;
    a.x=20;
    cout << a.x << b.x << endl;
#endif

#if 0
    A a(10);
    A pa = clone(a);

    pa.x=20;
    cout << pa.x << endl;
    cout << a.x << endl;
#endif

    const A a(10);
    const A b = a;
    b.x = 20;
    cout << b.x <<endl;

    return 0;
}

const A & clone(A & ri)
{
    A * pi = &ri;
    *pi = ri;
    return *pi;
}
//template<typename T>
void swapr( int & x, int & y )
{
    int t = x;
    x = y;
    y = t;
}

double refcube(const double &ra)
{

    return ra * ra * ra;
}
