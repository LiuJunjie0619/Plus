#include <iostream>

using namespace std;

int main()
{
    string *ps = new string;
    *ps = "china";
    cout << *ps << endl;

    int a;
    int& ra=a;
    int *pa=&ra;
    int& rar=ra;

    int x=10,y=20,z=30;
    int *p[]={&x,&y,&z};
    cout << **p << " " << *p[1] << " " << **(p+2) << endl;

    int& rx=x;
    int& ry=y;
    int& rz=z;
    //int& rpa={rx,ry,rz};//报错
    //int & rpb[] = {x,y,z};//报错
    //int &rpa[]={rx,ry,rz};

    int arr[]={1,2,3,4,5};
    int (&rarr)[5] = arr;
    cout<<rarr[1]<< " " << rarr[2] <<endl;

    //int (&rall)[3]={rx,ry,rz};

    return 0;
}
