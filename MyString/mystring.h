#ifndef MYSTRING_H
#define MYSTRING_H
//fixed and augmented string class definition
#include <iostream>
using std::ostream;
using std::istream;

class MyString
{
private:
    char * str;                         //pointer to string
    int len;                            //length of string
    static int num_strings;             //number of objects
    static const int CINLIM = 10;       //cin input limit
public:
    //constructors and other methoeds
    MyString();                         //default constructor
    MyString(const char * s);           //constructor
    MyString(const MyString & another); //copy constructor
    ~MyString();                        //destructor
    int length() const {return len;};

    //overloaded operator methods
    MyString & operator=(const MyString & another);
    MyString & operator=(const char * s);
    char & operator[](int i);
    const char & operator[](int i) const;

    //overloaded operator friends
    friend bool operator<(const MyString & st1,const MyString & st2);
    friend bool operator>(const MyString & st1,const MyString & st2);
    friend bool operator==(const MyString & st1,const MyString & st2);
    friend ostream & operator<<(ostream & os,MyString & st);
    friend istream & operator>>(istream & is,MyString & st);

    //static function
    static int HowMany();
};

#endif // MYSTRING_H
