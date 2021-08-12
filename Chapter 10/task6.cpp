#include <iostream>
#include "task6.h"

Move::Move(double a, double b) {
	x = a;
	y = b;
}

Move::showmove() const {
	using std::cout;
	using std::endl;
	
	cout << x << ", " << y << endl;
//	return 0;
}

Move Move::add(const Move & m) const {
	return Move(x+m.x, y+m.y);
}

Move::reset(double a, double b) {
	x = a; y = b;
	return 0;
}


