#ifndef BRASSACCOUNT_H
#define BRASSACCOUNT_H
#include <string>

class BrassAccount
{
public:
    BrassAccount(const std::string & s = "Nullbody"
            ,long an = -1
            ,double bal = 0.0);
public:
    void Deposit(double amt);
    virtual void Withdraw(double amt);
    double Balance() const;
    virtual void ViewAcct() const;
    virtual ~BrassAccount();
public:
    int m_test;
private:
    std::string m_fullName;
    long m_accNum;
    double m_blance;
};

#endif // BRASSACCOUNT_H
