#include <iostream>

double average_garmonic(int x, int y);

int task1() {
	int x, y;
	
	std::cout << "Enter pair of numbers: ";
	std::cout.precision(3);
	while((std::cin >> x >> y) && (x!=0 && y!=0)) {
		std::cout << "Average garmonic: " << average_garmonic(x, y) << std::endl;
		std::cout << "Enter next pair of numbers: ";	
	}
	
	return 0;
}

double average_garmonic(int x, int y) {
	return 2.0 * x * y / (x + y);
}
