#include <iostream>
#include "brassaccount.h"

using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

BrassAccount::BrassAccount(const std::string & s,long an, double bal)
{
    m_fullName = s;
    m_accNum = an;
    m_blance = bal;
}

void BrassAccount::Deposit(double amt)
{
    if(amt < 0)
        std::cout << "Negative deposit not allowed: " << "deposit is cancelled.\n" << std::endl;
    else
        m_blance += amt;
}

void BrassAccount::Withdraw(double amt)
{
    //set up ###.## format
    format initialState = setFormat();
    precis prec = std::cout.precision(2);

    if(amt < 0)
        std::cout << "Withdrawal amount must be positive; withdrawal canceled.\n" << std::endl;
    else if(amt <= m_blance)
        m_blance -= amt;
    else
        std::cout << "余额不足" << std::endl;
    restore(initialState,prec);
}

double BrassAccount::Balance() const
{
    return m_blance;
}

void BrassAccount::ViewAcct() const
{
    //set up format ###.## format
    format initialState = setFormat();
    precis prec = std::cout.precision(2);

    std::cout << "Client:" << m_fullName << std::endl;
    std::cout << "Accout:" << m_accNum << std::endl;
    std::cout << "Balance: $" << m_blance << std::endl;
    restore(initialState,prec);
}

BrassAccount::~BrassAccount()
{

}

format setFormat()
{
    //set up ###.## format
    return std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    std::cout.setf(f,std::ios_base::floatfield);
    std::cout.precision(p);
}
