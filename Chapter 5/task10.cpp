#include <iostream>

int task10() {
	using namespace std;
	int count, i, j;
	
	cout << "Enter count of string: ";
	cin >> count;
	for(i=1; i <= count; i++) {
		for(j = 0; j < (count-i); j++)
			cout << ".";
		
		for(; j < count; j++)
			cout << "*";
			
		cout << endl;	
	}
	return 0;
}
