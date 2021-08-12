// string2.cpp -- ������ ������ String2
#include <cstring>		// � ��������� ������� - string.h
#include <cctype>
#include "string2.h"    // ��������� <iostream>
using std::cin;
using std::cout;

// ������������� ������������ ����� ������
int String2::num_strings = 0;

// ����������� �����
int String2::HowMany() {
    return num_strings;
}

// ������ ������
String2::String2(const char * s) {   // �������� ������ String �� C-������
    len = std::strlen(s);          // ��������� �������
    str = new char[len + 1];       // ���������� ������
    std::strcpy(str, s);           // ������������� ���������
    num_strings++;                 // ������������� �������� ��������
}

String2::String2() {                  // ����������� �� ���������
    len = 4;
    str = new char[1];
    str[0] = '\0';                 // ������ �� ���������
    num_strings++;
}

String2::String2(const String2 & st) {
    num_strings++;             // ��������� ���������� ������������ �����
    len = st.len;              // ����� �� ��
    str = new char [len + 1];  // ��������� ������
    std::strcpy(str, st.str);  // ����������� ������ � ����� �����
}

String2::~String2()              // ����������� ����������
{
    --num_strings;             // ���������
    delete [] str;             // ���������
}

// ������ ������������� ��������
// ������������ ������� String ������� String
String2 & String2::operator=(const String2 & st) {
    if (this == &st)
        return *this;
    delete [] str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

// ������������ C-������ ������� String
String2 & String2::operator=(const char * s) {
    delete [] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

// ������ ��� ������ � ������ ��������� �������� � ������������� ������� String
char & String2::operator[](int i) {
    return str[i];
}

// ������ ������ ��� ������ ��������� �������� � ����������� ������� String
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

// ������������� ������� ����������� ��������
bool operator<(const String2 &st1, const String2 &st2) {
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String2 &st1, const String2 &st2) {
    return st2 < st1;
}

bool operator==(const String2 &st1, const String2 &st2) {
    return (std::strcmp(st1.str, st2.str) == 0);
}

// ������� ����� String
ostream & operator<<(ostream & os, const String2 & st) {
    os << st.str;
    return os; 
}

// ������� ���� String
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
