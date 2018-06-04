#ifndef VINTAGEPORT_H
#define VINTAGEPORT_H
#include "port.h"

class VintagePort : public Port
{
private:
    char * m_nickname;
    int m_year;
public:
    VintagePort();
    VintagePort(const char * br, int b, const char * nn, int y);
    VintagePort(const VintagePort & vp);
    ~VintagePort(){delete[] m_nickname;}
    VintagePort & operator=(const VintagePort & vp);
    void Show() const;
    friend std::ostream & operator<<(std::ostream & os, const VintagePort & vp);
};

#endif // VINTAGEPORT_H
