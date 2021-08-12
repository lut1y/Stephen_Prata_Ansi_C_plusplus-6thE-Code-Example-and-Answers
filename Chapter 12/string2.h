// string2.h -- ������������ � ����������� ���������� ������

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String2 {
private:
    char * str;             		// ��������� �� ������
    int len;                		// ����� ������
    static int num_strings; 		// ���������� ��������
    static const int CINLIM = 80;  	// ������ ����� ��� cin
public:
// ������������ � ������ ������
    String2(const char * s); 		// �����������
    String2();               		// ����������� �� ���������
    String2(const String2 &); 		// ����������� �����������
    ~String2();              		// ����������
    int length () const { return len; }
// ������ ������������� ��������
    String2 & operator=(const String2 &);
    String2 & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;    
    
    String2 & operator+(const String2 & str);
    void stringlow();
    void stringup();
    int has(char ch);
// ������������� ������� ������������� ��������
    friend bool operator<(const String2 &st, const String2 &st2);
    friend bool operator>(const String2 &st1, const String2 &st2);
    friend bool operator==(const String2 &st, const String2 &st2);
    friend ostream & operator<<(ostream & os, const String2 & st);
    friend istream & operator>>(istream & is, String2 & st);
    
    friend String2 operator+(const char * str1, const String2 & str2);
// ����������� �������
    static int HowMany();
};
#endif
