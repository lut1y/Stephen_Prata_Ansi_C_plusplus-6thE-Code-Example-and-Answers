#include <iostream>

int task4() {
	using namespace std;
	
	double dafna = 100;
	double kleo = 100;
	int i=1;
	
	dafna += 100 * 0.1;
	kleo += 100 * 0.05;
	
	cout << "\tdafna\tkleo\n";
	cout << i << "\t" << dafna << "\t" << kleo << endl;
	for(i=2; dafna >= kleo; i++) {
		dafna += 100 * 0.1;
		kleo += kleo * 0.05;
		cout << i << "\t" << dafna << "\t" << kleo << endl;
	}
	
	cout << "Bye." << endl;
	return 0;
}
