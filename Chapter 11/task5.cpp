#include <iostream>
using std::cout;
#include "task5.h"

// ������������ ������ Stonewt �� �������� ���� double
Stonewt2::Stonewt2(double lbs, Status form) {
    stone = int (lbs) / Lbs_per_stn;    // ������������� �������
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    status = form;
}

// ������������ ������ Stonewt �� ������� � �������� ���� double
Stonewt2::Stonewt2(int stn, double lbs, Status form) {
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
    status = form;
}

Stonewt2::Stonewt2() {         // ����������� �� ���������, wt = 0
    stone = pounds = pds_left = 0;
    status = STINT;
}

Stonewt2::~Stonewt2() {        // ����������
	std::cout << "--- Destroyed " << this->stone << std::endl;
}

// ����������� ���� � �������
void Stonewt2::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// ����������� ���� � ������
void Stonewt2::show_lbs() const {
    cout << pounds << " pounds\n";
}

std::ostream & operator<<(std::ostream & os, const Stonewt2 & st2) {
	if(st2.status == Stonewt2::STINT)
		os << st2.stone << " stone, " << st2.pds_left << " pounds\n";
	else if(st2.status == Stonewt2::STFLOAT)
		os << st2.pounds << " pounds\n";	
	else 
		os << "Format unknown!\n";
	return os;
}

Stonewt2 Stonewt2::operator+(const Stonewt2 & st2) const {
	return Stonewt2(this->pounds + st2.pounds);
}

Stonewt2 Stonewt2::operator-(const Stonewt2 & st2) const {
	return Stonewt2(this->pounds - st2.pounds);
}

Stonewt2 Stonewt2::operator*(double n) const {
	return Stonewt2(this->pounds * n);
}
