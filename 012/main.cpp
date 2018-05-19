#include <iostream>

using namespace std;


class A
{
public:
    char* str;
    A(const char * a)
    {
        str = new char[strlen(a) + 1];
        strcpy(str,a);
        cout << "A()" << str << endl;
    }
    A(const A & another)
    {
        cout << "copy A" << endl;
    }
    A& operator=(const char * s);
    ~A()
    {
        cout << "~A()" << this->str << endl;
    }

};


A& A::operator=(const char * s)
{
    cout << "operator=" << s <<endl;
//    if(this == & another)
//        return *this;
    delete[] str;
    int len = strlen(s);
    str = new char[len + 1];
    strcpy(str,s);
    return *this;
}

int main()
{
    A a("abc");
    a = "test";
//    string str = 0;
//    string s1 = NULL;
//    string s2 = nullptr;
//    A a;

//    A b = a;

//    A a;
//    A b = a;
//    A c = a;
//    b = c;
//    a = b;
//    b = a;
    cout << "end main()" << endl;
    return 0;
}
