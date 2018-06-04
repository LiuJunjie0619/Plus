#include "cd.h"
#define isDebug 0

Cd::Cd()
{
    m_performers = new char[1];
    m_performers[0] = '\0';

    m_label = new char[1];
    m_label[0] = '\n';

    m_selections = -1;
    m_playtime = -1;
}

Cd::Cd(char * s1, char * s2, int n, double x)
{
    m_performers = new char[strlen(s1) + 1];
    strcpy(m_performers,s1);

    m_label = new char[strlen(s2) +1];
    strcpy(m_label,s2);

    m_selections = n;
    m_playtime = x;
}

Cd::Cd(const Cd &d)
{
    m_performers = new char[strlen(d.m_performers) + 1];
    strcpy(m_performers,d.m_performers);

    m_label = new char[strlen(m_label) + 1];
    strcpy(m_label,d.m_label);

    m_selections = d.m_selections;
    m_playtime = d.m_playtime;
}

Cd::~Cd()
{
#if isDebug
    std::cout << "Cd::~Cd()" << std::endl;
#endif
    delete[] m_performers;
    delete[] m_label;
}

void Cd::Report() const
{
    std::cout << "作者：" << m_performers << std::endl;
    std::cout << "标题：" << m_label << std::endl;
    std::cout << "编号：" << m_selections << std::endl;
    std::cout << "时间：" << m_playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(this == &d)
        return *this;
    delete[] m_performers;
    m_performers = new char[strlen(d.m_performers) + 1];
    strcpy(m_performers,d.m_performers);

    delete[] m_label;
    m_label = new char[strlen(d.m_label) + 1];
    strcpy(m_label,d.m_label);

    m_selections = d.m_selections;
    m_playtime = d.m_playtime;
    return *this;
}
