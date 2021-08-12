#include <iostream>
using namespace std;
#include "classic.h"	// будет содержать #include cd.h
void Bravo(const Cd & disk);
int task1() {
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	
	Cd *pcd = &c1;
	// Непосредственно использование объектов
	cout << "Using object directly:\n";
	c1.Report();	// использование метода Cd
	c2.Report();	// использование метода Classic
	// Использование указателя на объекты типа cd *
	cout << "Using type cd * pointer to objects:\n";
	pcd->Report();	// ипользование метода Cd для объекта cd
	pcd = &c2;
	pcd->Report();
	// Вызов функции с аргументом-ссылкой на Cd
	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);
	// Тестирование присваивания
	cout << "Testing assigment: ";
	Classic copy;
	copy = c2;
	copy.Report();
	
	return 0;
}

void Bravo(const Cd & disk) {
	disk.Report();
}
