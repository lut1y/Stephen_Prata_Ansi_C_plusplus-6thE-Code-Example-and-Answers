#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

int task9() {
	using namespace std;

	struct Maecenas {
		string name;
		double donation;
	};

	ifstream inFile;
	int count, gpatrons = 0, patrons = 0;
	
	inFile.open("for_task9.txt");
	if(!inFile.is_open()) {
		cout << "Cannot open file \"for_task9.txt\"" << endl;
		exit(EXIT_FAILURE);
	}
	
	inFile >> count; /*inFile.get();*/
	cout << "Count of mecenats: " << count << endl;
	
	Maecenas *pmaecenas = new Maecenas[count];
	
	for(int i=0; i < count; i++) {
		inFile.ignore();
		getline(inFile, pmaecenas[i].name);
		inFile >> pmaecenas[i].donation; /*inFile.get();*/
		if (pmaecenas[i].donation >= 10000)
			++gpatrons;
		else
			++patrons;
	}
	
	cout << "***Grand Patrons***" << endl;
	if(gpatrons == 0) 
		cout << "none" << endl;
	else 
		for(int i=0; i<count; i++) 
			if (pmaecenas[i].donation >= 10000)
				cout << pmaecenas[i].name << endl;
	
	cout << "***Patrons***" << endl;
	if(patrons == 0) 
		cout << "none" << endl;
	else 
		for(int i=0; i<count; i++) 
			if (pmaecenas[i].donation < 10000)
				cout << pmaecenas[i].name << endl;
	
	
	delete [] pmaecenas;
	return 0;
}
