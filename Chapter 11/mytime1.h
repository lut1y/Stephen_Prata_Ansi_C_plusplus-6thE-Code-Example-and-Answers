// mytime1.h -- класс Time после перегрузки операции
#ifndef MYTIME1_H_
#define MYTIME1_H_

class Time1 {
private:
    int hours;
    int minutes;
public:
    Time1();
    Time1(int h, int m = 0);
    void AddMin(int m);
    void AddHr(int h);
    void Reset(int h = 0, int m = 0);
    Time1 operator+(const Time1 & t) const; // заместо const Time Sum(const Time & t) const;
    void Show() const;
};
#endif
