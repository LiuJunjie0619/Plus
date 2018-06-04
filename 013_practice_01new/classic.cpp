#include "classic.h"

#define isDebug 0

Classic::Classic():Cd()
{
    m_opus = new char[1];
    m_opus[0] = '\0';
    strcpy(m_opus,"none");
}

Classic::Classic(char *opus, char *s1, char *s2, int n, double x):Cd(s1,s2,n,x)
{
    m_opus = new char[strlen(opus) + 1];
    strcpy(m_opus,opus);
}

Classic::Classic(char * opus,const Cd & d):Cd(d)
{
    m_opus = new char[strlen(opus) + 1];
    strcpy(m_opus,opus);
}

Classic::~Classic()
{
#if isDebug
    std::cout << "Classic::~Classic() Start" << std::endl;
#endif
    delete[] m_opus;
#if isDebug
    std::cout << "Classic::~Classic() End" << std::endl;
#endif
}

void Classic::Report() const
{
    std::cout << "作品：" << m_opus << std::endl;
    Cd::Report();
}

Classic & Classic::operator=(const Classic & d)
{
    if(this == &d)
        return *this;

    Cd::operator=(d);

    delete[] m_opus;
    m_opus = new char[strlen(d.m_opus) + 1];
    strcpy(m_opus,d.m_opus);

    return *this;
}

