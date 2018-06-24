#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream fin;
    fin.open("tobuy.txt");
    if(!fin.is_open())
    {
        std::cerr << "Can not open file." << std::endl;
        exit(EXIT_FAILURE);
    }

    std::string item;
    int count = 0;
    //getline(fin,item,':');
    while(!fin.eof())
    {
        ++count;
//        std::cout << count << ": " << item << std::endl;
        getline(fin,item,':');
        std::cout << count << ": " << item << std::endl;
    }
    std::cout << "Done\n";
    fin.close();

    return 0;
}
