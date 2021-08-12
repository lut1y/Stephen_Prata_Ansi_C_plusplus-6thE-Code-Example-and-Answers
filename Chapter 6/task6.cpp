#include <iostream>
#include <string>

int task6() {
	using namespace std;

	struct Maecenas {
		string name;
		double donation;
	};

	int count, gpatrons = 0, patrons = 0;
	
	cout << "Enter count of mecenats: ";
	cin >> count; cin.get();
	
	Maecenas *pmaecenas = new Maecenas[count];
	Maecenas *head = pmaecenas;
	
	for(int i=0; i < count; i++, pmaecenas+=1) {
		cout << "Enter maecenas's name #" << i+1 << ": ";
		getline(cin, pmaecenas->name);
		cout << "Enter maecenas's donation #" << i+1 << ": "; 
		cin >> pmaecenas->donation;  cin.get();
		if (pmaecenas->donation >= 10000)
			++gpatrons;
		else
			++patrons;
	}
	
	pmaecenas = head;
	cout << "Grand Patrons" << endl;
	if(gpatrons == 0) 
		cout << "none" << endl;
	else 
		for(int i=0; i<count; i++, pmaecenas+=1) 
			if (pmaecenas->donation >= 10000)
				cout << pmaecenas->name << endl;
	
	pmaecenas = head;
	cout << "Patrons" << endl;
	if(patrons == 0) 
		cout << "none" << endl;
	else 
		for(int i=0; i<count; i++, pmaecenas+=1) 
			if (pmaecenas->donation < 10000)
				cout << pmaecenas->name << endl;
	
	delete [] pmaecenas;
	return 0;
}
