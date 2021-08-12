#include <iostream>
#include <string>

struct CandyBar {
	std::string name;
	float weight;
	unsigned int cal;
};

int task5() {
	CandyBar snack = {"Mocha Munch", 2.3, 350};
	
	std::cout << snack.name << " has weight " << snack.weight << " oz, ";
	std::cout << snack.cal << " cal" << std::endl;
	
	return 0;
}
