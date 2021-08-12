// support.cpp -- ������������� ������� ����������
// ������������� ������ � external.cpp
#include <iostream>
extern double warming;  // ������������� ���������� warming �� ������� �����

// ��������� �������
void update(double dt);
void local();

using std::cout;
void update(double dt)      // ������������ ���������� ����������
{
    extern double warming;  // �������������� ��������� ����������
    warming += dt;          // ������������� ���������� ���������� warming
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()                // ���������� ��������� ����������
{
    double warming = 0.8;   // ����� ���������� �������� ������� ����������

    cout << "Local warming = " << warming << " degrees.\n";
        // ������ � ���������� ���������� � ������� ��������
        // ���������� ���������
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}
