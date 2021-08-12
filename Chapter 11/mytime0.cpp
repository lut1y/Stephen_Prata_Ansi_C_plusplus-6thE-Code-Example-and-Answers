// mytime0.cpp  -- реализация методов Time
#include <iostream>
#include "mytime0.h"

Time0::Time0() {
    hours = minutes = 0;
}

Time0::Time0(int h, int m ) {
    hours = h;
    minutes = m;
}

void Time0::AddMin(int m) {
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time0::AddHr(int h) {
    hours += h;
}

void Time0::Reset(int h, int m) {
    hours = h;
    minutes = m;
}

const Time0 Time0::Sum(const Time0 & t) const {
	// в целях оптимального использования памяти 
	// используется ссылка "const Time & t" 
    Time0 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

void Time0::Show() const {
    std::cout << hours << " hours, " << minutes << " minutes";
}
