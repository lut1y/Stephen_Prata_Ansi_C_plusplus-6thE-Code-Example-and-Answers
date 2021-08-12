// pointer.cpp -- ���� ������ ����������-���������
#include <iostream>
int pointer()
{
    using namespace std;
    int updates = 6;        // ���������� ����������
    int * p_updates;        // ���������� ��������� �� int

    p_updates = &updates;   // ��������� ����� int ���������

// �������� �������� ����� ���������
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

// �������� ������ ����� ���������
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

// �������� �������� ����� ���������
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    // cin.get();
    return 0; 
}
