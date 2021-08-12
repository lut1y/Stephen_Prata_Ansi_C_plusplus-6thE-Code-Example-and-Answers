#include <iostream>
#include <string>

struct CandyBar {
	std::string name;
	float weight;
	unsigned int cal;
};

int task6() {
	CandyBar snack[3] = {
		{"Mocha Munch", 2.3, 350},
		{"Alpen Hold", 1.9, 240},
		{"Milka", 1.5, 100}};
		
	
	for(int i=0; i<3; i++) {
		std::cout << snack[i].name << " has weight " << snack[i].weight << " oz, ";
		std::cout << snack[i].cal << " cal" << std::endl;
	}
	return 0;
}
