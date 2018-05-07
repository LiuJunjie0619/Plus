#include <iostream>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    string allName;

    cout << "Enter your first name:";
    cin >> firstName;

    cout << "Enter your last name:";
    cin >> lastName;

    allName.append(firstName);
    allName.append(",");
    allName.append(lastName);
    cout << "Here's the information is a single string:" << allName << endl;
    return 0;
}
