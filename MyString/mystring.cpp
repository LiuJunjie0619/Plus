#include "mystring.h"
using std::cin;
using std::cout;
using std::endl;

#define level 0

int MyString::num_strings = 0;
MyString::MyString()
{
    str = new char[1];
    memset(str,0,sizeof(char) * 1);
    str[0] = '\0';
    len = 4;
    MyString::num_strings++;
#if level
    std::cout << "MyString::MyString()" << endl;
#endif
}

MyString::MyString(const char * s)
{
    len = std::strlen(s);
    delete[] str;
    str = new char[len + 1];
    memset(str,0,sizeof(char) * (len + 1));
    std::strcpy(str,s);
    num_strings++;
#if level
    std::cout << "MyString::MyString(const char * s)" << endl;
#endif
}

MyString::MyString(const MyString & another)
{
    len = another.len;
        delete[] str;
    str = new char[len + 1];
    if(str == nullptr)
        std::cout << "new is failed!";
    memset(str,0,sizeof(char) * (len + 1));
    std::strcpy(str,another.str);
    num_strings++;
#if level
    std::cout << "MyString::MyString(const MyString & another)" << endl;
#endif
}

MyString::~MyString()
{
    delete[] str;
    num_strings--;
#if level
    std::cout << "MyString::~MyString()" << endl;
#endif
}

MyString & MyString::operator=(const MyString & another)
{
    if(this == &another)
        return *this;
    len = another.len;
    delete[] str;
    str = new char[len + 1];
    memset(str,0,sizeof(char) * (len + 1));
    std::strcpy(str,another.str);
#if level
    std::cout << "MyString & MyString::operator=(const MyString & another)" << endl;
#endif
    return *this;
}

MyString & MyString::operator=(const char * s)
{
    len = std::strlen(s);
    delete[] str;
    str = new char[len + 1];
    memset(str,0,sizeof(char) * (len + 1));
    std::strcpy(str,s);
#if level
    std::cout << "MyString & MyString::operator=(const char * s)" << endl;
#endif
    return *this;
}

char & MyString::operator[](int i)
{
#if level
    std::cout << "char & MyString::operator[](int i)" << endl;
#endif
    if(i<0 || i>=len)
    {
        return str[len];        //return '\0
    }
    return str[i];
}

const char & MyString::operator[](int i) const
{
#if level
    std::cout << "const char & MyString::operator[](int i) const" << endl;
#endif
    if(i<0 || i>len)
        return str[len];
    return str[i];
}

//overloaded operator friends
bool operator<(const MyString &st1,const MyString &st2)
{
#if level
    std::cout << "bool operator<(const MyString &st1,const MyString &st2)" << endl;
#endif
    //    return st1.str < st2.str;
    return (std::strcmp(st1.str,st2.str))<0;
}

bool operator>(const MyString &st1,const MyString st2)
{
#if level
    std::cout << "bool operator>(const MyString &st1,const MyString st2)" << endl;
#endif
    return st2 < st1;
}

bool operator==(const MyString & st1,const MyString &st2)
{
#if level
    std::cout << "bool operator==(const MyString & st1,const MyString &st2)" << endl;
#endif
    return (std::strcmp(st1.str,st2.str))==0;
}

ostream & operator<<(ostream & os,MyString & st)
{
#if level
    std::cout << "ostream & operator<<(ostream & os,MyString & st)" << endl;
#endif
    os << st.str;
    return os;
}

istream & operator>>(istream & is,MyString & st)
{
#if level
    std::cout << "istream & operator>>(istream & is,MyString & st)" << endl;
#endif
    char temp[MyString::CINLIM];
    is.get(temp,MyString::CINLIM);
    if(is)
        st = temp;
    while(is && is.get()!='\n')
        continue;
    return is;
}

int MyString::HowMany()
{
#if level
    std::cout << "int MyString::HowMany()" << endl;
#endif
    return num_strings;
}










