#include <iostream>
//#include "task1.h"
#include "task2.h"

int task1() {
	using std::cin;
	using std::cout;
	using std::endl;
	using namespace TASK2;
			
	cout << "Enter name of wine: ";	// ���� �������� ����
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";	// ���� ���������� ����� ����� ���������
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);		// ���������� ��������, ���,
								// �������� �������� �� yrs ���������
	holding.GetBottles();
	holding.Show();
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	
	// �������� ������ �������, �������������
	// � �������������� ������ �� �������� y � b
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label()	// ������������ ����� Label()
		 << ": " << more.sum() << endl;
	cout << "Bye\n";
	return 0;
}
