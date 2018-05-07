#include <iostream>

using namespace std;

struct CandyBar
{
    string brand;
    double weight;
    int calorie;
};

int main()
{
    CandyBar snack = {"Mocha Munch",2.3,350};

    cout << "Brand:" << snack.brand << endl;
    cout << "Weight:" << snack.weight << endl;
    cout << "Calorie:" << snack.calorie << endl;

    CandyBar snacks[3]={{"Mocha Munch1",2.31,3501},{"Mocha Munch2",2.32,3502},{"Mocha Munch3",2.33,3503}};
    for(int i=0;i<3;i++)
    {
        cout << "Brand:" << snacks[i].brand << endl;
        cout << "Weight:" << snacks[i].weight << endl;
        cout << "Calorie:" << snacks[i].calorie << endl;
    }

    cout << "-----------------------------------------------------------------" << endl;
    int count = 0;
    cout << "Please CandyBar's count:";
    cin >> count;
    CandyBar *p = new CandyBar[count];
    string name{"name"};
    for(int i=0;i<count;i++)
    {
        p[i].brand = name + to_string(i);
        p[i].calorie = 2.3;
        p[i].weight = 350;
    }

    for(int i=0;i<count;i++)
    {
        cout << p[i].brand << endl;
        cout << p[i].calorie << endl;
        cout << p[i].weight << endl;
    }

    return 0;
}
