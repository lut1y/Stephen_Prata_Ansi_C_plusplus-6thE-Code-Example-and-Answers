// address.cpp -- ������������� �������� & ��� ���������� ������
#include <iostream>
int address()
{
    using namespace std;
    int donuts = 6;
    double cups = 4.5;

    cout << "donuts value = " << donuts;
    cout << " and donuts address = " << &donuts << endl;
// ����������: ����� ������������ ������������ unsigned (&donuts)
// � unsigned (&cups)
    cout << "cups value = " << cups;
    cout << " and cups address = " << &cups << endl;
    // cin.get();
    return 0; 
}
