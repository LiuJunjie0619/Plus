#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>

char toLower(char ch){return std::tolower(ch);}
std::string & ToLower(std::string & st);
void display(const std::string & s);

int main()
{
    std::vector<std::string> words;
    std::cout << "Enter words (enter quit to quit):\n";
    std::string input;
    while(std::cin >> input && input != "quit")
        words.push_back(input);
    std::cout << "You entered the following words:\n";
    std::for_each(words.begin(),words.end(),display);
    std::cout << std::endl;

    //please words in set,converting to lowercase
    std::set<std::string> wordset;
    std::transform(words.begin(),words.end()
                   ,std::insert_iterator<std::set<std::string> >(wordset
                    ,wordset.begin()),
                   ToLower);
    std::cout << "\nAlphahetic list of words:\n";
    std::for_each(wordset.begin(),wordset.end(),display);
    std::cout << std::endl;

    //please word and frequency in map
    std::map<std::string,int> wordmap;
    std::set<std::string>::iterator si;
    for(si = wordset.begin();si!=wordset.end();si++)
        wordmap[*si] = std::count(words.begin(),words.end(),*si);

    //display map contents
    std::cout << "\nWord frequency:\n";
    for(si = wordset.begin();si!=wordset.end();si++)
        std::cout << *si << ":\t" << wordmap[*si] << std::endl;

    return 0;
}

std::string & ToLower(std::string & st)
{
    std::transform(st.begin(),st.end(),st.begin(),toLower);
    return st;
}

void display(const std::string & s)
{
    std::cout << s << " ";
}
