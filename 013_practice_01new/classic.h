#ifndef CLASSIC_H
#define CLASSIC_H
#include "cd.h"

class Classic : public Cd
{
private:
    char * m_opus;
public:
    Classic(char * sn,char * s1, char * s2, int n,double x);
    Classic(char * sn,const Cd & d);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic & operator=(const Classic & d);
};

#endif // CLASSIC_H
