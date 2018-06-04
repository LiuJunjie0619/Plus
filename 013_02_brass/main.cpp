#include <iostream>
#include "brassaccount.h"
#include "brassplusaccount.h"

int main()
{
    using std::cout;
    using std::endl;

    BrassAccount ba("BA",381299,4000.00);
    BrassPlusAccount bpa("BPA",38288,3000.00);

//    ba.m_test=1;
//    bpa.m_test=2;

    ba.ViewAcct();
    cout << endl;
    bpa.ViewAcct();
    cout << endl;
    cout << "Deposit $1000 into the ba Account:\n";
    bpa.Deposit(1000.00);
    cout << "New balance: $" << bpa.Balance() << endl;
    cout << "Withdrawing $4200 from the ba Account;\n";
    ba.Withdraw(4200.00);
    cout << "ba account balance: $" << ba.Balance() << endl;
    cout << "Withdrawing $4200 from the bpa Account:\n";
    bpa.Withdraw(4200.00);
    bpa.ViewAcct();

    return 0;
}
