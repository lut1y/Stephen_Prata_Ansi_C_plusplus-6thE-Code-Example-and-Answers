#include <iostream>

int task3(void) {
	using namespace std;
	int sum = 0, num;
	
	cout << "Enter first number: ";
	while((cin >> num) && num != 0) {
		sum += num;
		cout << "Enter next number: ";
	}
	
	cout << "Sum: " << sum << endl;
	return 0;
}
