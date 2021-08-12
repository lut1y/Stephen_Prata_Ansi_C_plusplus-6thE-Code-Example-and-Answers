#include <iostream>
//#include "task1.h"
#include "task2.h"

int task1() {
	using std::cin;
	using std::cout;
	using std::endl;
	using namespace TASK2;
			
	cout << "Enter name of wine: ";	// ввод названия вина
	char lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";	// ввод количества годов сбора винограда
	int yrs;
	cin >> yrs;
	Wine holding(lab, yrs);		// сохранение названия, лет,
								// создания массивов из yrs элементов
	holding.GetBottles();
	holding.Show();
	const int YRS = 3;
	int y[YRS] = { 1993, 1995, 1998 };
	int b[YRS] = { 48, 60, 72 };
	
	// Создание нового объекта, инициализация
	// с использованием данных из массивов y и b
	Wine more("Gushing Grape Red", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label()	// используется метод Label()
		 << ": " << more.sum() << endl;
	cout << "Bye\n";
	return 0;
}
