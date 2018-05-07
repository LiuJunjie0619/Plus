#include <iostream>

using namespace std;

//double up;              //definition, up is 0
//extern int blem;        //blem defined elsewhere
//extern char gr = 'z';   //definition because initialized

//external variable
double warming = 0.3;       //warming defined

//function prototypes
void update(double dt);
void local();

const char * const months[12] =
{
    "January","February","March","April","May","June","July","August","September","October","November","December"
};

int main()
{
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);
    cout << "Global warming is " << warming << " degrees.\n";
    local();
    cout << "Golbal warming is " << warming << " degrees." << endl;
    return 0;
}
