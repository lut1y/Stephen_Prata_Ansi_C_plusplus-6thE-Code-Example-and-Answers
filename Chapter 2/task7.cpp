#include <iostream>

typedef unsigned short int usi;

void printTime(usi hours, usi minutes);

int task7(void) {
	using namespace std;
	
	usi hours;
	usi minutes;
	
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	printTime(hours, minutes);
	
	return 0;
}

void printTime(usi hours, usi minutes) {
	using namespace std;
	cout << "Time: " << hours << ":" << minutes << endl;	
}
