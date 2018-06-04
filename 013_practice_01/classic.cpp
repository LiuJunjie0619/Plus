#include "classic.h"

Classic::Classic():Cd()
{
    strcpy(m_opus,"none");
}

Classic::Classic(char *opus, char *s1, char *s2, int n, double x):Cd(s1,s2,n,x)
{
    strcpy(m_opus,opus);
}

Classic::Classic(char * opus,const Cd & d):Cd(d)
{
    strcpy(m_opus,opus);
}

Classic::~Classic()
{

}

void Classic::Report() const
{
    std::cout << "作品：" << m_opus << std::endl;
    Cd::Report();
}

Classic & Classic::operator=(const Classic & d)
{
    Cd::operator=(d);
    strcpy(m_opus,d.m_opus);
    return *this;
}

