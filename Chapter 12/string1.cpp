// string1.cpp -- методы класса String
#include <cstring>		// в некоторых случаях - string.h
#include "string1.h"    // включение <iostream>
using std::cin;
using std::cout;

// инициализация статического члена класса
int String::num_strings = 0;

// статический метод
int String::HowMany() {
    return num_strings;
}

// методы класса
String::String(const char * s) {   // создание класса String из C-строки
    len = std::strlen(s);          // установка размера
    str = new char[len + 1];       // ввыделение памяти
    std::strcpy(str, s);           // инициализация указателя
    num_strings++;                 // корректировка счетчика объектов
}

String::String() {                  // конструктор по умолчанию
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // строка по умолчанию
    num_strings++;
}

String::String(const String & st) {
    num_strings++;             // обработка обновления статического члена
    len = st.len;              // длина та же
    str = new char [len + 1];  // выделение памяти
    std::strcpy(str, st.str);  // копирование строки в новое место
}

String::~String()              // необходимый деструктор
{
    --num_strings;             // требуется
    delete [] str;             // требуется
}

// Методы перегруженных операций
// присваивание объекта String объекту String
String & String::operator=(const String & st) {
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// присваивание C-строки объекту String
String & String::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// Доступ для чтения и записи отдельных символов в неконстантном объекте String
char & String::operator[](int i) {
    return str[i];
}

// Доступ только для чтения отдельных символов в константном объекте String
const char & String::operator[](int i) const {
    return str[i];
}

// Дружественные функции перегружены операций

bool operator<(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String &st1, const String &st2) {
    return st2 < st1;
}

bool operator==(const String &st1, const String &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

// простой вывод String
ostream & operator<<(ostream & os, const String & st) {
    os << st.str;
    return os; 
}

// Простой ввод String
istream & operator>>(istream & is, String & st) {
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is; 
}
