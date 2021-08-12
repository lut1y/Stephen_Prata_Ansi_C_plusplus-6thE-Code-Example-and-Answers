// stonewt.h -- ����������� ������ Stonewt
#ifndef _TASK5_H_
#define _TASK5_H_
class Stonewt2 {
public:
	enum Status { STINT, STFLOAT };
private:	
    enum {Lbs_per_stn = 14};      // ������ �� �����
    int stone;                    // ����� �������
    double pds_left;              // ������� ����� ������
    double pounds;                // ����� ��� � ������    
    Status status;
public:
	Stonewt2();                     // ���������� �� ���������
    Stonewt2(double lbs, Status form = STINT);          // ����������� ��� �������� � ������
    Stonewt2(int stn, double lbs, Status form = STINT); // ����������� ��� �������� � ������ � ������    
    ~Stonewt2();
    void show_lbs() const;        // ����������� ���� � ������� ������
    void show_stn() const;        // ����������� ���� � ������� �������
    Stonewt2 operator+(const Stonewt2 & st2) const;
    Stonewt2 operator-(const Stonewt2 & st2) const;
    Stonewt2 operator*(double n) const;
    
    friend std::ostream & operator<<(std::ostream & os, const Stonewt2 & st2);
};
#endif
