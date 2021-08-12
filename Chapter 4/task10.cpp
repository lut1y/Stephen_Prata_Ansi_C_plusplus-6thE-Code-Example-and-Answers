#include <iostream>
#include <array>

int task10(void) {
	using namespace std;
	array<float, 3> res;
	float sum = 0.0f;
	
	for(int i=0; i<3; i++) {
		cout << "Enter result #" << i+1 << ": ";
		cin >> res[i];
		sum += res[i];
	}
	cout << std::endl;
	for(int i=0; i<3; i++) 
		cout << "result #" << i+1 << ": " << res[i] << endl;
	cout.precision(2);
	cout << "Average: " << sum / 3 << endl;
	
	return 0;
}
