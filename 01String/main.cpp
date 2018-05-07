#include <iostream>
#include <cstdarg>
#include <string>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
#if 0
    cout << "I'd give my rigth arm to be" " a great violinist.\n";
    cout << "I'd give my right arm to be a great violinist.\n";
    cout << "I'd give my rigth ar"
            "m to be a great violinist.\n";

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    char title[5];

    cin.get(title,4).get();
    cout << "T1" << title << endl;
    cin.get(title,5);
    cout << "T2" << title << endl;
    cin.get(title,5);
    cout << "T3" << title << endl;

    cin.getline(title,5);
    cout << title << endl;

    cin >> name;//Liu JJ
    cout << "name:" << name << endl;        //name:L
    cin >> dessert;                         //ignore this.use JJ
    cout << "dessert:" << dessert << endl;  //dessert:JJ


    //int year;
    //cin >> year;
    //(cin >> year).get();

    char year[5];
    cin.getline(year,5);

    cout << "year:" << year << endl;
    char address[20];
    cin.getline(address,20);
    cout << "address:" << address << endl;


    char charr1[]={"I love you China!"};
    char charr2[50]={0};
    char charr3[50]={0};
    cout << "charr1:" << charr1 << endl;
    strcpy(charr2,charr1);
    strcat(charr2," too");
    cout << "charr2:" << charr2 << endl;
    cout << "charr2 length:" << strlen(charr2) << endl;

    string str1;
    str1 += "Hello ";
    str1 += charr2;
    cout << "str1:" << str1 << endl;
    cout << "str1 length:" << str1.size() << endl;

    strncpy(charr3,charr1,6);
    cout << "charr3:" << charr3 << endl;
    strncat(charr2,charr1,6);
    cout << "charr2:" << charr2 << endl;


    char charr[20];
    string str;

    cout << "Length of string is charr before input:"
         << strlen(charr) << endl;
    cout << "Lehgth of string is str before input;"
         << str.size() << endl;
    cin.getline(charr,20);
    cout << "charr:" << charr << endl;
    getline(cin,str);
    cout << "str:" << str << endl;


    //wchar_t wStr[]=L"这是一段中文";
    char charr[]={"A"};
    cout << sizeof charr << charr<< endl;

    wchar_t title[] = L"A";
    cout << sizeof title << endl;
    wcout << title << endl;

    char16_t title16[] = u"A";
    cout << sizeof title16 << endl;
    cout << title16[0] << endl;

    char32_t title32[] = U"A";
    cout << sizeof title32 << endl;

    cout << R"(Jim is "OK" now! \n ")" << endl;
    cout << R"&&(Jim is ("OK") now!")&&" << endl;
#endif

    struct A
    {
        int x;
        int y;
    };

    A x;
    x.x=10;
    x.y=20;
    cout << x.x << endl;

    A a={11,22};
    cout << a.x << endl;

    A b{33,44};
    A c{};
    cout << b.x << endl;
    cout << c.x << endl;


    return 0;
}
