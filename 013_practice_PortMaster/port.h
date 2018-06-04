#ifndef PORT_H
#define PORT_H
#include <iostream>

class Port              //港口
{
private:
    char * m_brand;       //品牌
    char m_style[20];     //样式
    int m_bottles;        //瓶子
public:
    Port(const char * br = "none", const char * st = "none", int b = 0);
    Port(const Port & p);
    virtual ~Port(){delete[] m_brand;}
    Port & operator=(const Port & p);
    Port & operator+=(int b);
    Port & operator-=(int b);
    int BottleCount() const {return m_bottles;}
    virtual void Show() const;
    friend std::ostream & operator<< (std::ostream & os, const Port & p);
};

#endif // PORT_H
