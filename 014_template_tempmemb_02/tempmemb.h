#ifndef TEMPMEMB_H
#define TEMPMEMB_H

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class beta
{
private:
    template <typename V>
    class hold;
    hold<T> q;
    hold<int> n;
public:
    beta(T t,int i) : q(t),n(i){}
    template<typename U>
    U blab(U u,T t);
    void Show() const {q.show();n.show();}
};

template <typename T>
    template <typename V>
        class beta<T> :: hold
        {
        private:
            V val;
        public:
            hold(V v = 0) : val(v){}
            void show() const {std::cout << val << std::endl;}
            V Value() const {return val;}
        };

template <typename T>
    template<typename U>
        U beta<T>::blab(U u,T t)
        {
            return (n.Value() + q.Value()) * u / t;
        }
#endif // TEMPMEMB_H
