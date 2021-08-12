// stonewt1.cpp -- методы класса Stonewt + функции преобразования
#include <iostream>
using std::cout;
#include "stonewt1.h"

// конструирует объект Stonewt из значения типа double
Stonewt1::Stonewt1(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // целочисленное деление
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// конструирует объект Stonewt из стоунов и значения типа double
Stonewt1::Stonewt1(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
}

Stonewt1::Stonewt1()          // конструктор по умолчанию, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt1::~Stonewt1() {}      // деструктор

// Отображение веса в стоунах
void Stonewt1::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// Отображение веса в фунтах
void Stonewt1::show_lbs() const {
    cout << pounds << " pounds\n";
}

// Функции преобразования
Stonewt1::operator int() const {
    return int (pounds + 0.5);

}

Stonewt1::operator double() const {
    return pounds; 
}
