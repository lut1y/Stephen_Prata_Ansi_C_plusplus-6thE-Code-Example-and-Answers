#include <iostream>

const int SIZE = 10;
int Fill_array(double *arr, int n);
void Show_array(double *arr, int n);
void Reverse_array(double *arr, int n);

int task6() {
	double ar[SIZE];
	int count = Fill_array(ar, SIZE);
	Show_array(ar, count);
	Reverse_array(ar, count);
	Show_array(ar, count);
	
	return 0;
}

void Reverse_array(double *arr, int n) {
	// 2 5 6 7 8 => 8 7 6 5 2
	// 2 5 7 8 => 8 7 5 2
	double temp;
	for(int i=0; i<n/2; i++) {
		temp = arr[i]; arr[i] = arr[n-1-i]; arr[n-1-i] = temp;
	}	
}

void Show_array(double *arr, int n) {
	for(int i=0; i<n; i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}

int Fill_array(double *arr, int n) {
	int i;
	for(i=0; i<n, !std::cin.fail(); 
		std::cout << "Enter number #" << i+1 << ": ",
		std::cin >> arr[i], 
		i++) ;		
	if(std::cin.fail()) {
		std::cin.clear(); i--;
	}
	return i;
}
