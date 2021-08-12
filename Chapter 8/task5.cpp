#include <iostream>
const int arSize = 5;

template <typename T>
T maxn(T elements[], unsigned int n); 


int task5() {
	double dar[arSize];
	
	for(int i=0; i<arSize; i++) {
		std::cout << "Enter element #" << i+1 <<": ";
		std::cin >> dar[i];
	}
		
	for(int i=0; i<arSize; i++) 
		std::cout << dar[i] << " ";
	std::cout << std::endl << "Max: " << maxn(dar, arSize) << std::endl;
	
	return 0;
}

template <typename T>
T maxn(T elements[], unsigned int n) {
	T maximum = elements[0];
	for(int i=1; i<n; i++) 
		if(maximum < elements[i])
			maximum = elements[i];
	return maximum;
}
