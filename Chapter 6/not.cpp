// not.cpp -- ������������� ���������� �������� "��"
#include <iostream>
#include <climits>
bool is_int(double); 
int not_()
{
    using namespace std;
    double num;

    cout << "Yo, dude! Enter an integer value: ";
    cin >> num;
    while (!is_int(num))    // ������ �� ���� �������������� ��������
    {
        cout << "Out of range -- please try again: ";
        cin >> num;
    }
    int val = int (num);    // ���������� ����
    cout << "You've entered the integer " << val << "\nBye\n";
    // cin.get();
    // cin.get();
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN)   // use climits values
        return true;
    else
        return false; 
}
