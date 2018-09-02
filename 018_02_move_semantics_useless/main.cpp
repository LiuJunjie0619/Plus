#include <iostream>

//interface
class Useless
{
private:
    int n;          //number of elements
    char * pc;      //pointer to data
    static int ct;  //number of objects
    void ShowObject() const;
public:
    Useless();
    explicit Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f);         //regular copy constructor
    Useless(Useless && f);              //move constructor
    ~Useless();
    Useless operator+(const Useless & f) const;
    //need operator=() in copy and move versions
    void ShowData() const;
};

//implementation
int Useless::ct = 0;
Useless::Useless()
{
    ++ct;
    n = 0;
    pc = nullptr;
    std::cout << "default constructor called; number of objects: " << ct << std::endl;
    ShowObject();
}

Useless::Useless(int k) : n(k)
{
    ++ct;
    std::cout << "int constructor called; number of objects: " << ct << std::endl;
    pc = new char[n];
    ShowObject();
}

Useless::Useless(int k, char ch):n(k)
{
    ++ct;
    std::cout << "int, char constructor called; number of objects: " << ct << std::endl;
    pc = new char[n];
    for(int i=0; i<n;i++)
        pc[i] = ch;
    ShowObject();
}

Useless::Useless(const Useless & f):n(f.n)
{
    ++ct;
    std::cout << "copy const called; number of objects; " << ct << std::endl;
    pc = new char[n];
    for(int i=0; i<n; i++)
        pc[i] = f.pc[i];
    ShowObject();
}

Useless::Useless(Useless && f):n(f.n)
{
    ++ct;
    std::cout << "move constructor called; number of objects: " << ct << std::endl;
    pc = f.pc;              //steal address
    f.pc = nullptr;
    f.n = 0;
    ShowObject();
}

Useless::~Useless()
{
    std::cout << "destructor called; objects left: " << --ct << std::endl;
    std::cout << "deleted object:\n";
    ShowObject();
    delete [] pc;
}

Useless Useless::operator+(const Useless & f) const
{
    std::cout << "Entering operator+()\n";
    Useless temp = Useless(n + f.n);
    for(int i = 0; i<n ; i++)
        temp.pc[i] = pc[i];
    for(int i=n; i<temp.n; i++)
        temp.pc[i] = f.pc[i - n];
    std::cout << "temp object:\n";
    std::cout << "Leaving operator+()\n";
    return temp;
}

void Useless::ShowObject() const
{
    std::cout << "Number of elements: " << n;
    std::cout << " Data address: " << (void *)pc << std::endl;
}

void Useless::ShowData() const
{
    if(n == 0)
        std::cout << " (object empty)";
    else
        for(int i = 0;i<n;i++)
            std::cout << pc[i];
    std::cout << std::endl;
}

//application
int main(int argc,char * argv[])
{
    {
        Useless one(10,'x');
        Useless two = one;              //calls copy constructor
        Useless three(20,'o');

        Useless four (one + three);     //calls operator+(), move constructor

        std::cout << "object one: ";
        one.ShowData();
        std::cout << "object two: ";
        two.ShowData();
        std::cout << "object three: ";
        three.ShowData();
        std::cout << "object four: ";
        four.ShowData();
    }
    return 0;
}
