#include <iostream>
#include "task2.h"

int task2_() {
	using std::cout;
	using std::endl;
	
	Person one;							// ������������ ����������� �� ���������
	Person two("Smythecraft");			// ������������ ����������� #2
										// � ����� ���������� �� ���������
	Person three("Dimwiddy", "Sam");	// ������������ ���������� #2,
										// ��� ���������� �� ���������
	one.Show();
	cout << endl;
	one.FormalShow();	
	// � �.�. ��� �������� two � three
	two.Show();
	cout << endl;
	two.FormalShow();	
	
	three.Show();
	cout << endl;
	three.FormalShow();
	
	
	return 0;
}
