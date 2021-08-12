// waiting.cpp -- ������������� clock() � ����� ��������� ��������
#include <iostream>
#include <ctime> // ��������� ������� clock() � ��� clock_t
int waiting()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // �������������� � ����
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay )        // �������� ��������� �������
        ;                                   // �������� �������� �� ����� � �������
    cout << "done \a\n";
    // cin.get();
    // cin.get();
    return 0; 
}
