// firstref.cpp -- ����������� � ������������� ������
#include <iostream>
int firstref()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;   // rodents �������� �������

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;
    rodents++;
    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

// ��������� ���������� ������� ��� ��������� �������
// ��������� ���������� � ���� unsigned
    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;
    // cin.get();
    return 0; 
}
