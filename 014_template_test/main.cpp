#include <iostream>

using namespace std;

template <typename T>
class A
{
private:
    T item;
public:
    A(T i):item(i){}
    void show(){cout << item;}
};


template <template <typename T> class Obj , class TT>
class B
{
private:
    TT ba;
    Obj<TT> item;
public:
   B(Obj<TT> i):item(i),ba(1){}
    void show(){cout << ba << ",";item.show();std::cout << std::endl;}
};
int main()
{
    A<int> a(10);
    B<A,int> b(a);
    b.show();
    return 0;
}
