#include <iostream>
#include <new>
#include <cstdlib>      //for exit(),EXIT_FAILURE

struct Big
{
    double stuff[200000000];
};

int main()
{
    Big * pb;
    try
    {
        std::cout << "Trying to get a big block of memory:\n";
        //pb = new(std::nothrow) Big[1000000000];
        pb = new Big[1000000000];
        if(pb == 0)
        {
            std::cout << "Could not allocate memory.Bye.\n";
            std::exit(EXIT_FAILURE);
        }
        std::cout << "Got past the new request:\n";
    }
    catch(std::bad_alloc & ba)
    {
        std::cout << "caught the excepton!\n";
        std::cout << ba.what() << std::endl;
        exit(EXIT_FAILURE);
    }
    catch(...)
    {
        std::cout << "none exception" << std::endl;
    }
    std::cout << "Memory successfully allocated\n";
    pb[0].stuff[0] = 4;
    std::cout << pb[0].stuff[0] << std::endl;
    delete [] pb;
    return 0;
}
