#include <iostream>

using namespace std;

class A{};
void dribble(char * bits);
void dribble(const char * cbits);
void dabble(char * bits);
void drivel(const char * bits);

void func(string a);
void func(const string ca);

int main()
{
    const char p1[20] = "How's the weather?";
    char p2[20] = "How's business?";

    dribble(p1);
    dribble(p2);

//    dabble(p1);
    dabble(p2);

    drivel(p1);
    drivel(p2);

    return 0;
}
void func(A &a){}
void func(const A &ca){}
void dribble(char * bits)
{
    cout << "void dribble(char * bits)" << endl;
}
void dribble(const char * cbits)
{
    cout << "void dribble(const char * cbits)" << endl;
}
void dabble(char * bits)
{
    cout << "void dabble(char * bits)" << endl;
}
void drivel(const char * bits)
{
    cout << "void drivel(const char * bits)" << endl;
}
