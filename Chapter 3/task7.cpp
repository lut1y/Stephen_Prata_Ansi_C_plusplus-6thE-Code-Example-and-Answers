#include <iostream>

int task7() {
	using namespace std;
	
	float expense;
	const float miles_per_km = 0.6214;
	const float liters_per_gallon = 3.875;
	
	cout << "Enter expense of oil (liter/100km): ";
	cin >> expense;
	cout << "Answer: " << int {1/(expense * (1/3.875)/62.14)};
	
	return 0;	
}
