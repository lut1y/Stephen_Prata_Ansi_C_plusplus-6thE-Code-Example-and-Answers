#include <iostream>
#include <cctype>

void transUp(std::string & str);

int task3() {
	std::string sen;
	
	std::cout << "Enter a string (q to quit): ";
	
	while(getline(std::cin, sen) && sen != "q") {
		transUp(sen);
		std::cout << sen << std::endl;
		std::cout << "Enter a string (q to quit): "; 
	}
	std::cout << "Bye." << std::endl;	
	return 0;
}

void transUp(std::string & str) {
	int i;
	while(str[i]) {
		str[i] = toupper(str[i]);
		i++;
	}
}
