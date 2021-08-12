#include <iostream>
#include <cstring>
#include "cd_dma.h"
#include "classic_dma.h"
void Classic_dma::Report() const {
	Cd_dma::Report();
	std::cout << "\tmain composition: " << main_composition
			<< std::endl; 
}

Classic_dma::Classic_dma(char * s1, char * s2, char * mc,
			int n, double x) : Cd_dma(s1, s2, n, x) {
	main_composition = new char[strlen(mc) + 1];
	strcpy(main_composition, mc);
}

Classic_dma::Classic_dma(const Cd_dma & d, char * mc) : Cd_dma(d) {
	main_composition = new char[strlen(mc) + 1];
	strcpy(main_composition, mc);	
}

Classic_dma::~Classic_dma() {
	delete [] main_composition;	
//	Cd_dma::~Cd_dma();	
}

Classic_dma & Classic_dma::operator=(const Classic_dma & d) {
	if(this == &d)
		return *this;
	Cd_dma::operator=(d);
	delete [] main_composition;
	main_composition = new char[strlen(d.main_composition) + 1];	
	strcpy(main_composition, d.main_composition);
	return *this;
}
