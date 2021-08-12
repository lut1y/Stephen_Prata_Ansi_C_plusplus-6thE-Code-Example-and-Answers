#include <iostream>
#include "golf.h"

int task1() {
	golf ann, andy;
	
	setgolf(ann, "Ann Birdfree", 24);
	setgolf(andy);
	showgolf(ann);
	showgolf(andy);
	std::cout << "*** Updated data ***" << std::endl;
	handicap(ann, 48);
	handicap(andy, 15);
	showgolf(ann);
	showgolf(andy);
	
	return 0;
}
