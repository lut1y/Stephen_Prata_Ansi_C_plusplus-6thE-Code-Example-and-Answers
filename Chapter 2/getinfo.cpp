// getinfo.cpp -- ���� � �����
#include <iostream>

int getinfo()
{
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                // ���� C++
    cout << "Here are two more. ";
    carrots = carrots + 2;
// ��������� ������ ��������� ������������ ������
    cout << "Now you have " << carrots << " carrots." << endl;
	// cin.get();
	// cin.get();
    return 0;
}
