#include <iostream>
#include <string>

int task4() {
	std::string fname;
	std::string lname;
		
	std::cout << "Enter your first name: ";
	getline(std::cin, fname);
	std::cout << "Enter your last name: ";
	getline(std::cin, lname);
	lname += ", " + fname;
	std::cout << "Here's the information in a single string: " << lname << std::endl;
	
	return 0;
}
