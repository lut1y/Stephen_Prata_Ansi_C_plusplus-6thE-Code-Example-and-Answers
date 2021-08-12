// string2.cpp -- методы класса String2
#include <cstring>		// в некоторых случаях - string.h
#include <cctype>
#include "string2.h"    // включение <iostream>
using std::cin;
using std::cout;

// инициализация статического члена класса
int String2::num_strings = 0;

// статический метод
int String2::HowMany() {
    return num_strings;
}

// методы класса
String2::String2(const char * s) {   // создание класса String из C-строки
    len = std::strlen(s);          // установка размера
    str = new char[len + 1];       // ввыделение памяти
    std::strcpy(str, s);           // инициализация указателя
    num_strings++;                 // корректировка счетчика объектов
}

String2::String2() {                  // конструктор по умолчанию
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // строка по умолчанию
    num_strings++;
}

String2::String2(const String2 & st) {
    num_strings++;             // обработка обновления статического члена
    len = st.len;              // длина та же
    str = new char [len + 1];  // выделение памяти
    std::strcpy(str, st.str);  // копирование строки в новое место
}

String2::~String2()              // необходимый деструктор
{
    --num_strings;             // требуется
    delete [] str;             // требуется
}

// Методы перегруженных операций
// присваивание объекта String объекту String
String2 & String2::operator=(const String2 & st) {
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// присваивание C-строки объекту String
String2 & String2::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// Доступ для чтения и записи отдельных символов в неконстантном объекте String
char & String2::operator[](int i) {
    return str[i];
}

// Доступ только для чтения отдельных символов в константном объекте String
const char & String2::operator[](int i) const {
    return str[i];
}

String2 & String2::operator+(const String2 & str2) {
	
	char * str_old = str;	
	len += str2.len;
	str = new char[len+1];
	strcat(strcpy(str, str_old), str2.str);
	delete str_old;	
	
	return *this;
}

void String2::stringlow() {
	char * low_str = str;
	
	while(*low_str) {
		*low_str = tolower(*low_str);
		low_str++;
	}
}

void String2::stringup() {
	char * up_str = str;
	
	while(*up_str) {
		*up_str = toupper(*up_str);
		up_str++;
	}
}

int String2::has(char ch) {
	char * s = str;
	int ct = 0;
	
	while(*s) {
		if(*s == ch) ct++;
		s++;
	}
	return ct;
}

// Дружественные функции перегружены операций
bool operator<(const String2 &st1, const String2 &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String2 &st1, const String2 &st2) {
    return st2 < st1;
}

bool operator==(const String2 &st1, const String2 &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

// простой вывод String
ostream & operator<<(ostream & os, const String2 & st) {
    os << st.str;
    return os; 
}

// Простой ввод String
istream & operator>>(istream & is, String2 & st) {
    char temp[String2::CINLIM];
    is.get(temp, String2::CINLIM);
    if (is)
        st = temp;
    while (is && is.get() != '\n')
        continue;
    return is; 
}

String2 operator+(const char * str1, const String2 & str2) {	
	return String2(str1)+str2;
}
