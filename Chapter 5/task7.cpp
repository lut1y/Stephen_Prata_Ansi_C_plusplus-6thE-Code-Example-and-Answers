#include <iostream>
#include <string>

int task7() {
	using namespace std;
	struct Car {
		string name;
		int year;
	};
	int count;
	
	cout << "How much auto in catalog? ";
	cin >> count; cin.get();
	
	Car *car = new Car[count];
	for(int i=0; i<count; i++) {
		cout << "Auto #" << i+1 << ":" << endl;
		cout << "Enter name: ";
		getline(cin, (car+i)->name);
		cout << "Enter year: ";
		cin >> (car+i)->year; cin.get();
	} 
	cout << endl << "Your collection: " << endl;
	
	for(int i=0; i<count; i++) 
		cout << (car + i)->year << " " << (car + i)->name << endl;
	
	
	delete [] car;
	return 0;
}
