#include <iostream>
#include "mystring.h"

const int ArSize = 10;
const int MaxLen = 81;
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    MyString name;
    cout << "Hi,what's your name?\n>>";
    cin >> name;

    cout << name << ",please enter up to " << ArSize << " short syaings <empty line to quit:>\n";
    MyString sayings[ArSize];         //array of objects
    char temp[MaxLen];              //temporary string storage
    int i;
    for(i=0;i<ArSize;i++)
    {
        cout << i+1 << ": ";
        cin.get(temp,MaxLen);
        while(cin && cin.get() != '\n')
        {
            cout << "continue" << endl;
            continue;
        }
        if(!cin || temp[0] == '\0')
        {
            cout << "beak;" << endl;
            break;
        }
        else
            sayings[i] = temp;
    }
    int total = i;

    cout <<"total:" << i<< endl;;

    if(total > 0)
    {
        cout << "Here are your sayings:\n";
        for(i=0;i<total;i++)
            cout << sayings[i][0] << ":" << sayings[i] << endl;

        MyString * shortest = &sayings[0];
        MyString * first = &sayings[0];
        for(i=1;i<total;i++)
        {
            if(sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if(sayings[i] < *first)
                first = &sayings[i];
        }
        cout << "Shortest saying:\n" << * shortest << endl;
        cout << "First alphabetically:\n" << * first << endl;
        cout << "This program used " << MyString::HowMany() << " MyString objects.Bye.\n";
    }
    else
        cout << "No input!Bye.\n";
    return 0;

    return 0;
}
