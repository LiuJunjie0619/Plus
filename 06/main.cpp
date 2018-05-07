#include <iostream>
#include <fstream>

using namespace std;

enum test{a,b,c};
int main()
{
#if 0
    if(not 3<1)
    {
        cout << "ok" << endl;
    }

    cout << sizeof a << endl;
    cout << sizeof(int) << endl;
#endif

//    char ch;
//    cin >> ch;
//    cout << ch << endl;

//    int n;
//    cin >> n;
//    cout << n << endl;

//    double x;
//    cin >> x;
//    cout << x << endl;

//    char word[50];
//    cin >> word;
//    cout << word << endl;

//    char word[50];
//    cin.getline(word,50);
//    cout << word << endl;

//    char word2[50];
//    cin.get(word2,50);
//    cout << word2 << endl;
//    cin.get();
//    char word1[20];
//    cin.get(word1,20);
//    cout << word1 << endl;


#if 0
    ofstream outFile;
    ofstream fout;

    outFile.open("Test_ofstream.txt");
    outFile << "First Test ofstream." << endl;
    outFile.close();

    char filename[50];
    cin >> filename;
    cout << filename;
    fout.open(filename);
    fout << filename << "!111111Test this." << endl;
    fout << "1" << "2" << "3" << endl;
    fout.close();
#endif

#if 0
    ifstream inFile;
    inFile.open("a.txt");
    if(!inFile.is_open())
    {
        exit(EXIT_FAILURE);
    }

//    double wt;
//    inFile >> wt;
//    char line[81];
//    inFile.getline(line,81);
//    cout << "wt:" << wt << endl;
//    cout << "line:" << line << endl;

    double value;
    double sum = 0;
    int count = 0;
//    while(inFile.good())
//    {
//        ++count;
//        sum += value;
//        inFile >> value;
//    }

    while(inFile >> value)
    {
        ++count;
        sum +=value;
    }
    if(inFile.eof())
        cout << "inFile.eof().\n";
    else if(inFile.fail())
        cout << "inFile.fail()" << endl;
    else
        cout << "unknow" << endl;
    cout << "sum:" << sum << endl;
    cout << "count:" << count << endl;
    inFile.close();
#endif

#if 0
    bool x = true;
    if(!!x)
    {
        cout << "!!x" << endl;
    }
    else
    {
        cout << "else" << endl;
    }
#endif

#if 0
    char ch;
    int ct1,ct2;
    ct1 = ct2 = 0;
    while((ch = cin.get()) !='$')
    {
        cout << ch;
        ct1++;
        if(ch = '$')
            ct2++;
        cout << ch;
    }
    cout << "ct1:" << ct1 << ",ct2 = " << ct2 << endl;
#endif

    int line = 0;
    char ch;
    while(cin.get(ch) && ch !='Q')
    {
        if(ch == '\n')
            line++;
    }`

    cin.get();
    return 0;
}
