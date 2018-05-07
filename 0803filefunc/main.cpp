#include <iostream>
#include <fstream>

using namespace std;

void file_it(ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;

int main()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if(!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths,in mm,of " << LIMIT
         << " eyepieces:\n";
    for(int i=0;i<LIMIT;i++)
    {
        cout << "Eyepieces #" << i+1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps,LIMIT);
    file_it(cout,objective , eps, LIMIT);
    cout << "Done.\n";

    return 0;
}

void file_it(ostream & os,double fo, const double fe[], int n)
{
    ios_base::fmtflags initial;                             //formatting obj
    initial = os.setf(ios_base::fixed);                     //save initila formatting state
    os.precision(0);                                        //precision setting point length.example 12.00
    os << "Focal length of objective:" << fo << "mm\n";     //focal 焦点
    os.setf(ios::showpoint);                                //set format showpoint
    os.precision(1);                                        //set point 1,example 12.1
    os.width(12);                                           //width 12
    os << "f.l. eyepiece";                                  //eyepiece 目镜
    os.width(15);
    os << "magnification" << endl;                          //magnification 放大率
    for(int i=0;i<n;i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    os.setf(initial);                                       //restore initila formatting state
}
