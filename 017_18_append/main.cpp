#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>      //for exit()

const char * file = "guests.txt";
int main()
{
    char ch;
    //show initial contents
    std::ifstream fin;
    fin.open(file);

    if(fin.is_open())
    {
        std::cout << "Here are the current contents of the "
                  << file << " file:\n";
        while(fin.get(ch))
            std::cout << ch;
        fin.close();
    }

    //add new name
    std::ofstream fout(file,std::ios_base::out | std::ios_base::app);
    if(!fout.is_open())
    {
        std::cerr << "Can't open " << file << " file or output.\n";
        exit(EXIT_FAILURE);
    }

    std::cout << "Enter guest name (enter a blank lione to quit):\n";
    std::string name;
    while(getline(std::cin,name) && name.size() > 0)
    {
        fout << name << std::endl;
    }
    fout.close();

    //show revised file
    fin.clear();
    fin.open(file);
    if(fin.is_open())
    {
        std::cout << "Here are the new contents of the "
                  << file << " file:\n";
        while(fin.get(ch))
            std::cout << ch;
        fin.close();
    }
    std::cout << "Done.\n";

    return 0;
}
