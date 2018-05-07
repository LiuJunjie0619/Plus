#include <iostream>
#include <array>
typedef const double * (*p_fun)(const double * , int);

void cheers(int);
double cube(double a);

void say_hi();
void say_hi1(void);
int say_hi2(int a1,...);

int sum_arr(int arr[],int n);
int sum_arr(int* arr,int n);

int sum(int arr[],int n);

const double * f1(const double arr[] , int n);
const double * f2(const double [] , int);
const double * f3(const double *, int);
int main()
{
    using namespace std;

#if 0
    int a =  say_hi2(2,5,12);
    cout << a << endl;

    cheers(5);
    cout << "Give me a number:";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "A" << side << "-foot cube has a volume of ";
    cout << volume << " cubic feet.\n" ;
    cheers(cube(2));
#endif

#if 0
    int x;
    int y;

    cin >> x;
    cout << x << endl;

    cin >> y;
    cout << y << endl;
#endif

#if 0
    const int age = 39;
    const int * pt = &age;
//    *pt=20;
//    age = 20;
    cout << *pt << endl;
#endif

#if 0
    const int **pp2;
    int *p1;
    const int n = 13;
    //pp2 = &p1;
    *pp2 = &n;
    *p1 = 10;
#endif

#if 0
    const int *p2;
    int *p1;
    p2 = p1;
    *p1 = 10;
    //*p2 = 20;
#endif

#if 0
    int  *p1;
    const int n = 13;
    int m = 16;
    p1 = &m;
//    n = 32;
    cout <<  "**pp2:" << *p1 << endl;
#endif

#if 0
//    const int months[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int months[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int j = sum(months,12);
#endif

#if 0
    int age = 39;
    int num = 66;
    int  * const pt = &age;
//    pt = &num;
    *pt = 10;
//    age = 20;

    cout << *pt << endl;
#endif

#if 0
    int arr[2][3] ={{1,2,3},{4,5,6}};
    int (*parr)[3]=arr;
    cout << parr[0][2] << endl;
#endif

#if 0
    char ghost[15] = "galloping";
    int x = sizeof(ghost);
    cout << x << endl;
#endif
//    const int Seasons = 4;
//    std::array<double,Seasons> expenses;

#if 0
    //函数指针
    const double *(*p1)(const double *,int) = f1;
    //C++11 自动类型判读
    auto p2 = f2;
    //指针数组
    const double * (*pa[3])(const double * ,int) = {f1,f2,f3};
    //数组指针
    const double * (*(*ppa)[3])(const double * ,int) = &pa;
    //auto自动推断
    auto ppps = {f1,f2,f3};
#endif

    p_fun p1 = f1;
    p_fun pa[3] = {f1,f2,f3};
    p_fun (*pd)[3] = &pa;

    return 0;
}
const double * f1(const double arr[] , int n)
{
    return 0;
}

const double * f2(const double [] , int)
{
    return 0;
}
const double * f3(const double *, int)
{
    return 0;
}

int sum(int arr[],int n)
{
    return 1;
}

void cheers(int n)
{
    for(int i=0;i<n;i++)
    {
        std::cout << "Cheers!";
    }
    std::cout << std::endl;
}

double cube(double x)
{
    return x * x * x;
}

int say_hi2(int a1,...)
{
    va_list arg_ptr;

    int sum=0;
    int tempValue;

    va_start(arg_ptr,a1);

    for(int i=0;i<a1;i++)
    {
        tempValue=va_arg(arg_ptr,int);
        std::cout << tempValue << std::endl;
        sum+=tempValue;
    }

    va_end(arg_ptr);
    return sum;
}
