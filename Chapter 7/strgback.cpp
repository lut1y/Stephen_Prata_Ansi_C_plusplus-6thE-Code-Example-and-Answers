// strgback.cpp -- функция, возвращающая указатель на char
#include <iostream>
char * buildstr(char c, int n);     // прототип
int strgback()
{
    using namespace std;
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter an integer: ";
    cin >> times;
    char *ps = buildstr(ch, times);
    cout << ps << endl;
    delete [] ps;                   // освобождение памяти
    ps = buildstr('+', 20);         // повторное использование указателя
    cout << ps << "-DONE-" << ps << endl;
    delete [] ps;                   // освобождение памяти
    // cin.get();
    // cin.get();
    return 0;
}

// строит строку из n символов c
char * buildstr(char c, int n)
{
    char * pstr = new char[n + 1];
    pstr[n] = '\0';         // завершение строки
    while (n-- > 0)
        pstr[n] = c;        // заполнение остатка строки
    return pstr; 
}
