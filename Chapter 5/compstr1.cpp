// compstr1.cpp -- сравнение строк с использованием массивов
#include <iostream>
#include <cstring>     // прототип для strcmp()
int compstr1()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    // cin.get();
    return 0; 
}
