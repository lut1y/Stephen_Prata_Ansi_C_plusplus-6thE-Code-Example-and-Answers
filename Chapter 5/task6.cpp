#include <iostream>

int task6() {
	const char *Months[12] = {
		"Jan", "Feb",
		"Mar", "Apr", "May",
		"Jun", "Jul", "Aug",
		"Sep", "Oct", "Nov",
		"Dec"
	};
	int books[3][12];
	int sum_in_year, i, sum;
	int year;
	
	for(year = 0, sum = 0; year < 3; year++) {
		for(i=0, sum_in_year=0; i<12; i++) {
			std::cout << "In " << Months[i] << " was selled: ";
			std::cin >> books[year][i];
			sum_in_year += books[year][i];
		}
		std::cout << "In " << year + 1 << " was selled " << sum_in_year << std::endl;
		sum += sum_in_year;
	}
	
	std::cout << "Volume of selling: " << sum << std::endl;
	return 0;
}
