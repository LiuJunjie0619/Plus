#include <iostream>
#include <array>
#include <vector>

using namespace std;


struct fish
{
    string name;
    int count;
    double len;
};

enum Response{Yes=1,No=0,Maybe=2};

int main()
{
#if 0
    array<char,30> actor = {0};
    array<short,100> betsie = {0};
    array<float,13> chuck = {0};
    array<long double,64> dipsea = {0};

    array<int,5> odds = {0};
    int index = 0;
    for(int i=0;i<10;i++)
    {
        if(i%2 == 1)
        {
            odds[index] = i;
            index++;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout << odds[i] << endl;
    }
#endif

#if 0
    char arrc[20]="cheseburger";
    string str{"Waldor Salad"};
    fish smallFish={"name",10,8};
    double ted = 0.123;
    double *pted = &ted;
    cout << *pted << endl;
#endif

#if 0
    float treacle[10] = {1.1,2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9,10.1};
    float *p = &treacle[0];
    cout<< p[0] << " " << p[9] << endl;
#endif

#if 0
    int number = 0;
    cin >> number;
    int *parr = new int[number]{0};
    cout << parr[0] << endl;
#endif

#if 0
    int number = 0;
    cin >> number;
    vector<int> vi(number);
    vi[0] = 10;
    cout << vi[0] << endl;
#endif




    return 0;
}
