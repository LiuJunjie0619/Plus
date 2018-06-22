#include <iostream>
#include <string>       //using string constructors


int main()
{
    std::string one("Lottery Winnwe!");
    std::cout << one << std::endl;

    std::string two(20,'$');
    std::cout << two << std::endl;

    std::string three(one);
    std::cout << three << std::endl;

    one += " Oops!";
    std::cout << one << std::endl;

    two = "Sorry! That was ";
    three[0] = 'P';
    std::string four = two + three;
    std::cout << four << std::endl;

    char alls[] = "All's well that ends well";
    std::string five(alls,20);
    std::cout << five << std::endl;

    std::string six(alls+6, alls + 10);
    std::cout << six << ", ";

    std::string seven(&five[6],&five[10]);
    std::cout << seven << "...\n";

    std::string eight(four , 7,16);
    std::cout << eight << " in motion!" << std::endl;


    return 0;
}
