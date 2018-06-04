#ifndef BRASSPLUSACCOUNT_H
#define BRASSPLUSACCOUNT_H
#include "brassaccount.h"
#include <string>

class BrassPlusAccount : public BrassAccount
{
public:
    BrassPlusAccount(const std::string & s = "Nullbody"
            ,long an = -1
            ,double bal = 0.0
            ,double ml = 500
            ,double r = 0.11125);
    BrassPlusAccount(const BrassAccount & ba
                     ,double ml = 500,double r = 0.11125);
public:
    virtual void ViewAcct() const;
    virtual void Withdraw(double amt);
    void ResetMax(double m){m_maxLoan = m;};
    void ResetRate(double r);
    void ResetOwed(){m_owesBank = 0;};
private:
    double m_maxLoan;
    double m_rate;
    double m_owesBank;
};

#endif // BRASSPLUSACCOUNT_H
