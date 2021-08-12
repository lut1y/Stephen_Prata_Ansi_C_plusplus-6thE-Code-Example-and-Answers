#include <iostream>

void showmenu1(void);

int task3(void) {
	using namespace std;
	char ch;
	bool valid;
	
	showmenu1();
	do {
		valid = true;
		cin >> ch;
		switch(ch) {
			case 'c':
				cout << "Tiger is a carnivore.";				
				break;
			case 'p':
				cout << "Daniil Trifonov is a pianist.";
				break;
			case 't':
				cout << "A maple is a tree.";
				break;
			case 'g':
				cout << "Doom3 is a game.";
				break;
			default:
				cout << "Please enter a c, p, t or g: ";				
				valid = false;
		}
	} while (!valid);
	return 0;
}

void showmenu1(void) {
	using std::cout;
	
	cout << "Please enter one of the following choices:\n";
	cout << "c) carnivore	p) pianist\n";
	cout << "t) tree		g) game\n";
	cout << "q) quit\n";	
}
