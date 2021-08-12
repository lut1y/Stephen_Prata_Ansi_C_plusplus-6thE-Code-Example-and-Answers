#include <iostream>
#include "task7.h"

int task7() {
	
	Plorg pl = Plorg();
	Plorg pl1 = Plorg("Ivan");
	
	pl.showPlorg();
	pl1.showPlorg();
	
	pl1.setCI(14);
	pl.showPlorg();
	pl1.showPlorg();
	
	
	return 0;
}
