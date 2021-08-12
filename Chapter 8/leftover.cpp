// leftover.cpp -- перегрузка функции left()
#include <iostream>
unsigned long left(unsigned long num, unsigned ct);
char *left(const char * str, int n = 1);

int leftover()
{
    using namespace std;
    char *trip = "Hawaii!!";    // тестовое значение
    unsigned long n = 12345678; // тестовое значение
    int i;
    char * temp;

    for (i = 1; i < 10; i++)
    {
        cout << left(n, i) << endl;
        temp = left(trip,i);
        cout << temp << endl;
        delete [] temp; // указатель на временную область хранения
    }
    // cin.get();
    return 0;

}

// возвращает первых ct цифр числа num.
unsigned long left(unsigned long num, unsigned ct)
{
    unsigned digits = 1;
    unsigned long n = num;

    if (ct == 0 || num == 0)
        return 0;       // возврат 0 в случае отсутствия цифр
    while (n /= 10)
        digits++;
    if (digits > ct) {
	    ct = digits - ct;
	    while (ct--)
	        num /= 10;
	    return num;     // возврат ct знаков слева
    }
    else                // если ct >= количества цифр
        return num;     // возврат числа целиком
}

// Возвращает указатель на новую строку, состоящую
// из n первых символов строки str.
/*char * left(const char * str, int n)
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
}*/
