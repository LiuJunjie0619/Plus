#include "port.h"

Port::Port(const char * br,const char * st,int b)
{
    m_brand = new char[strlen(br) + 1];
    strcpy(m_brand,br);

    strcpy(m_style,st);
    m_bottles = b;
}

Port::Port(const Port & p)
{
    m_brand = new char[strlen(p.m_brand) + 1];
    strcpy(m_brand,p.m_brand);

    strcpy(m_style,p.m_style);
    m_bottles = p.m_bottles;
}

Port & Port::operator=(const Port & p)
{
    if(this == &p)
        return *this;
    delete m_brand;
    m_brand = new char[strlen(p.m_brand) + 1];
    strcpy(m_brand,p.m_brand);

    strcpy(m_style,p.m_style);
    m_bottles = p.m_bottles;
    return *this;
}

Port & Port::operator+=(int b)
{
    if(b < 0)
    {
        std::cout << "error bottles count." << std::endl;
        return * this;
    }
    m_bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if(b < 0 || b < m_bottles)
    {
        std::cout << "error bottles count." << std::endl;
        return * this;
    }

    m_bottles -= b;
}

void Port::Show() const
{
    std::cout << "Brand:" << m_brand << std::endl;
    std::cout << "Kind:" << m_style << std::endl;
    std::cout << "Bottles:" << m_bottles << std::endl;
}

std::ostream & operator<<(std::ostream & os,const Port & p)
{
    os << p.m_brand << "," << p.m_style << "," << p.m_bottles << std::endl;
    return os;
}
