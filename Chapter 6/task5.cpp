#include <iostream>

int task5() {
	using namespace std;
	
	int twarps, tax; 
	
	cout << "Enter count twarps: ";
	while(cin >> twarps &&  twarps > 0) {
		if (twarps > 5000) {
			tax = (twarps - 5000) * 10 / 100;
			if(twarps > (5000 + 10000)) {
				tax = 10000 * 10 / 100 + 
						(twarps - (5000 + 10000)) * 15 / 100;
				if(twarps > (5000 + 10000 + 20000)) {
					tax = 10000 * 10 / 100 + 
						20000 * 15 / 100 + (twarps - 35000) * 20 / 100;
				}
			}
		} else {
			tax = 0;
		}
			
		cout << "Twarps with calculated tax: " << tax << endl;
		cout << "Enter count twarps: ";
	}
		
	
	return 0;
}
