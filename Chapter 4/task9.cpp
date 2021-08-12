#include <iostream>
#include <string>

int task9() {
	using namespace std;
	struct CandyBar {
		string name;
		float weight;
		unsigned int cal;
	};
	int i;
	
	CandyBar *snack = new CandyBar[3];
	snack[0] = {"Mocha Munch", 2.3, 350};
	snack[1] = {"Alpen Hold", 1.9, 240};
	snack[2] = {"Milka", 1.5, 100};
	
	for(i=0; i<3; i++) {
		cout << snack[i].name << " has weight " << snack[i].weight << " oz, ";
		cout << snack[i].cal << " cal" << endl;
	}
	
	delete [] snack;
	
	return 0;
}
