#include <iostream>

int task5() {
	const char *Months[12] = {
		"Jan", "Feb",
		"Mar", "Apr", "May",
		"Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov",
		"Dec"
	};
	int books[12];
	int sum = 0;
	
	for(int i=0; i<12; i++) {
		std::cout << "In " << Months[i] << " was selled: ";
		std::cin >> books[i];
		sum += books[i];
	}
	
	std::cout << "Volume of selling: " << sum << std::endl;
	return 0;
}
