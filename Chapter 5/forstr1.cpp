// forstr1.cpp -- использование цикла for для строки
#include <iostream>
#include <string>
int forstr1()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // отображение символов в обратном порядке
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n";
    // cin.get();
    // cin.get();
    return 0; 
}
