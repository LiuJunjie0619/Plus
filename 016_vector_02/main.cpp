#include <iostream>
#include <string>
#include <vector>

struct Review
{
    std::string title;
    int rating;
};
bool operator <(const Review & r1,const Review & r2)
{
    if(r1.title < r2.title)
        return true;
    else if(r1.title == r2.title && r1.rating==r2.rating)
        return true;
    else
        return false;
}

bool WorseThan(const Review & r1,const Review & r2)
{
    if(r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review &rr);
void ShowReview(const Review & rr);

int main()
{
    using std::cout;
    using std::vector;
    using std::endl;

    vector<Review> books;
    Review temp;
    while(FillReview(temp))
        books.push_back(temp);
    int num = books.size();
    if(num > 0)
    {
        cout << "Thank you.You entered the following:\n"
             << "Rating:\nBook\n";
        for(int i=0;i<num;i++)
            ShowReview(books[i]);
        cout << "Reprising:\n"
             << "Rating\tBook\n";
        vector<Review>::iterator pr;        //
        for(pr=books.begin();pr!=books.end();pr++)
            ShowReview(*pr);
        vector<Review> oldlist(books);
        if(num > 3 )
        {
            //remove 2 items
            books.erase(books.begin() + 1,books.begin() + 3);
            cout << "After erasure:\n";
            for(pr=books.begin();pr!=books.end();pr++)
                ShowReview(*pr);

            books.insert(books.begin(),oldlist.begin()+1,oldlist.begin()+2);
            cout << "After insertion:\n";
            for(pr = books.begin();pr!=books.end();pr++)
            {
                ShowReview(*pr);
            }

            std::cout << "-------------------------------------------" << std::endl;
            std::for_each(books.begin(),books.end(),ShowReview);

            books.erase(books.begin(),books.end());
            std::cout << "-------------------------------------------" << std::endl;
            std::for_each(books.begin(),books.end(),ShowReview);
        }
        std::cout << "***************************************" << std::endl;
        books.swap(oldlist);
        for(pr=books.begin();pr!=books.end();pr++)
            ShowReview(*pr);

        std::cout << "***************************************" << std::endl;
        std::random_shuffle(books.begin(),books.end());
        std::for_each(books.begin(),books.end(),ShowReview);

        std::cout << "***************************************" << std::endl;
        std::sort(books.begin(),books.end());
        std::for_each(books.begin(),books.end(),ShowReview);

        std::cout << "++++++++++++++++++++++++++++++++++++++" << std::endl;
        std::sort(books.begin(),books.end(),WorseThan);
        std::for_each(books.begin(),books.end(),ShowReview);
    }
    else
    {
        std::cout << "Nothing entered,nothing gained." << std::endl;
    }

    return 0;
}

bool FillReview(Review & rr)
{
    std::cout << "Enter book title (quit to quit)";
    std::getline(std::cin,rr.title);
    if(rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if(!std::cin)
        return false;
    while(std::cin.get() != '\n')
        continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}
