#ifndef TMP2TMP_H
#define TMP2TMP_H

#include <iostream>
using std::cout;
using std::endl;

template <typename T> void counts();
template <typename T> void report(T &);
template <typename TT>
class HasFriendT
{
private:
    TT item;
    static int ct;
public:
    HasFriendT(const TT & i) : item(i){ct++;}
    ~HasFriendT(){ct--;}
public:
    friend void counts<TT>();
    //friend void report< HasFriendT<TT> >(HasFriendT<TT> &);
    friend void report<>(HasFriendT<TT> &);
};

template <typename TT>
int HasFriendT<TT>::ct = 0;

template <typename TT>
void counts()
{
    cout << "---------------------------------------------" << endl;
    std::cout << "template size: " << sizeof(HasFriendT<TT>) << "; ";
    std::cout << "template counts(): " << HasFriendT<TT>::ct << std::endl;
}

template <typename T>
void report(T & hf)
{
    cout << hf.item << endl;
}

#endif // TMP2TMP_H
