#include <iostream>
#include <string>
#include <set>
#include <iterator>
#include <algorithm>

template <typename T>
void output(const T & item)
{
    std::cout << item << " ";
}

int main()
{
    const int N = 6;
    std::string s1[N] = {"s100Same","s1002","s1003","s1004","s1005","s1006"};
    std::string s2[N] = {"s100Same","s2002","s2003","s2004","s2005","s2006"};

    std::set<std::string> A(s1 , s1 + N);
    std::set<std::string> B(s2 , s2 + N);

    std::ostream_iterator<std::string,char> out(std::cout," ");
    std::cout << "Set A: ";
    std::copy(A.begin(),A.end(),out);
    std::cout << std::endl;

    std::cout << "Set B: ";
    std::copy(B.begin(),B.end(),out);
    std::cout << std::endl;

    std::cout << "Union of A and B:\n";
    std::set_union(A.begin(),A.end(),B.begin(),B.end(),out);
    std::cout << std::endl;

    std::cout << "Intersection of A and B:\n";
    std::set_intersection(A.begin(),A.end(),B.begin(),B.end(),out);
    std::cout << std::endl;

    std::cout << "Difference of A and B:\n";
    std::set_difference(A.begin(),A.end(),B.begin(),B.end(),out);
    std::cout << std::endl;
    std::cout << "Difference of B and A:\n";
    std::set_difference(B.begin(),B.end(),A.begin(),A.end(),out);
    std::cout << std::endl;


    std::set<std::string> C;
    std::cout << "Set C:\n";
    std::set_union(A.begin(),A.end(),B.begin(),B.end(),std::insert_iterator<std::set<std::string> >(C,C.begin()));
    std::copy(C.begin(),C.end(),out);
    std::cout << std::endl;

    std::string s3("s3001");
    C.insert(s3);
    std::cout << "Set C after insertion:\n";
    std::copy(C.begin(),C.end(),std::ostream_iterator<std::string,char>(std::cout," "));
    std::cout << std::endl;

    std::cout << "Show a range:\n";
    std::copy(C.lower_bound("s1003"),C.upper_bound("s2002"),out);
    std::cout << std::endl;

    std::cout << "Show C std::for_each:\n";
    std::for_each(C.begin(),C.end(),output<std::string>);
    std::cout << std::endl;

    return 0;
}
