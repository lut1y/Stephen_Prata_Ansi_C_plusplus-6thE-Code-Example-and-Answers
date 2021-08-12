#include <iostream>
#include "task6.h"

int task6() {
	
	Move m = Move();
	m.showmove();
	
	m = m.add(Move(1, 4));
	m.showmove();
	
	m = m.add(Move(1, 9));
	m.showmove();
	
	m.reset(2, 3.9);
	m.showmove();
	
	return 0;
}

