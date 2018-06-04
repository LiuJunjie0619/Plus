#include "cd.h"

Cd::Cd()
{
    strcpy(m_performers,"none");
    strcpy(m_label,"none");
    m_selections = -1;
    m_playtime = -1;
}

Cd::Cd(char * s1, char * s2, int n, double x)
{
    strcpy(m_performers,s1);
    strcpy(m_label,s2);
    m_selections = n;
    m_playtime = x;
}

Cd::Cd(const Cd &d)
{
    strcpy(m_performers,d.m_performers);
    strcpy(m_label,d.m_label);
    m_selections = d.m_selections;
    m_playtime = d.m_playtime;
}

Cd::~Cd()
{

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
    strcpy(m_performers,d.m_performers);
    strcpy(m_label,d.m_label);
    m_selections = d.m_selections;
    m_playtime=d.m_playtime;
    return *this;
}
