#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf & g, const char * name, int hc) {
	strcpy(g.fullname, name);
	g.handicam = hc;
}

int setgolf(golf & g) {
	using std::cout;
	using std::cin;
	
	cout << "Enter fullname: ";
	cin.get(g.fullname, Len);
	cout << "Enter handicam: ";
	cin >> g.handicam;
}

void handicap(golf & g, int hc) {
	g.handicam = hc;
}

void showgolf(const golf & g) {
	std::cout << g.fullname << ": " << g.handicam << std::endl;
}
