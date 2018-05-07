#include <iostream>
#include <string>

//using namespace std;

struct free_throws
{
    std::string name;
    int made;           //制造，拼凑
    int attempts;       //尝试
    float percent;
};

void display(const free_throws & ft);
void set_pc(free_throws & ft);
free_throws & accumulate(free_throws & target,const free_throws & source);
const free_throws & clone(free_throws & ft);

int main()
{
    free_throws one = {"one" , 13, 14};
    free_throws two = {"two", 10, 16};
    free_throws three = {"three",7,9};
    free_throws four = {"four",5,9};
    free_throws five = {"five",6, 14};
    free_throws team = {"team",0,0};
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);

    display(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    display(team);

    dup = accumulate(team,five);
    std::cout << "Displaying team(" << &dup << "):" << '\n';
    display(team);
    std::cout << "Display dup after assignment(" << &team << "):\n";
    display(dup);

    set_pc(four);
    accumulate(dup,five) = four;
    std::cout << "Displaying dup after ill-advised assignment:\n";
    display(dup);

    std::cout << "-----------------------------------------" << '\n';
    free_throws jolly = clone(three);
    std::cout << "three:" << &three << std::endl;
    std::cout << "jolly:" << &jolly << '\n';

    return 0;
}

void display(const free_throws &ft)
{
    using std::cout;
    using std::endl;
    cout << "Name:" << ft.name << '\n';
    cout << "   Made:" << ft.made << '\t';
    cout << "Attempts:" << ft.attempts << '\t';
    cout << "Percent:" << ft.percent << '\n';
}

void set_pc(free_throws &ft)
{
    if(ft.attempts!=0)
        ft.percent = 100.0f * float(ft.made) / float(ft.attempts);
    else
        ft.percent = 0;
}

//积累
free_throws & accumulate(free_throws &target, const free_throws &source)
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}

const free_throws & clone(free_throws &ft)
{
    free_throws * pt = 0;
    pt = &ft;
    return *pt;
}
