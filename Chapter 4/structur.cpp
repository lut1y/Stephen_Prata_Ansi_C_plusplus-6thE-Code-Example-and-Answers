// structur.cpp -- a simple structure
#include <iostream>
struct inflatable   // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int structur()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // �������� name
        1.88,               // �������� volume
        29.99               // �������� price
    };  // guest - ����������� ���������� ���� inflatable
// ������������� ��������� ���������
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal - ������ ���������� ���� inflatable
// ����������: ��������� ���������� ������� ������������� 
// static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
// pal.name - ���� name ���������� pal
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    // cin.get();
    return 0; 
}
