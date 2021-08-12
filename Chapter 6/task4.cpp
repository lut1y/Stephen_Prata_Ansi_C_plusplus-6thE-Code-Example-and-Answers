#include <iostream>

const int strsize = 30;
int arrsize = 5;
struct bop {
	char fullname[strsize];	// реальное имя
	char title[strsize];	// должность
	char bopname[strsize];	// секретное имя БОП
	int preference;			// 0=полное имя, 1=титул, 2=имя БОП
};

void showmenu4(void);
void display_by_name(const bop *, int);
void display_by_title(const bop *, int);
void display_by_bopname(const bop *, int);
void display_by_preference(const bop *, int);

int task4(void) {
	using namespace std;
	
	int choice;
	
	bop bops[arrsize] = {
		{"Wimp Macho", "Senior Programmer", "BAH", 0},
		{"Raki Rhodes", "Junior Programmer", "RABY", 1},
		{"Celia Laiter", "Middle Programmer", "MIPS", 2},
		{"Hoppy Hipman", "Analyst Trainee", "ANLY", 1},
		{"Pat Hand", "Intern Programmer", "LOOPY", 2}
	};	
	
	showmenu4();
	while((choice = cin.get()) != 'q') {
		switch(choice) {
			case 'a':
				display_by_name(bops, arrsize);
				break;
			case 'b':
				display_by_title(bops, arrsize);
				break;
			case 'c':
				display_by_bopname(bops, arrsize);
				break;
			case 'd':
				display_by_preference(bops, arrsize);
				break;
			default:
				cout << "Your choice is invalid!" << endl;
		}
		while(cin.get() != '\n') continue;
		showmenu4();
	}
	return 0;
}

void display_by_preference(const bop *bops, int size) {
	using std::cout;
	using std::endl;
	
	for(int i=0; i<size; i++) 
		switch(bops[i].preference) {
			case 0:
				cout << bops[i].fullname << endl;
				break;
			case 1:
				cout << bops[i].title << endl;
				break;
			case 2:
				cout << bops[i].bopname << endl;
				break;
	}
}

void display_by_bopname(const bop *bops, int size) {
	using std::cout;
	using std::endl;
	
	for(int i=0; i<size; i++) 
		cout << bops[i].bopname << endl;
	
}

void display_by_title(const bop *bops, int size) {
	using std::cout;
	using std::endl;
	
	for(int i=0; i<size; i++) 
		cout << bops[i].title << endl;
}

void display_by_name(const bop *bops, int size) {
	using std::cout;
	using std::endl;
	
	for(int i=0; i<size; i++) 
		cout << bops[i].fullname << endl;
}

void showmenu4(void) {
	using std::cout;
	using std::endl;
	
	cout << "Benevolent Order of Programmers Report" << endl;
	cout << "a. display by name      b. display by title" << endl;
	cout << "c. display by bopname   d. display by preference" << endl;
	cout << "q. quit" << endl;
	cout << "Enter your choice: ";
}
