#include <iostream>
#include "somedefs.h"
#include <functional>

double dub(double x){return 2.0 * x;}
double square(double x){return x * x;}

int main01()
{
//    double y = 1.21;
//    std::cout<< "Function pointer dbu:\n";
//    std::cout << " " << use_f(y,dub) << std::endl;
//    std::cout << "Fcuntion pointer square:\n";
//    std::cout << " " << use_f(y,square) << std::endl;

//    std::cout << "Function object Fp:\n";
//    std::cout << " " << use_f(y,Fp(5.0)) << std::endl;
//    std::cout << "Function object Fq:\n";
//    std::cout << " " << use_f(y,Fq(5.0)) << std::endl;

//    std::cout << "Lambda expression 1:\n";
//    std::cout << " " << use_f(y,[](double u){return u*u;}) << std::endl;
//    std::cout << " " << use_f(y,[](double u){return u+u/2.0;}) << std::endl;

    return 0;
}

int main02(int argc,char * argv[])
{
    double y = 1.21;
    std::function<double(double)> ef1 = dub;
    std::function<double(double)> ef2 = square;
    std::function<double(double)> ef3 = Fp(10.0);
    std::function<double(double)> ef4 = Fq(10.0);
    std::function<double(double)> ef5 = [](int u){return u * u;};
    std::function<double(double)> ef6 = [](int u){return u+u/2.0;};

    std::cout << "Function pointer dub:\n";
    std::cout << " " << use_f(y,ef1) << std::endl;
    std::cout << "Function pointer square:\n";
    std::cout << " " << use_f(y,ef2) << std::endl;

    std::cout << "Function object Fp:\n";
    std::cout << " " << use_f(y,ef3) << std::endl;
    std::cout << "Function object Fq:\n";
    std::cout << " " << use_f(y,ef4) << std::endl;

    std::cout << "Lambda expression 1:\n";
    std::cout << " " << use_f(y,ef5) << std::endl;
    std::cout << "Lambda expression 2:\n";
    std::cout << " " << use_f(y,ef6) << std::endl;

    return 0;
}
int main03(int argc,char * argv[])
{
    double y = 1.21;
    typedef std::function<double(double)> fdd;

    std::cout << "Function pointer dub:\n";
    std::cout << " " << use_f(y,fdd(dub)) << std::endl;
    std::cout << "Function pointer square:\n";
    std::cout << " " << use_f(y,fdd(square)) << std::endl;

    std::cout << "Function object Fp:\n";
    std::cout << " " << use_f(y,fdd(Fp(10.0))) << std::endl;
    std::cout << "Function object Fq:\n";
    std::cout << " " << use_f(y,fdd(Fq(10.0))) << std::endl;

    std::cout << "Lambda expression 1:\n";
    std::cout << " " << use_f(y,fdd([](double u){return u * u;})) << std::endl;
    auto lambda2 = [](double u){return u + u/2.0;};
    std::cout << "Lambda expression 2:\n";
    std::cout << " " << use_f(y,fdd(lambda2)) << std::endl;

    return 0;
}
int main(int argc,char * argv[])
{
    double y = 1.21;

    std::cout << "Function pointer dub:\n";
    std::cout << " " << use_f<double>(y,dub) << std::endl;
    std::cout << "Function pointer square:\n";
    std::cout << " " << use_f<double>(y,square) << std::endl;

    std::cout << "Function object Fp:\n";
    std::cout << " " << use_f<double>(y,Fp(10.0)) << std::endl;
    std::cout << "Function object Fq:\n";
    std::cout << " " << use_f<double>(y,Fq(10.0)) << std::endl;

    std::cout << "Lambda expression 1:\n";
    std::cout << " " << use_f<double>(y,[](double u){return u * u;}) << std::endl;
    auto lambda2 = [](double u){return u + u/2.0;};
    std::cout << "Lambda expression 2:\n";
    std::cout << " " << use_f<double>(y,lambda2) << std::endl;

    return 0;
}
