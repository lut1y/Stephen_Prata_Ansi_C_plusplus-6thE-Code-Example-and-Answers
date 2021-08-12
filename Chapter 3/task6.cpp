#include <iostream>

int task6() {
	using namespace std;
	
	float km, liter;
	
	cout << "Enter count of kilometers: ";
	cin >> km;
	cout << "Enter count of liters: ";
	cin >> liter;
	cout << "In 100 km : " << (double)(liter / km * 100.0) << " liters.";
	
	return 0;	
}
