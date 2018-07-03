#include <iostream>
#include <vector>
#include <string>
#include <forward_list>
#include <list>

template <typename T>
void output(const T & s)
{
    std::cout << s << " ";
}

int main()
{
    std::string arr[5] = {"001","002","003","004","005"};
    std::vector<std::string> dice(5);
    std::copy(arr, arr + 5, dice.begin());
    std::for_each(dice.begin(),dice.end(),output<std::string>);
    std::cout << std::endl;

    std::cout << "-----------------从5到10的初始化----------------" << std::endl;
    int int_arr[10] = {1,2,3,4,5,6,7,8,9,0};
    std::vector<int> dice2(int_arr,int_arr+5);
    std::vector<int>::iterator dice2_iter = dice2.begin()+3;
    std::cout << "dice2: " << *dice2_iter << std::endl;
    dice2.insert(dice2.begin(),666);
    std::cout << "dice2: " << *dice2_iter << std::endl;
    std::cout << "dice2 list: ";
    std::for_each(dice2.begin(),dice2.end(),output<int>);
    std::cout << std::endl;

    std::cout << "-------------初始化5个6------------------" << std::endl;
    std::vector<int> int01(5,6);
    std::for_each(int01.begin(),int01.end(),output<int>);
    std::cout << std::endl;

    std::cout << "--------------各种insert------------------" << std::endl;
    std::vector<std::string> arr2(2);
    arr2.clear();
    arr2.push_back("0001");
    arr2.push_back("0002");
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;
    arr2.insert(arr2.begin(),"0003");
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;

    arr2.insert(arr2.end(),5,"ok");
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;

    arr2.insert(arr2.begin(),arr,arr+5);
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;

    std::cout << "---------------各种删除-----------------" << std::endl;
    arr2.erase(arr2.begin());
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;

    arr2.erase(arr2.begin(),arr2.begin()+6);
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << std::endl;
    std::cout << "arr2 size:" << arr2.size() <<std::endl;
    std::cout << "index at [] *(arr2.begin())" << std::endl;
    std::cout << *(arr2.begin()) << " " << arr2[0] << std::endl;
    std::cout << *(arr2.begin()+1) << " " << arr2[1] << std::endl;
    std::cout << arr2.at(0) << std::endl;   //如果下标位置为空，会抛出out_of_range异常

//    std::cout << arr2[100] << std::endl;
//    std::cout << arr2.at(100) << std::endl;   //如果下标位置为空，会抛出out_of_range异常

    std::cout << std::endl;
    std::cout << "clear arr2.\n";
    arr2.clear();
    std::for_each(arr2.begin(),arr2.end(),output<std::string>);
    std::cout << "arr2 size:" << arr2.size() <<std::endl;

    std::cout << std::endl;
    std::cout << "forward_list.\n";
    std::forward_list<std::string> flist(5);
    std::copy(arr,arr+5,flist.begin());
    std::for_each(flist.begin(),flist.end(),output<std::string>);
    std::cout << std::endl;

    std::cout << "-----------------以下为list的程序内容-----------------" << std::endl;
    std::list<int> one(5,2);        //list of 5 2s
    std::list<int>::iterator one_begin =one.begin();
    //std::list<int>::iterator one_end = one.end();

    int stuff[5] = {1,2,4,8,6};
    std::list<int> two;
    two.insert(two.begin(),stuff,stuff+5);    

    int more[6] = {6,4,2,4,6,5};
    std::list<int> three(two);
    three.insert(three.end(),more,more+6);

    std::cout << "List one: ";
    std::for_each(one.begin(),one.end(),output<int>);
    std::cout << std::endl;
    std::cout << "List two: ";
    std::for_each(two.begin(),two.end(),output<int>);
    std::cout << std::endl;
    std::cout << "List three: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;

    std::list<int>::iterator two_1 = ++two.begin();
    std::cout << "two[1]: " << *two_1 << std::endl;
    two.push_front(111);
    std::cout << "List two: ";
    std::for_each(two.begin(),two.end(),output<int>);
    std::cout << std::endl;
    std::cout << "two[1]: " << *two_1 << std::endl;

    three.remove(2);
    std::cout << "List three minus 2s: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;
    three.splice(three.begin(),one);
    std::cout << "List three after splice: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl << "List one after three splice: ";
    for(one_begin;one_begin != three.end();++one_begin)
        std::cout << *one_begin << " ";
    std::cout << std::endl;

    std::cout << std::endl;
    std::cout << "List one: ";
    std::for_each(one.begin(),one.end(),output<int>);
    std::cout << std::endl;
    three.unique();
    std::cout << "List three after unique: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;
    three.sort();
    three.unique();
    std::cout << "List three after sort & unique:";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;
    two.sort();
    three.merge(two);
    std::cout << "Sorted two merged into three: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;
    three.unique();
    std::cout << "List three unique: ";
    std::for_each(three.begin(),three.end(),output<int>);
    std::cout << std::endl;




    return 0;
}
