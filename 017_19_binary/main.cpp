#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>      //for exit()

inline void eatline(){ while(std::cin.get() != '\n') continue;}
struct planet
{
    char name[20];          //name of planet
    double population;      //its population
    double g;               //its acceleration of gravity
};
const char * file = "planets.dat";

int main()
{
    planet pl;
    std::cout << std::fixed << std::right;

    //show initial contents
    std::ifstream fin;
    fin.open(file,std::ios_base::in | std::ios_base::binary);       //binary file
    //NOTE: some systems don't accept the ios_base::binary mode
    if(fin.is_open())
    {
        std::cout << "Here are the current contents of the "
                  << file << " file:\n";
        while(fin.read((char*)&pl,sizeof pl))
        {
            std::cout << std::setw(20) << pl.name << ": "
                      << std::setprecision(0) << std::setw(12) << pl.population
                      << std::setprecision(2) << std::setw(6) << pl.g << std::endl;
        }
        fin.close();
    }

    //add new data
    std::ofstream fout(file,std::ios_base::out | std::ios_base::app | std::ios_base::binary);
    //NOTE: some systems don't accept the ios::binary mode
    if(!fout.is_open())
    {
        std::cerr << "Can't open " << file << " file for output:\n";
        exit(EXIT_FAILURE);
    }

    std::cout << "Enter planet name (enter a blank line to quit):\n";
    std::cin.get(pl.name,20);
    while(pl.name[0] != '\0')
    {
        eatline();
        std::cout << "Enter planetary population: ";
        std::cin >> pl.population;
        std::cout << "Enter planet's acceleration of gravity: ";
        std::cin >> pl.g;
        ::eatline();
        fout.write((char*) &pl,sizeof pl);
        std::cout << "Enter planet name (enter a blank line to quit):\n";
        std::cin.get(pl.name,20);
    }
    fout.close();

    //show revised file
    fin.clear();
    fin.open(file,std::ios_base::in | std::ios_base::binary);
    if(fin.is_open())
    {
        std::cout << "Here are the new contents of the "
                  << file << "file:\n";
        while(fin.read((char *) & pl,sizeof pl))
        {
            std::cout << std::setw(20) << pl.name << ": "
                      << std::setprecision(0) << pl.population
                      << std::setprecision(2)  << std::setw(6) << pl.g << std::endl;
        }
        fin.close();
    }

    std::cout << "Done.\n";
    return 0;
}
