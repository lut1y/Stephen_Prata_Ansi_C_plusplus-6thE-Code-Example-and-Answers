#include <iostream>
using namespace std;
#include "classic.h"	// ����� ��������� #include cd.h
void Bravo(const Cd & disk);
int task1() {
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	
	Cd *pcd = &c1;
	// ��������������� ������������� ��������
	cout << "Using object directly:\n";
	c1.Report();	// ������������� ������ Cd
	c2.Report();	// ������������� ������ Classic
	// ������������� ��������� �� ������� ���� cd *
	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();	// ������������ ������ Cd ��� ������� cd
	pcd = &c2;
	pcd->Report();
	// ����� ������� � ����������-������� �� Cd
	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	// ������������ ������������
	cout << "Testing assigment: ";
	Classic copy;
	copy = c2;
	copy.Report();
	
	return 0;
}

void Bravo(const Cd & disk) {
	disk.Report();
}
