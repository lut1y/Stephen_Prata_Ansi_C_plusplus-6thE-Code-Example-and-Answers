#include <iostream>
using namespace std;
#include "string2.h"

int task2() {
	
	String2 s1(" and I am a C++ student.");
	String2 s2 = "Please enter your name: "; // ���� �����
	String2 s3;
	
	cout << s2;	// ������������� �������� <<
	cin >> s3;	// ������������� �������� >>
	s2 = "My name is " + s3;	// ������������� �������� =, +
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup();		// �������������� ������ � ������� �������
	cout << "The string\n" << s2 << "\ncontains " << s2.has('A')
		 << " 'A' character in it.\n";
	s1 = "red";			// String2(const char*),
						// ����� String2 & operator=(const String2 &)
	String2 rgb[3] = { String2(s1), String2("green"), String2("blue") };
	cout << "Enter the same of a primary color for mixing light: ";	// ���� �����
	String2 ans;
	bool success = false;
	while(cin >> ans) {
		ans.stringlow();
		for(int i=0; i<3; i++) { // �������������� ������ � ������ �������
			if (ans == rgb[i]) {	// ������������� �������� ==
				cout << "That's right!\n";
				success = true;
				break;
			}
		}
		if(success) break;
		else cout << "Try again!\n";
	}
	cout << "Bye\n"	;
	return 0;
}
