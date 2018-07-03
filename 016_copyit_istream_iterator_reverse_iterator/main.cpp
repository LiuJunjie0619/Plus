#include <iostream>
#include <iterator>
#include <vector>

template <typename T>
void output(const T & item)
{
    std::cout << item << " ";
}

int main()
{
    int casts[10] = {6,7,2,9,4,11,8,7,10,5};
    std::vector<int> dice(10);
    //copy form array to vector
    std::copy(casts,casts+10,dice.begin());
    std::cout << "Sort vector!\n";
    std::sort(dice.begin(),dice.end());
    std::cout << "Let the dice be cast!\n";
    //create an ostream iterator
    std::ostream_iterator<int,char> out_iter(std::cout," ");
    //copy from vector to output
    std::copy(dice.begin(),dice.end(),out_iter);
    std::cout << std::endl;
    std::cout << "Implicit use of reverse iterator.\n";
    std::copy(dice.rbegin(),dice.rend(),std::ostream_iterator<int,char>(std::cout," "));
    std::cout << std::endl;
    std::cout << "Explicit use of reserse iterator.\n";
    std::vector<int>::reverse_iterator ri;
    for(ri = dice.rbegin();ri!=dice.rend();ri++)
        std::cout << *ri << " ";
    std::cout << std::endl;

    std::cout << "back_insert_iterator\n";
    std::back_insert_iterator<std::vector<int> > back_iter(dice);
    std::copy(casts,casts+3,back_iter);
    std::for_each(dice.begin(),dice.end(),output<int>);
    std::cout << std::endl;

    std::cout << "insert_iterator\n";
    std::insert_iterator<std::vector<int> > insert_iter(dice,dice.begin());
    std::copy(casts+8,casts+10,insert_iter);
    std::for_each(dice.begin(),dice.end(),output<int>);
    std::cout << std::endl;

    return 0;
}
