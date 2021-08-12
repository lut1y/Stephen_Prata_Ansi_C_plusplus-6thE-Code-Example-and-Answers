#include <iostream>

int task1() {
	using namespace std;
	
	double inches;
	const double Foot_per_inch = 12;
		
	cout << "Enter growth in inch: _____\b\b\b\b\b";
	cin >> inches;
	cout << inches << " inch(es) = " << inches * Foot_per_inch << " foot(s)." << endl;
	
	return 0;
}
