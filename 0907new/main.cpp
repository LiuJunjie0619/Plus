#include <iostream>

using namespace std;

 struct where {double x;double y; double z;};
 void * operator new(std::size_t);           //used by new
 void * operator new[](std::size_t);         //used by new[ ]

 void operator delete(void *);
 void operator delete[](void *);
int main()
{
//    int * pi = new int(6);                          //*pi set to 6
//    double * pd = new double(99.99);                //*pd set to 99.99


//    where * one = new  where{2.5, 5.3, 7.2};              //C++11
//    int * ar = new int [4] {2,4,6,7};                 //C++11

//    int * pin = new int{6};                         //C++11
//    double * pd1 = new double{99.99};                //C++11

    int * pi = new int;
//    int * pit = new (sizeof(int));

//    int * pi = (int *)operator new(sizeof(int));

//    int * pd = new int[40];
//    int * pd = new int(40 * sizeof(int))
//    int * pa = (int *)operator new(40 * sizeof(int));

    delete pi;
    delete(pi);
    operator delete(pi);

    return 0;
}
