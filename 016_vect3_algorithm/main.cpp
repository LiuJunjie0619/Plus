#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

struct Review
{
    std::string title;
    int rating;
};

bool operator<(const Review & r1 , const Review & r2);
bool worseThan(const Review & r1 , const Review & r2);
bool FillReview(Review & rr);
void ShowReview(const Review & rr);
void InflateReview(Review & r);

int main()
{
    std::vector<Review> books;
    Review temp;
    while(FillReview(temp))
        books.push_back(temp);
    if(books.size() > 0)
    {
        std::cout << "Thank you.You entered the following "
                  << books.size() << " ratings:\n"
                  << "Rating\tBook\n";
        std::for_each(books.begin(),books.end(),ShowReview);

        std::sort(books.begin(),books.end());
        std::cout << "Sorted by title:\nRating\tBook\n";
        std::for_each(books.begin(),books.end(),ShowReview);

        std::sort(books.begin(),books.end(),worseThan);
        std::cout << "Sorted by rating:\nRating\tBook\n";
        std::for_each(books.begin(),books.end(),ShowReview);

        std::random_shuffle(books.begin(),books.end());
        std::cout << "After shuffling:\nRating\tBook\n";
        std::for_each(books.begin(),books.end(),ShowReview);


        std::cout << "Rating ++:\nRating\tBook\n";
        std::sort(books.begin(),books.end());
        for(auto & x : books)
            InflateReview(x);
        std::for_each(books.begin(),books.end(),ShowReview);
    }

    return 0;
}

bool operator<(const Review & r1,const Review & r2)
{
    if(r1.title < r2.title)
        return true;
    else if(r1.title == r2.title && r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool worseThan(const Review & r1, const Review & r2)
{
    if(r1.rating < r2.rating)
        return true;
    else
        return false;
}

bool FillReview(Review & rr)
{
    std::cout << "Enter book title (quit to quit): ";
    std::getline(std::cin,rr.title);
    if(rr.title == "quit")
        return false;
    std::cout << "Enter book rating: ";
    std::cin >> rr.rating;
    if(!std::cin)
        return false;
    //get rid of rest of input line
    while(std::cin.get() != '\n')
          continue;
    return true;
}

void ShowReview(const Review & rr)
{
    std::cout << rr.rating << "\t" << rr.title << std::endl;
}

void InflateReview(Review &r)
{
    r.rating++;
}
