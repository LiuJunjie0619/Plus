#include <iostream>
#include "queuetp.h"

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    QueueTP<string> cs(5);
    string temp;

    while(!cs.isfull())
    {
        std::cout << "Please enter your name.You will be served in the order of arrival.\n name: ";
        getline(cin,temp);
        cs.enqueue(temp);
    }
    cout << "The queue is full.Processing begins!\n";
    while(!cs.isempty())
    {
        cs.dequeue(temp);
        //cout << "Now processing " << temp.c_str() << "...\n";
        cout << "Now processing " << temp << "...\n";
    }
    return 0;
}
