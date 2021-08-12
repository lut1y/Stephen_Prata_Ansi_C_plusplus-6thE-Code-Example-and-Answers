#include <iostream>
using namespace std;
#include "classic_dma.h"	// будет содержать #include cd.h
void Bravo1(const Cd_dma & disk);
int task2() {
	Cd_dma c1("Beatles", "Capitol", 14, 35.5);
	Classic_dma c2 = Classic_dma("Piano Sonata in B flat, Fantasia in C",
		"Alfred Brendel", "Philips", 2, 57.17);
	
	Cd_dma *pcd = &c1;
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
	Bravo1(c1);
	Bravo1(c2);
	// Тестирование присваивания
	cout << "Testing assigment: ";
	Classic_dma copy;
	copy = c2;
	copy.Report();
	
	return 0;
}

void Bravo1(const Cd_dma & disk) {
	disk.Report();
}
