// stonewt1.cpp -- ������ ������ Stonewt + ������� ��������������
#include <iostream>
using std::cout;
#include "stonewt1.h"

// ������������ ������ Stonewt �� �������� ���� double
Stonewt1::Stonewt1(double lbs)
{
    stone = int (lbs) / Lbs_per_stn;    // ������������� �������
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

// ������������ ������ Stonewt �� ������� � �������� ���� double
Stonewt1::Stonewt1(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
}

Stonewt1::Stonewt1()          // ����������� �� ���������, wt = 0
{
    stone = pounds = pds_left = 0;
}

Stonewt1::~Stonewt1() {}      // ����������

// ����������� ���� � �������
void Stonewt1::show_stn() const
{
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// ����������� ���� � ������
void Stonewt1::show_lbs() const {
    cout << pounds << " pounds\n";
}

// ������� ��������������
Stonewt1::operator int() const {
    return int (pounds + 0.5);

}

Stonewt1::operator double() const {
    return pounds; 
}
