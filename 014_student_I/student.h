#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
#include <valarray>

class Student : std::string,std::valarray<double>
{
private:
    typedef std::valarray<double> ArrayDb;
    std::ostream & arr_out(std::ostream & os) const;
public:
    using std::valarray<double>::min;

    Student():std::string("Null Student"),ArrayDb(){}
    explicit Student(const std::string & s):std::string(s),ArrayDb(){}
    explicit Student(int n) : std::string("Nully"),ArrayDb(n){}
    Student(const std::string & s,int n):std::string(s),ArrayDb(n){}
    Student(const std::string & s,const ArrayDb & a):std::string(s),ArrayDb(a){}
    Student(const char * str,const double *pd,int n) : std::string(str),ArrayDb(pd,n){}
    ~Student(){}

    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;

    //friend
    //input
    friend std::istream & operator>>(std::istream & is, Student & stu);
    friend std::istream & getline(std::istream & is,Student & stu);
    //output
    friend std::ostream & operator<<(std::ostream & os,const Student & stu);
};

#endif // STUDENT_H
