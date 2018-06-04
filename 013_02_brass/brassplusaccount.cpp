#include "brassplusaccount.h"
#include <iostream>

using std::cout;
using std::endl;
using std::string;
typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
format setFormat();
void restore(format f,precis p);

BrassPlusAccount::BrassPlusAccount(const string & s,long an ,double bal,double ml,double r):BrassAccount(s,an,bal)
{
    m_maxLoan = ml;
    m_owesBank = 0.0;
    m_rate = r;
}

BrassPlusAccount::BrassPlusAccount(const BrassAccount &ba, double ml, double r):BrassAccount(ba)
{
    m_maxLoan = ml;
    m_owesBank = 0.0;
    m_rate = r;
}

//redefine how ViewAcct() works
void BrassPlusAccount::ViewAcct() const
{
    //set up ###.## format
    format initialState = setFormat();
    precis prec = std::cout.precision(2);

    BrassAccount::ViewAcct();
    cout << "Maximum loan: $" << m_maxLoan << endl;
    cout << "Owed to bank: $" << m_owesBank << endl;
    cout.precision(3);  //###.### format
    cout << "Loan Rate:" << 100 * m_rate << "%\n" << endl;
    restore(initialState,prec);
}

//redefine how withdraw() works
void BrassPlusAccount::Withdraw(double amt)
{
    //set up ###.## format
    format initialState = setFormat();
    precis prec = std::cout.precision(2);

    double bal = Balance();
    if(amt <= bal)
        BrassAccount::Withdraw(amt);
    else if(amt <= bal + m_maxLoan - m_owesBank)
    {
        double advance = amt - bal;
        m_owesBank +=advance*(1.0 + m_rate);
        cout << "Bank advance: $" << advance << endl;
        cout << "Finance charge: $" << advance * m_rate << endl;
        Deposit(advance);
        BrassAccount::Withdraw(amt);
    }
    else
        cout << "Credit limit exceeded.Transaction cancelled.\n" << endl;
    restore(initialState,prec);
}

//format setFormat()
//{
////    //set up ###.## format
////    return std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
//}

//void restore(format f, precis p)
//{
////    std::cout.setf(f,std::ios_base::floatfield);
////    std::cout.precision(p);
//}
