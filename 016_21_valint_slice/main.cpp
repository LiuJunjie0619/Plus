#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
void show(const std::valarray<int> & v, int cols);

int main()
{    
    std::srand(std::time(0));
    std::valarray<int> valint(SIZE);    //think of as 4 rows of 3
    int i;
    for(i=0;i<SIZE;i++)
    {
        valint[i] = std::rand() % 10;
    }
    std::cout << "Original array:\n";
    ::show(valint,3);                   //show in 3 columns
    std::valarray<int> vcol(valint[std::slice(1,4,3)]);     //extract 2nd column
    std::cout << "Second column:\n";
    ::show(vcol,1);                                         //show in 1 column

    std::valarray<int> vrow(valint[std::slice(3,3,1)]);     //extract 2nd row
    std::cout << "Second row:\n";
    ::show(vrow,3);

    valint[std::slice(2,4,3)] = 10;
    std::cout << "Set last column to 10:\n";
    ::show(valint,3);

    std::cout << "Set first column to sum of next two:\n";
    // + not defined for slices, so convert to valarray<int>
    valint[std::slice(0,4,3)] = std::valarray<int>(valint[std::slice(1,4,3)])
            + std::valarray<int>(valint[std::slice(2,4,3)]);
    ::show(valint,3);

    return 0;
}

void show(const std::valarray<int> & v, int cols)
{
    int lim = v.size();
    for(int i = 0;i < lim; i++)
    {
        std::cout.width(3);
        std::cout << v[i];
        if(i % cols == cols - 1)
            std::cout << std::endl;
        else
            std::cout << ' ';
    }
    if(lim % cols != 0)
        std::cout << std::endl;
}
