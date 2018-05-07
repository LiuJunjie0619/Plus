#include <iostream>

using namespace std;

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <typename T>
void Swap(T & x,T & y);

template <class T>
void A(T & x,T & y);

template <typename T>
void Swap(T * a, T * b, int n);

//template  void Swap<job>(job & ,job &);

template <> void Swap<job>(job & ,job & );

void Swap(job & a, job & b);

template <> void Swap<int>(int & ,int & );

template <class T>
T Add(T a,T b);

int main()
{
    int a = 10;
    double b = 20;

    cout << Add<double>(a,b) << endl;

    return 0;
}

template<class T>
T Add(T a,T b)
{
    return a + b;
}

template <class T>
void A(T & x,T & y)
{
    T temp = x;
    x = y;
    y = temp;
}
