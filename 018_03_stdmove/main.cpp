#include <iostream>
#include <utility>

//interface
class Useless
{
private:
    int n;      //number of elements
    char * pc;  //pointer of data
    static int ct;      //number of objects
    void ShowObject() const;
public:
    Useless();
    Useless(int k);
    Useless(int k, char ch);
    Useless(const Useless & f);
    Useless(Useless && f);
    ~Useless();
    Useless operator+(const Useless & f);
    Useless & operator=(const Useless & f);
    Useless & operator=(Useless && f);
    void ShowData() const;
//    void a(int x) = delete;
//    void a(double x);
};

//implementation
int Useless::ct = 0;
Useless::Useless()
{
    ct++;
    n = 0;
    pc = nullptr;
}

Useless::Useless(int k)
{
    ct++;
    n = k;
    pc = new char[n];
    std::cout << "Useless::Useless(int k)" << std::endl;
}

Useless::Useless(int k, char ch)
{
    ct++;
    n = k;
    pc = new char[n];
    for(int i=0; i<k; i++)
        pc[i] = ch;
    std::cout << "Useless::Useless(int k, char * ch)" << std::endl;
}

Useless::Useless(const Useless & f)
{
    ct++;
    this->n = f.n;
    this->pc = new char[this->n];
    for(int i=0; i< this->n; i++)
        this->pc[i] = f.pc[i];
    std::cout << "Useless::Useless(const Useless & f)" << std::endl;
}

Useless::Useless(Useless && f)
{
    ct++;
    this->pc = f.pc;
    this->n = f.n;
    f.pc = nullptr;
    f.n = 0;
    std::cout << "Useless::Useless(Useless && f)" << std::endl;
}

Useless::~Useless()
{
    delete [] this->pc;
    std::cout << "Useless::~Useless()" << std::endl;
}

Useless Useless::operator+(const Useless & f)
{
    Useless temp(this->n + f.n);
    for(int i=0;i<this->n;i++)
        temp.pc[i] = this->pc[i];
    for(int i=this->n; i<temp.n; i++)
        temp.pc[i] = f.pc[i-n];
    std::cout << "Useless Useless::operator+(const Useless & f)" << std::endl;
    return temp;
}

Useless & Useless::operator=(const Useless & f)
{
    std::cout << "Useless & Useless::operator=(const Useless & f)" << std::endl;
    if(&f == this)
        return *this;
    delete [] this->pc;
    this->n = f.n;
    this->pc = new char[f.n];
    for(int i=0; i<this->n; i++)
        this->pc[i] = f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)
{
    std::cout << "Useless & Useless::operator=(Useless && f)" << std::endl;
    if(&f == this)
        return *this;
    this->n = f.n;
    f.n = 0;
    delete [] this->pc;
    this->pc = f.pc;
    f.pc = nullptr;

    return * this;
}

void Useless::ShowObject() const
{
    std::cout << "Number of elements: " << n;
    std::cout << " Data address: " << (void *)this->pc << std::endl;
}

void Useless::ShowData() const
{
    if(this->n == 0)
        std::cout << "(Object is empty)";
    else
        for(int i=0;i<this->n;i++)
            std::cout << this->pc[i];
    std::cout << std::endl;
    this->ShowObject();
}
//void Useless::a(double x)
//{

//}
//void Useless::a(int x)
//{

//}
//application
int main()
{
    Useless one(10,'x');
//    one.a(5.6);
//    one.a(5);
    Useless two = one + one;
    std::cout << "object one: ";
    one.ShowData();
    std::cout << "object two; ";
    two.ShowData();

    Useless three,four;
    std::cout << "three = one\n";
    three = one;
    std::cout << "now object three = ";
    three.ShowData();
    std::cout << "adn object one = ";
    one.ShowData();
    std::cout << "four = one + two\n";
    four = one + two;
    std::cout << "noe object four = ";
    four.ShowData();

    std::cout << "four = move(one)\n";
    four = std::move(one);
    std::cout << "now object four = ";
    four.ShowData();
    std::cout << "and object four = ";
    four.ShowData();
    std::cout << "and object one = ";
    one.ShowData();

    return 0;
}
