#include <iostream>
#include <string>

int task7() {
	using namespace std;
	
	struct Pizza {
		char name_company[40];
		int diametr_sm;
		float weight;
	} pizza;
	
	cout << "Enter company's name: ";
	cin.get(pizza.name_company, 41).get();
	cout << "Enter diametr: ";
	cin >> pizza.diametr_sm;
	cout << "Enter weight (gr): ";
	cin >>pizza.weight;
	
	cout << "Pizza \"" << pizza.name_company << "\" has " << pizza.diametr_sm;
	cout << " sm and weight is " << pizza.weight << " gr." << endl;
	return 0;
}
