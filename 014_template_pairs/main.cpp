#include <iostream>
#include "pairs.h"

using namespace std;

int main()
{
    using std::cout;
    using std::endl;
    using std::string;
    Pair<string,int> ratings[4] =
    {
        Pair<string,int>("001",5),
        Pair<string,int>("002",4),
        Pair<string,int>("003",5),
        Pair<string,int>("004",3)
    };

    int joints = sizeof(ratings) / sizeof(Pair<string,int>);
    std::cout << "Rating:\t Eatery\n";
    for(int i=0;i< joints;i++)
        std::cout << ratings[i].second() << ":\t " << ratings[i].first() << std::endl;
    std::cout << "Oops!Revised rating:\n";
    ratings[3].first() = "003003";
    ratings[3].second() = 6;
    std::cout << ratings[3].second() << ":\t " << ratings[3].first() << std::endl;

    return 0;
}
