#include <iostream>

double calcutate(double, double, double (*pf)(double, double));
double add(double x, double y);
double multiple(double x, double y);
double divide(double x, double y);

int task10() {
	
	double q = calcutate(2.5, 10.4, add);
	std::cout << "Add: " << q << std::endl;	
	q = calcutate(2.5, 10.4, multiple);
	std::cout << "Multiply: "<< q << std::endl;
	
	double r;
	/*std::cout << "Enter pair x and y: "; 
	while ((std::cin >> q >> r) && (q != 0 && r != 0)) {
		std::cin.ignore();
		std::cout << "Add: " << calcutate(q, r, add) << std::endl;	
		std::cout << "Multiply: "<< calcutate(q, r, multiple) << std::endl;
		std::cout << "Enter next pair x and y: ";
	}*/
	
	double (*pf[3]) (double, double) = {add, multiple, divide};
	
	for(int i=0; i<3; i++) {
		std::cout << calcutate(8, 4, pf[i]) << std::endl;
	}
	
		
	return 0;
}

double calcutate(double x, double y, double (*pf)(double, double)) {
	return (*pf) (x, y);
}

double add(double x, double y) {
	return x + y;
}

double multiple(double x, double y) {
	return x * y;
}

double divide(double x, double y) {
	return x / y;
}

