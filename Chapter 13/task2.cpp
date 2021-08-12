#include <iostream>
using namespace std;
#include "classic_dma.h"	// ����� ��������� #include cd.h
void Bravo1(const Cd_dma & disk);
int task2() {
	Cd_dma c1("Beatles", "Capitol", 14, 35.5);
	Classic_dma c2 = Classic_dma("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	
	Cd_dma *pcd = &c1;
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
	Bravo1(c1);
	Bravo1(c2);
	// ������������ ������������
	cout << "Testing assigment: ";
	Classic_dma copy;
	copy = c2;
	copy.Report();
	
	return 0;
}

void Bravo1(const Cd_dma & disk) {
	disk.Report();
}
