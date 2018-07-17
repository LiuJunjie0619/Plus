#include <iostream>     //not needed for many systems
#include <fstream>
#include <string>

int main()
{
    std::string filename;

    std::cout << "Enter name for new file: ";
    std::cin >> filename;

    //create output stream object for new file and call it font
    std::ofstream fout(filename.c_str());
    fout << "For your eyes only!\n";                    //write to file
    std::cout << "Enter your secret number: ";          //write to screen
    float secret;
    std::cin >> secret;
    fout << "Your secret number is " << secret << std::endl;
    char inputStr[100];
    std::cout << "Input remark:";
    std::cin.get(inputStr,100,'#');
    fout << inputStr << '\n';
    fout.close();                                       //close file

    //create input stream object for new file and call it fin
    std::ifstream fin(filename.c_str());
    std::cout << "Here are the contents of " << filename << ": \n";
    char ch;
    while(fin.get(ch))                                  //read character from file and
        std::cout << ch;                                // write it to screen
    std::cout << "Done\n";
    fin.close();

    return 0;
}
