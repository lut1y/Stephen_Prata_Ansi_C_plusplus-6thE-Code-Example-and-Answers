// carrots.cpp -- программа по технологии производства пищевых продуктов
// использует и отображает переменную

#include <iostream>

int carrots()
{
    using namespace std;
    
    int carrots;            // объявление переменной целочисленного типа
    
    carrots = 25;            // присваивание значения переменной
    cout << "I have ";
    cout << carrots;        // отображение значения переменной
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;  // изменение переменной
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    // cin.get();
	return 0;
}
