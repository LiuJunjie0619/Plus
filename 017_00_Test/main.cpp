#include <iostream>
#include <fstream>

int main()
{
    std::ifstream fin;          //create stream using default constructor
    fin.open("fat.txt");        //associate stream with fat.txt file
    //...                       //do stuff
    fin.close();                //terminate assciation with fat.txt
    fin.clear();                //reset fin (may not be needed)

    fin.open("rat.txt");        //associate stream with rat.txt file
    //...
    fin.clode();

    return 0;
}
