#include <iostream>


//using std::cout;

namespace myth
{
    using std::cout;
    using std::cin;
    using namespace std;
}
namespace elements
{
    namespace fire
    {
        int flname;
    }
}
namespace my_very_favorite_things
{
    int bookid;
    using namespace elements;
}
namespace mvft = my_very_favorite_things;
namespace MEF = mvft::fire;

int main()
{
    //    using namespace std;
    //    using std::cout;
    //    using std::endl;
    //    int cout = 10;
    //    cout = 20;
    //    std::cout<< "20" << std::endl;
    using myth::cout;
    cout << "test" << myth::endl;
    myth::cin.get();

    mvft::bookid = 10;
    MEF::flname = 20;

    return 0;
}
