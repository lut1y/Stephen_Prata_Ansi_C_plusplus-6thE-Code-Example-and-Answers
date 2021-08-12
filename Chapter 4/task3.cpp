#include <iostream>
#include <cstring>

int task3() {
	char buf[81];
	
	std::cout << "Enter your first name: ";
	std::cin.get(buf, 81).get();
	char *result = new char[strlen(buf) + 1];
	strcpy(result, buf);
	std::cout << "Enter your last name: ";
	std::cin >> buf;
	result = strcat(strcat(buf, ", "), result);
	std::cout << "Here's the information in a single string: " << result << std::endl;
	
	return 0;
}
