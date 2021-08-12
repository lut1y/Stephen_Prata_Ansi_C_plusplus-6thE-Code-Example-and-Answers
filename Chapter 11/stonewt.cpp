// stonewt.cpp -- методы класса Stonewt 
#include <iostream>
using std::cout;
#include "stonewt.h"

// конструирует объект Stonewt из значения типа double
Stonewt::Stonewt(double lbs) {
    stone = int (lbs) / Lbs_per_stn;    // целочисленное деление
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// конструирует объект Stonewt из стоунов и значения типа double
Stonewt::Stonewt(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
}

Stonewt::Stonewt() {         // конструктор по умолчанию, wt = 0
    stone = pounds = pds_left = 0;
}

Stonewt::~Stonewt() {        // деструктор
	std::cout << "--- Destroyed " << this->pounds << std::endl;
}

// Отображение веса в стоунах
void Stonewt::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// Отображение веса в фунтах
void Stonewt::show_lbs() const {
    cout << pounds << " pounds\n";
}
