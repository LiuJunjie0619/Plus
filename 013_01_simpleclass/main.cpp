#include <iostream>
#include "ratedplayer.h"

void Show(const TableTennisPlayer & rt)
{
    std::cout << "Name:";
    rt.Name();
    std::cout << "\nTable: ";
    if(rt.HasTable())
        std::cout << "yes\n";
    else
        std::cout << "no\n";
}

void Show1(const TableTennisPlayer * pt)
{
    std::cout << "Name:";
    pt->Name();
    std::cout << "\nTable: ";
    if(pt->HasTable())
        std::cout << "yes\n";
    else
        std::cout << "no\n";
}

int main()
{
    TableTennisPlayer player1("L","JJ",false);
    RatedPlayer rplayer1(1140,"Z","J",true);
    rplayer1.Name();
    if(rplayer1.HasTable())
        std::cout << ":has a table.\n";
    else
        std::cout << ":hasn't a table.\n";

    player1.Name();
    if(player1.HasTable())
        std::cout << ":has a table.\n";
    else
        std::cout << ":hasn't a table.\n";

    std::cout << "Name:";
    rplayer1.Name();
    std::cout << ";Rating: " << rplayer1.Rating() << std::endl;

    RatedPlayer rplayer2(1212,player1);
    std::cout << "Name:";
    rplayer2.Name();
    std::cout << ";Rating: " << rplayer2.Rating() << std::endl;

    std::cout << "------------------------------------------------------" << std::endl;
    Show(player1);
    Show(rplayer1);

    std::cout << "------------------------------------------------------" << std::endl;
    Show1(&player1);
    Show1(&rplayer1);

    return 0;
}
