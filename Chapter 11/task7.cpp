#include <iostream>
using namespace std;
#include "complex0.h"  // �� ��������� ��������� � complex.h

int task7() {
	complex a(3.0, 4.0); // ������������� ��������� c complex.h
	complex c;
	cout << "Enter a complex number (q to quit):\n";
		 //  ���� ������������ ����� (q ��� ����������)
	while(cin >> c) {
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
			//  �������� ������������ �����
		cout << "a is " << a << '\n';
		cout << "a + c is " << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a * c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter a complex number (q to number):\n";
	}
	cout << "Done!\n";
	return 0;
} 
