#include <iostream>
#include "golf.h"

int task3() {
	
	std::cout << "Creating Golf-object" << std::endl;
	Golf g1 = Golf("Winny", 98);
	g1.showgolf();
	
	
	Golf g2;
	g2.setgolf(g1);
	g2.showgolf();	
	
	return 0;
}
