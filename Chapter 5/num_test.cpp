// num_test.cpp -- ������������� �������� �������� � �����
#include <iostream>
int num_test()
{
    using namespace std;
    cout << "Enter the starting countdown value: ";
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)     // �����������, ����� i ����� 0
        cout << "i = " << i << "\n";
    cout << "Done now that i = " << i << "\n";
    // cin.get();
    // cin.get();
    return 0;
}
