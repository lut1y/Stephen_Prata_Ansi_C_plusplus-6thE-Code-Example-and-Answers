// mytime3.h -- класс Time с друзьями
#ifndef MYTIME3_H_
#define MYTIME3_H_
#include <iostream>

class Time3 {
private:
    int hours;
    int minutes;
public:
    Time3();
    Time3(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time3 operator+(const Time3 & t) const;
    Time3 operator-(const Time3 & t) const;
    Time3 operator*(double n) const;    
//    void operator<<(std::ostream & os) {
//    	os << hours << " hours";
//	}
    friend Time3 operator*(double m, const Time3 & t)
        { return t * m; }   // встроенное определение
    friend std::ostream & operator<<(std::ostream & os, const Time3 & t);	
};
#endif
