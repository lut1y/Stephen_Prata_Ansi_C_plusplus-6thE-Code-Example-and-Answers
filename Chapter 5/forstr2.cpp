// forstr2.cpp -- обращение порядка элементов массива
#include <iostream>
#include <string>
int forstr2()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // физическая модификация объекта string
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
    {                       // начало блока
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }                       // конец блока
    cout << word << "\nDone\n";
    // cin.get();
    // cin.get();
    return 0; 
}
