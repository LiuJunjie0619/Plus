#include "vintageport.h"

VintagePort::VintagePort() : Port()
{
    m_nickname = new char[1];
    m_nickname[0]='\0';

    m_year = 1900;
}

VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br,"vintage",b)
{
    m_nickname = new char[strlen(nn) + 1];
    strcpy(m_nickname,br);

    m_year = y;
}
VintagePort::VintagePort(const VintagePort & vp):Port(vp)
{
    m_nickname = new char[strlen(vp.m_nickname) + 1];
    strcpy(m_nickname,vp.m_nickname);

    m_year = vp.m_year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if(this == &vp)
        return *this;
    Port::operator =(vp);

    m_nickname = new char[strlen(vp.m_nickname) + 1];
    strcpy(m_nickname,vp.m_nickname);

    m_year = vp.m_year;

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "NickName:" << m_nickname << std::endl;
    std::cout << "Year:" << m_year << std::endl;
}

std::ostream & operator<<(std::ostream & os,const VintagePort & vp)
{
    os << (const Port &)vp;
    os << ",";
    os << vp.m_nickname;
    os << ",";
    os << vp.m_year;
    return os;
}



