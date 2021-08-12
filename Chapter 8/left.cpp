// left.cpp -- строковая функция с аргументом по умолчанию
#include <iostream>
const int ArSize = 80;
char * left(const char * str, int n = 1);
int left()
{
    using namespace std;
    char sample[ArSize];
    cout << "Enter a string:\n";
    cin.get(sample, ArSize);
    char *ps = left(sample, 4);
    cout << ps << endl;
    delete [] ps;       // освободить старую строку
    ps = left(sample);
    cout << ps << endl;
    delete [] ps;       // освободить новую строку
    // cin.get();
    // cin.get();
    return 0;
}

// Эта функция возвращает указатель на новую строку
// состоящую из первых n символов строки str.
char * left(const char * str, int n)
{
    if(n < 0)
        n = 0;
    char * p = new char[n+1];
    int i;
    for (i = 0; i < n && str[i]; i++)
        p[i] = str[i];  // копирование символов
    while (i <= n)
        p[i++] = '\0';  // установка остальных символов строки в '\0'
    return p; 
}
