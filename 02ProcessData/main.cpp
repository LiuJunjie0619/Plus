#include <iostream>
#include <climits>
using namespace std;

int main()
{
#if 0
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_long_long = LLONG_MAX;

    cout << "int is " << sizeof(int) << " bytes." << endl;
    cout << "short is " << sizeof n_short << " bytes." << endl;
    cout << "long is " << sizeof n_long << " bytes." << endl;
    cout << "long long is " << sizeof n_long_long << " bytes." <<endl;

    cout << "----------------------------------" << endl;
    cout << "MAX Vaule is:" << endl;
    cout << "max int is:" << n_int << endl;
    cout << "max short is:" << n_short << endl;
    cout << "max long is:" << n_long << endl;
    cout << "max long long is:" << n_long_long << endl;

    cout << "Min int value:" << INT_MIN << endl;
    cout << "Bites per byte = " << CHAR_BIT << endl;


    int x={1};
    int y{2};
    int z={};

    cout<<x<<endl<<y<<endl<<z<<endl;


    unsigned short x;
    unsigned int y;
    unsigned yy;
    unsigned long z;
    unsigned long long lz;

    short x=SHRT_MAX;
    unsigned short y=x;
    cout<<x<<" "<<y<<endl;
    x++;
    y++;
    cout << x << " " << y << endl;
    x=0;
    y=0;
    x--;
    y--;
    cout << x << " " << y << endl;


    int x = 42;
    int y = 0x42;
    int z = 042;
    cout << x << " " << y << " " << z << endl;
    cout << hex << "hex:" << x << endl;
    cout << oct << "oct:" << x << endl;
    cout <<

    char c='M';
    int x=c;
    cout << x << " " << c << endl;
    c=c+1;
    x=c;
    cout << x << " " << c << endl;
    cout.put(x);
    cout.put('\n');
    cout.put(c);


    int degrees;
    int arc;
    int seconds;
    double result;

    cout << "degrees:";
    cin >> degrees;

    cout << "arc:";
    cin >> arc;

    cout << "seconds:";
    cin >> seconds;

    result = degrees + static_cast<double>(arc + static_cast<double>(seconds)/60) / 60;

    cout << degrees << " " << arc << " " << seconds << " " << result;


    long long seconds;
    const int hourOfDay = 24;
    const int minOfHour = 60;
    const int secOfMin = 60;

    cin >> seconds;
    cout << seconds << " = " << seconds / (secOfMin * minOfHour * 24) << "days"
         <<  (seconds % (secOfMin * minOfHour * 24)) / (secOfMin * minOfHour) << "hours"
         << ((seconds % (secOfMin * minOfHour * 24)) % (secOfMin * minOfHour))/60 << "minutes"
         << ((seconds % (secOfMin * minOfHour * 24)) % (secOfMin * minOfHour))%60 << endl;
#endif

    long world;
    long us;
    cin >> world;
    cin >> us;
    cout << static_cast<double>(us) * 100/world << "%" << endl;


    cin.get();
    //return 0;
}
