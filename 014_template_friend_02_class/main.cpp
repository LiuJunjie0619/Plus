#include <iostream>
#include <tmp2tmp.h>

int main()
{
    counts<int>();
    HasFriendT<int> hfi1(10);
    HasFriendT<int> hfi2(20);
    HasFriendT<double> hfdb(10.5);
    report(hfi1);
    report(hfi2);
    report(hfdb);
    std::cout << "counts<int>() output: \n";
    counts<int>();
    cout << "counts<double<() output:\n";
    counts<double>();

    return 0;
}
