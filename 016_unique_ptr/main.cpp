#include <iostream>
#include <vector>
#include <memory>

std::unique_ptr<int> make_int(int n)
{
    return std::unique_ptr<int>(new int(n));
}

void show(std::unique_ptr<int> &pi)
{
    std::cout << *pi << std::endl;
}

enum{size = 5};
int main()
{
    std::vector<std::unique_ptr<int> > vp(size);
    for(int i=0;i < vp.size();i++)
        vp[i]=make_int(rand() % 1000);
    vp.push_back(make_int(rand()%1000));
    for_each(vp.begin(),vp.end(),show);
    return 0;
}
