#include <iostream>
#include <cstring>
const int arSize = 6;

template <typename T>
T maxn(T elements[], const unsigned int n); 

template<> 
char *maxn<char *>(char *arr[], const unsigned int n);

int task6() {
	int iar[arSize] = {1, 2, 3, 4, 5, 6};
	double dar[arSize] = {1.1, 2.15, 3.78, 4.56, 5.41, 6.20};
	char *car[arSize] = {"hello", "world", "wiskey", "war", "main",
			"revolution"};
	
	for(int i=0; i<arSize; i++) 
		std::cout << iar[i] << " ";
	std::cout << std::endl << "Max: " << maxn(iar, arSize) << std::endl;
	
	for(int i=0; i<arSize; i++) 
		std::cout << dar[i] << " ";
	std::cout << std::endl << "Max: " << maxn(dar, arSize) << std::endl;
	
	for(int i=0; i<arSize; i++) 
		std::cout << car[i] << " ";
	std::cout << std::endl << "Value: " << maxn(car, arSize) << "; " << 
			"Address of max: " << (void *) maxn(car, arSize) << std::endl;
	
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

template<>
char *maxn<char *>(char *arr[], const unsigned int n) {
	short int maximum = 0;
	for(int i=1; i<n; i++) 
		if(strlen(arr[i]) > strlen(arr[maximum]))
			maximum = i;
	return arr[maximum];
}
