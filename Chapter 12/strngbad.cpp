// strngbad.cpp -- методы класса StringBad
#include <cstring>		// в некоторых случа€ - string.h
#include "strngbad.h"
using std::cout;

// инициализаци€ статического члена класса
int StringBad::num_strings = 0;

// ћетоды класса

// —оздание StringBad из C-строки
StringBad::StringBad(const char * s)
{
    len = std::strlen(s);             // установка размера
    str = new char[len + 1];          // выделение пам€ти
    std::strcpy(str, s);              // инициализаци€ указател€
    num_strings++;                    // счетчик объектов
    cout << num_strings << ": \"" << str
         << "\" object created\n";    // дл€ целей отладки
}

StringBad::StringBad()                // конструтор по умолчанию
{
    len = 4;
    str = new char[4];
    std::strcpy(str, "C++");          // строка по умолчанию
    num_strings++;
    cout << num_strings << ": \"" << str
         << "\" default object created\n";  // дл€ целей отладки
}

StringBad::~StringBad()               // необходимый деструктор
{
    cout << "\"" << str << "\" object deleted, ";    // дл€ целей отладки
    --num_strings;                    // €вл€етс€ об€зательным
    cout << num_strings << " left\n"; // дл€ целей отладки
    delete [] str;                    // €ал€етс€ об€зательным
}

std::ostream & operator<<(std::ostream & os, const StringBad & st)
{
    os << st.str;
    return os; 
}
