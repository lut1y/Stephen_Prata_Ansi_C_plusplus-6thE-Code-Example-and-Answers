// mytime3.cpp  -- реализация методово класса Time
#include "mytime3.h"

Time3::Time3()
{
    hours = minutes = 0;
}

Time3::Time3(int h, int m )
{
    hours = h;
    minutes = m;
}

void Time3::AddMin(int m)
{
    minutes += m;
    hours += minutes / 60;
    minutes %= 60;
}

void Time3::AddHr(int h)
{
    hours += h;
}

void Time3::Reset(int h, int m)
{
    hours = h;
    minutes = m;
}

Time3 Time3::operator+(const Time3 & t) const
{
    Time3 sum;
    sum.minutes = minutes + t.minutes;
    sum.hours = hours + t.hours + sum.minutes / 60;
    sum.minutes %= 60;
    return sum;
}

Time3 Time3::operator-(const Time3 & t) const
{
    Time3 diff;
    int tot1, tot2;
    tot1 = t.minutes + 60 * t.hours;
    tot2 = minutes + 60 * hours;
    diff.minutes = (tot2 - tot1) % 60;
    diff.hours = (tot2 - tot1) / 60;
    return diff;
}

Time3 Time3::operator*(double mult) const
{
    Time3 result;
    long totalminutes = hours * mult * 60 + minutes * mult;
    result.hours = totalminutes / 60;
    result.minutes = totalminutes % 60;
    return result;
}

std::ostream & operator<<(std::ostream & os, const Time3 & t) {
    os << t.hours << " hours, " << t.minutes << " minutes";
    return os; 
}
