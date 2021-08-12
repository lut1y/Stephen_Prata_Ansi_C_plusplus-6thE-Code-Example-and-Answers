// stonewt1.h -- ������������������ ����������� ������ Stonewt
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt1 {
private:
    enum {Lbs_per_stn = 14};      // ������ �� �����
    int stone;                    // ������ �������
    double pds_left;              // ������� ����� ������
    double pounds;                // ����� ��� � �����
public:
    Stonewt1(double lbs);          // ����������� ��� �������� double ������
    Stonewt1(int stn, double lbs); // ���������� ��� �������� � ������� � ������
    Stonewt1();                    // ����������� �� ���������
    ~Stonewt1();
    void show_lbs() const;        // ����������� ���� � ������� ������
    void show_stn() const;        // ����������� ���� � ������� �������
// ������� ��������������
    operator int() const;
    operator double() const;
};
#endif
