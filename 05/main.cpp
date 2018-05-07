#include <iostream>

using namespace std;

int main()
{
#if 0
    int cats=0;
    cats = (17,240);
    cats = 17,240;
    cout << cats << endl;
#endif

#if 0
    double prices[9] = {1.11,2.22,3.33,4.44,5.55,6.66,7.77,8.88,9.99};
    //for(double x : prices)
    for(auto x : prices)
        cout << (x = x+1) << endl;

    for(auto &x : prices)
        cout << (x) << endl;
#endif

#if 0
    char name[10];
    cin.get(name,10).get();
    cout << name << endl;
#endif

#if 0
    char ch;
    cin.get();
    //while(cin.fail() == false)
    //while(!cin.fail())
    //while(cin)
    while(cin.get(ch))
    {
        //cin.get(ch);
        //cout << ch;
    }
    cout << "end1\n" << endl;
    cin.clear();
    while(cin.fail() == false)
    {
        cin.get(ch);
    }
    cout << "end2" << endl;
#endif

#if 0
    int ch;
    ch = cin.get();
    cout.put(ch);
    cin.get();

#endif

#if 0
    int ch;
    ch = cin.get();
    while(ch != EOF)
    {
        cout.put(ch);
        ch = cin.get();
    }
#endif

    int count;
    cout << "Enter number of rows:";
    cin >> count;

    for(int i = 0;i<count;i++)
    {
        for(int j=0;j<(count - i - 1);j++)
        {
            cout << ".";
        }
        for(int k=0;k<(i + 1);k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout.put(count);

    cin.get();
    return 0;
}
