#include <iostream>

int task5() {
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	
	long long popWorld, popUS;
	
	cout << "Enter the world's population: ";
	cin >> popWorld;
	cout << "Enter the population of US: ";
	cin >> popUS;
	cout << "The population of the US is " << ((double) popUS/ (double) popWorld * 100);
	cout << "% of the world population.";
	
	return 0;	
}
