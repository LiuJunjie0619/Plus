#ifndef MANYFRND_H
#define MANYFRND_H

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class ManyFriend
{
private:
    T item;
public:
    ManyFriend(const T & i):item(i){}
    template <typename C,typename D>
    friend void show2(C & ,D &);
};

template <typename C,typename D>
void show2(C & c,D & d)
{
    cout << c.item << ", " << d.item << endl;
};

#endif // MANYFRND_H
