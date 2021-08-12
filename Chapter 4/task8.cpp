#include <iostream>

struct Pizza {
	char name_company[40];
	int diametr_sm;
	float weight;
};

int task8() {
	using namespace std;
	
	Pizza *pizza = new Pizza; 
	
	cout << "Enter diametr: ";
	cin >> pizza->diametr_sm;
	cin.get();
	cout << "Enter company's name: ";
	cin.getline(pizza->name_company, 41);
	cout << "Enter weight (gr): ";
	cin >>pizza->weight;
	
	cout << "Pizza \"" << pizza->name_company << "\" has " << pizza->diametr_sm;
	cout << " sm and weight is " << pizza->weight << " gr." << endl;
	
	delete pizza;
	return 0;
}
