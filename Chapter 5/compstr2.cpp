// compstr2.cpp -- сравнение строк с использованием класса string
#include <iostream>
#include <string>     // класс string
int compstr2()
{
    using namespace std;
    string word = "?ate";

    for (char ch = 'a'; word != "mate"; ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    // cin.get();
    return 0; 
}
