#include <iostream>
#include <cstring>
#include "cd_dma.h"

Cd_dma::Cd_dma(char * s1, char * s2, int n, double x) {
	perfomers = new char[strlen(s1)+1];
	strcpy(perfomers, s1);
	label = new char[strlen(s2)+1];
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd_dma::Cd_dma(const Cd_dma & d) {
	perfomers = new char[strlen(d.perfomers)+1];
	strcpy(perfomers, d.perfomers);
	label = new char[strlen(d.label)+1];
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

Cd_dma::Cd_dma() {	
	perfomers = new char[20];
	strcpy(perfomers, "undefined perfomers");
	label = new char[7];
	strcpy(label, "noname");
	selections = 0;
	playtime = 0.0;
}

Cd_dma::~Cd_dma() { 
	delete [] perfomers;
	delete [] label;
}

void Cd_dma::Report() const {
	std::cout << "\"" << perfomers << "\": " << label << std::endl
		<< "\tselections: " << selections << ", "
		<< "playtime: " << playtime << std::endl; 
}

Cd_dma & Cd_dma::operator=(const Cd_dma & d) {
	if(this == &d)
		return *this;
	delete [] perfomers;
	delete [] label;
	perfomers = new char[strlen(d.perfomers) + 1];
	label = new char[strlen(d.label) + 1];
	strcpy(perfomers, d.perfomers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}
