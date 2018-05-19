#include <iostream>

using namespace std;

class A
{
public:
     A(double x):a(x) {}
public:
    void printA()
    {
        cout << a << endl;
    }
    operator double()
    {
        return a+a;
    }
    explicit operator int()
    {
        return int(a+a+a);
    }
public:
    double a;
};

class B
{
public:
    B(double x):a(x){}
public:
    void printB()
    {
        cout << a << endl;
    }
    operator A()
    {
        return A(a);
    }
private:
    double a;
};

class C
{
public:
    C(A a):x(a.a) {}
    void printC()
    {
        cout << x << endl;
    }
private:
    double x;
};

int main()
{
    A a = 88;
    a.printA();
    C c = a;
    c.printC();
//    B b = 66;
//    b.printB();
//    A a = b;
//    a.printA();


//    A a = 10;
//    a.printA();
//    double y = a;
//    cout << y << endl;
//    cout << a << endl;
//    int z = a;
//    cout << z << endl;
    return 0;
}
