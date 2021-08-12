#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(char * s1, char * s2, int n, double x) {
	strcpy(perfomers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d) {
	strncpy(perfomers, d.perfomers, 49);
	perfomers[50] = '\0';
	strncpy(label, d.label, 19);
	label[20] = '\0';
	selections = d.selections;
	playtime = d.playtime;
}

Cd::Cd() {
	strcpy(perfomers, "undefined perfomers");
	strcpy(label, "noname");
	selections = 0;
	playtime = 0.0;
}

Cd::~Cd() {  }

void Cd::Report() const {
	std::cout << "\"" << perfomers << "\": " << label << std::endl
		<< "\tselections: " << selections << ", "
		<< "playtime: " << playtime << std::endl; 
}

Cd & Cd::operator=(const Cd & d) {
	if(this == &d)
		return *this;
	strncpy(perfomers, d.perfomers, 49);
	perfomers[50] = '\0';
	strncpy(label, d.label, 19);
	label[20] = '\0';
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
