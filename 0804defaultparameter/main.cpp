#include <iostream>

//using namespace std;
const int ArSize = 80;
char * left(const char * str, int n = 1);

int main()
{
    using namespace std;

    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample,ArSize);
    char * ps=left(sample,400);
    cout << ps << endl;
    delete [] ps;
    ps=left(sample);
    cout << ps << endl;
    delete [] ps;

    return 0;
}

char * left(const char *str, int n)
{
    if(n<0)
        n=0;
    int len = strlen(str);
    n = (n < len)?n:len;
    char * p = new char[n+1];
    int i;
    for(i=0;i<n;i++)
           p[i]=str[i];
    while(i<=n)
            p[i++]='\0';

//    if(n < 0)
//        n=0;
//    int m = 0;
//    while(m <= n && str[m] != '\0')
//        m++;
//    char *p = new char[m+1];
//    int i;
//    for(i=0;i<m;i++)
//        p[i]=str[i];
//    while(i<=m)
//        p[i++] = '\0';


//    if(n < 0)
//        n = 0;
//    char * p =new char[n+1];
//    int i;
//    for(i=0;i<n && str[i];i++)
//        p[i]=str[i];                //copy characters
//    while(i <= n)
//        p[i++] = '\0';              //set rest of string to '\0'
    return p;
}
