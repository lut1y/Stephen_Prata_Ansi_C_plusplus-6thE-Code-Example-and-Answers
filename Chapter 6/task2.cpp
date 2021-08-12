#include <iostream>
#include <array>

int task2() {
	using namespace std;
	
	array<double, 10> ar;
	int count;
	double average = 0.0f;
	
	cout << "Enter first value: ";	
	count = 0;
	while(cin >> ar[count])	{
		average += ar[count];
		count++;
		cout << "Enter next value: ";
	}
	average = average / count;
	cout << "Average: " << average << endl;
	cout << "Value higher of average: ";
	for(int i=0; i < count; i++) {
		if(ar[i] > average) cout << ar[i] << ", ";
	}
	cout << "\b\b.\n";	
	
	return 0;
}
