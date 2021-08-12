#include <iostream>

void print_str(const char *str, int n=1);

int task1() {
	char str[20];
	std::cout << "Enter string: "<< std::endl;
	std::cin.getline(str, 20);
	std::cout << "***Function without second argument***" << std::endl; 
	print_str(str);
	std::cout << "***Function with second argument***" << std::endl;
	print_str(str, 5);
	
	return 0;
}

void print_str(const char *str, int n) {
	if(n>0) {
		std::cout << str << std::endl;
		print_str(str, n-1);
	}
}
