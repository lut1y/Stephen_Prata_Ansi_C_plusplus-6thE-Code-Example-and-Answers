// mytime2.h -- класс Time перегрузки операции
#ifndef MYTIME2_H_
#define MYTIME2_H_

class Time2 {
private:
    int hours;
    int minutes;
public:
    Time2();
    Time2(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time2 operator+(const Time2 & t) const;
    Time2 operator-(const Time2 & t) const;
    Time2 operator*(double n) const;
    void Show() const;
};
#endif
