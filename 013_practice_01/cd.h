#ifndef CD_H
#define CD_H
#include <iostream>

class Cd
{
private:
    char m_performers[50];        //演员
    char m_label[20];             //标题，标签
    int m_selections;             //number of selections
    double m_playtime;            //playing time in minutes
public:
    Cd(char * s1, char * s2, int n, double x);
    Cd(const Cd & d);a
    Cd();
    ~Cd();
    virtual void Report() const;        //reports all CD data
    Cd & operator=(const Cd & d);
};

#endif // CD_H
