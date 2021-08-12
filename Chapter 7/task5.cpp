#include <iostream>

long long factorial(int n);

int task5() {
    using namespace std;
	int i;
	
	cout << "Enter number: ";
	while ((cin >> i) && i > -1) {
		cout << "!" << i << " = " << factorial(i) << endl;
		cout << "Enter next number: ";
	}
	
	cout << "Done\n";
    return 0;
}

long long factorial(int n) {
	if (n < 1) return 1;
	return n * factorial(n-1);
}
