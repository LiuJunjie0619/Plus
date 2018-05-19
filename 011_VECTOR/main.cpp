#include "vector.h"

using namespace std;
using namespace VECTOR;

int main()
{
//    Vector folly(3.0,4.0);
//    Vector foolery(20.0,30.0,VECTOR::Vector::POL);
//    //Vector rector(20.0,30.0,2);
//    Vector rector(20.0,30.0,VECTOR::Vector::Mode(2));

//    cout << folly;
//    //cout.clear();
//    cout << foolery;
//    cout << rector;
//    cout << (-folly);

    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance(q to quit):";
    while(cin >> target)
    {
        cout << "Enter step length:";
        if(!(cin >> dstep))
        {
            cout << "dstep:" << dstep << endl;
            break;
        }
        cout << "Start" << endl;
        while(result.magval() < target)
        {
            //srand(time(0));
            direction = rand() % 360;
            step.reset(dstep,direction,Vector::POL);
            result = result + step;
            cout << result << endl;
            steps++;
        }

        cout << "After " << steps << " steps,the subject "
                " has the following location:\n";
        cout << result << endl;

        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
             << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit):";
    }
    cout << "Bye!\n";
    cin.clear();
    while(cin.get() != '\n')
        continue;
    return 0;
}
