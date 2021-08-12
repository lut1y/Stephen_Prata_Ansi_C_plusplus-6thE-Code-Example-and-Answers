// external.cpp -- ������� ����������
// ������������� ������ � support.cpp
#include <iostream>
// ������� ����������
double warming = 0.3;	// ���������� warming ����������

// ��������� �������
void update(double dt);
void local();

int external()		// ���������� ���������� ����������
{
    using namespace std;
    cout << "Global warming is " << warming << " degrees.\n";
    update(0.1);	// ����� �������, ���������� warming
    cout << "Global warming is " << warming << " degrees.\n";
    local();		// ����� ������� � ��������� ���������� warming
    cout << "Global warming is " << warming << " degrees.\n";
    // cin.get();
    return 0;
}
