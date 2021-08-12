#include <iostream>
#ifndef _TASK6_H_
#define _TASK6_H_
class Stonewt3 {
private:
    enum {Lbs_per_stn = 14};      // ������ �� �����
    int stone;                    // ������ �������
    double pds_left;              // ������� ����� ������
    double pounds;                // ����� ��� � �����
public:
    Stonewt3(double lbs);          // ����������� ��� �������� double ������
    Stonewt3(int stn, double lbs); // ���������� ��� �������� � ������� � ������
    Stonewt3();                    // ����������� �� ���������
    ~Stonewt3();
    void show_lbs() const;        // ����������� ���� � ������� ������
    void show_stn() const;        // ����������� ���� � ������� �������
// ������� ��������������
    operator int() const;
    operator double() const;
// ������� ���������
	bool operator>(Stonewt3 & st) const;
	bool operator<(Stonewt3 & st) const;
	bool operator==(Stonewt3 & st) const;
	bool operator!=(Stonewt3 & st) const;
	bool operator>=(Stonewt3 & st) const;
	bool operator<=(Stonewt3 & st) const;
	
	friend std::ostream & operator<<(std::ostream & os, const Stonewt3 & st3);
};


#endif
