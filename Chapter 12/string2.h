// string2.h -- исправленное и расширенное объ€вление класса

#ifndef STRING2_H_
#define STRING2_H_
#include <iostream>
using std::ostream;
using std::istream;

class String2 {
private:
    char * str;             		// указатель на строку
    int len;                		// длина строки
    static int num_strings; 		// количество объектов
    static const int CINLIM = 80;  	// предел ввода дл€ cin
public:
// конструкторы и другие методы
    String2(const char * s); 		// конструктор
    String2();               		// конструктор по умолчанию
    String2(const String2 &); 		// конструктор копировани€
    ~String2();              		// деструктор
    int length () const { return len; }
// методы перегруженных операций
    String2 & operator=(const String2 &);
    String2 & operator=(const char *);
    char & operator[](int i);
    const char & operator[](int i) const;    
    
    String2 & operator+(const String2 & str);
    void stringlow();
    void stringup();
    int has(char ch);
// дружественные функции перегруженных операций
    friend bool operator<(const String2 &st, const String2 &st2);
    friend bool operator>(const String2 &st1, const String2 &st2);
    friend bool operator==(const String2 &st, const String2 &st2);
    friend ostream & operator<<(ostream & os, const String2 & st);
    friend istream & operator>>(istream & is, String2 & st);
    
    friend String2 operator+(const char * str1, const String2 & str2);
// статическа€ функци€
    static int HowMany();
};
#endif
