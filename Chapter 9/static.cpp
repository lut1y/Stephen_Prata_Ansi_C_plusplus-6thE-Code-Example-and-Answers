// static.cpp -- использование статической локальной переменной
#include <iostream>
// константы
const int ArSize = 10;

// прототип функции
void strcount(const char * str);

int static_()
{
    using namespace std;
    char input[ArSize];
    char next;

    cout << "Enter a line:\n";
    cin.get(input, ArSize);
    while (cin)
    {
        cin.get(next);
        while (next != '\n')    // строка не помещается
            cin.get(next);      // избавиться от остатка
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout << "Bye\n";
// code to keep window open for MSVC++
/*
cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0;
}

void strcount(const char * str)
{
    using namespace std;
    static int total = 0;        // статическая локальная переменная
    int count = 0;               // автоматическая локальная переменная

    cout << "\"" << str <<"\" contains ";
    while (*str++)               // переход к концу строки
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
