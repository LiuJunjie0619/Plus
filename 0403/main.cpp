#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char firstName[20] = {0};
    char lastName[20] = {0};
    char allName[50]={0};
    cout << "Enter your first name:";
    cin >> firstName;

    cout << "Enter your last name:";
    cin >> lastName;

    strcpy(allName,firstName);
    strcat(allName,",");
    strcat(allName,lastName);
    cout << "Here's the information in a single string:" << allName <<endl;
    return 0;
}
