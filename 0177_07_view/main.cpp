#include <iostream>
#include <iomanip>

const int LIM = 20;
inline void eatline(){ while(std::cin.get() != '\n') continue;}
struct Body
{
    char name[LIM];
    double wages;
    double worked;
};
int main()
{
    Body body;
    std::cout << "Enter your name: ";
    std::cin.get(body.name,LIM);
    ::eatline();
    std::cout << "Enter your hourly wages: ";
    std::cin >> body.wages;
    std::cout << "Enter number of hours worked: ";
    std::cin >> body.worked;
    std::cout << std::left << "First format: \n";

    std::cout << std::right << std::setw(20) << body.name << ":";
    std::cout.setf(std::ios_base::right,std::ios_base::adjustfield | std::ios_base::fixed | std::ios_base::showpoint);
    std::cout << std::setw(20) << std::fixed << std::showpoint << std::setw(10) << std::setprecision(2) << body.wages << ":" << std::setprecision(1) << body.worked;

    std::cout << std::endl;
    std::cout << "Second format: \n";
    std::cout.setf(std::ios_base::fixed,std::ios_base::floatfield);
    std::cout.setf(std::ios_base::showpoint,std::ios_base::basefield);
    std::cout.setf(std::ios_base::left, std::ios_base::adjustfield);
    std::cout << std::setw(30) << body.name << ":$"
              << std::left << std::setprecision(2) << std::setw(20) << std::showpoint << std::fixed << body.wages
              << ":" << std::left << std::setprecision(1) << std::setw(10)  << body.worked;
    std::cout << std::endl;
    return 0;
}
