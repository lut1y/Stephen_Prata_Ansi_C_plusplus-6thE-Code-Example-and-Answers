#include <iostream>
#include <array>

int input_arr(int arr[], int);
void display(int arr[], int n);
double aver_val(int arr[], int n);

int task2() {
	int results[10];
	int count;
	double average;
	
	count = input_arr(results, 10);	
	display(results, count);
	std::cout << "Average: " << aver_val(results, count) << std::endl;
	
	return 0;
}

double aver_val(int arr[], int n) {
	int sum, i;
	for(i=0, sum = 0; i < n; i++) 
		sum += arr[i];
	return (double) sum / n;
}

void display(int arr[], int n) {
	for(int i=0; i < n; i++) {
		std::cout << arr[i] << ", ";
	}
	std::cout << "\b\b." << std::endl;
}

int input_arr(int arr[], int) {
	int res, i=0;
	
	std::cout << "Enter result #" << i+1 << ": ";
	while((std::cin >> res) && (res > 0)) {
		arr[i] = res;
		i++;		
		std::cout << "Enter result #" << i+1 << ": ";			
	}
	return i;
}
