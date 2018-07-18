#include <iostream>

int main()
{
    int eggs = 12;
    char name[20] = "Dudly Diddlemore";
    char * pn = "Violet D'Amore";
    char * amount = "dozen";
    std::cout << "Hello" << std::endl;;
    std::cout << name << std::endl;
    std::cout << pn << std::endl;;

    std::cout << &eggs << std::endl;             //prints address of eggs varibale
    std::cout << name << std::endl;              //prints the string "dozen"
    std::cout << (void *) amount << std::endl;   //prints the address of the "dozen" string

    std::cout << "//////////////////////////////////////////////////////////" << std::endl;
    std::cout.put('W').put('\n');   //W
    std::cout << 'W' << '\n';       //W
    std::cout.put(65).put('\n');    //display the A character
    std::cout.put(66.3).put('\n');  //display the B character
    std::cout << 87;                //87
    std::cout << std::endl;

    long val = 560031841;
    std::cout << val << std::endl;                              //display 560031841
    std::cout.write((char *)&val,sizeof(long)) << std::endl;    //display aha!
    std::cout << reinterpret_cast<char *>(&val) << std::endl;   //display aha!

    std::cout << "Hello,gool-looking! " << std::flush;
    std::cout << "Wait just a moment,please." << std::endl;

    std::cout << "#########################################################################" << std::endl;
    std::cout << "#";
    std::cout.width(12);
    std::cout << "#" << 24 << "#\n";
    std::cout << "#" << 12 << "#\n";

    std::cout << "#";
    std::cout.fill('*');
    std::cout.width(20);
    std::cout << 1234567890123 << "#\n";

    std::cout << 123.4567890123 << std::endl;
    std::cout.precision(15);
    std::cout << 123.4567890123 << std::endl;
    std::cout << 123.4567890123 << std::endl;

    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    float f1 = 12.3;
    std::cout.setf(std::ios_base::showpoint);
    std::cout << f1 << std::endl;

    std::cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << std::endl;
    char ch[20];
    std::cin.get(ch,6);
    std::cout << ch << std::endl;
    std::cin.ignore(2,'\n');

    std::cin.get(ch,6);
    std::cout << ch << std::endl;
    return 0;
}
