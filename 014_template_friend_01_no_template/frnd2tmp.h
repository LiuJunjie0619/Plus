#ifndef FRND2TMP_H
#define FRND2TMP_H

#include <iostream>
using std::cout;
using std::endl;

template <typename T>
class HasFriend
{
private:
    T item;
    static int ct;
public:
    HasFriend(const T & i):item(i){ct ++;}
    ~HasFriend(){ct--;}
    friend void counts();
    friend void reports(HasFriend<T> &);     //template parameter
};

void counts()
{
    std::cout << "int count: " << HasFriend<int>::ct << "; ";
    std::cout << "double count: " << HasFriend<double>::ct << std::endl;
}

template <typename T>
int HasFriend<T>::ct = 0;

void reports(HasFriend<int> & hf)
{
    cout << "HasFriend<int>: " << hf.item << endl;
}

void reports(HasFriend<double> & hf)
{
    std::cout << "HasFriend<double>: " << hf.item << std::endl;
}
#endif // FRND2TMP_H
