// strgfun.cpp -- функция со строковым аргументом
#include <iostream>
unsigned int c_in_str(const char * str, char ch);
int strgfun()
{
    using namespace std;
    char mmm[15] = "minimum";    // строка в массиве
// некоторые системы требуют предварить char словом static
// чтобы разрешить инициализацию массива

    char *wail = "ululate";    // wail указывает на строку

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << ms << " m characters in " << mmm << endl;
    cout << us << " u characters in " << wail << endl;
    // cin.get();
    return 0;
}

// Эта функция подсчитывает количество символов ch в строке str
unsigned int c_in_str(const char * str, char ch)
{
    unsigned int count = 0;

    while (*str)        // завершение, когда *str равно '\0'
    {
        if (*str == ch)
            count++;
        str++;        // перемещение указателя на следующий символ
    }
    return count; 
}
