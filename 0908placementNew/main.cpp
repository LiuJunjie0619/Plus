#include <iostream>
#include <new>

using namespace std;

struct chaff
{
    char dross[20];
    int slag;
};
char buffer[100];
char buffer1[50];
char buffer2[500];

int main()
{
//    chaff *p1, *p2;
//    int *p3, *p4;
//    //first,the regular forms of new
//    p1 = new chaff;                     //place structure in heap
//    p3 = new int[20];                   //place int array in heap
//    //now,the two forms of placement new
//    p2 = new (buffer1) chaff;           //place structure in buffer1
//    p4 = new (buffer2) int[20];         //place int array in buffer2

    int * p1 = new int;                 //invokes new(sizeof(int))
    int * p2 = new (buffer) int;        //invokes new(sizeof(int),buffer)
    int * p3 = new (buffer) int[40];    //invokes new(40 * sizeof(int),buffer)

    return 0;
}
