#include <iostream>
#include <cstring>
#include "classic.h"
void Classic::Report() const {
	Cd::Report();
	std::cout << "\tmain composition: " << main_composition
			<< std::endl; 
}

Classic::Classic(char * s1, char * s2, char * mc,
			int n, double x) : Cd(s1, s2, n, x) {
	strncpy(main_composition, mc, 49);
	main_composition[50] = '\0';		
}

Classic::Classic(const Cd & d, char * mc) : Cd(d) {
	strncpy(main_composition, mc, 49);
	main_composition[50] = '\0';	
}

Classic::~Classic() {}

Classic & Classic::operator=(const Classic & d) {
	if(this == &d)
		return *this;
	Cd::operator=(d);
	strncpy(main_composition, d.main_composition, 49);
	main_composition[50] = '\0';
	return *this;
}
