#include <iostream>
#include "mytime3.h"
// 588
int task4() {
	
	using std::cout;
	using std::endl;
	
	Time3 aida(3, 25);
	Time3 tosca(2, 48);
	Time3 temp;
	
	cout << "Aida and Tosca:\n";
	cout << aida << "; " << tosca << ";" << endl;
	
	temp = aida + tosca;
	cout << "Comparing: " << endl;
	cout << "temp = aida + tosca = " << temp << endl;
	cout << "aida + tosca = " << (aida + tosca) << endl;
	
	temp = aida - tosca;
	cout << "Comparing: " << endl;
	cout << "temp = aida - tosca = " << temp << endl;
	cout << "aida - tosca = " << (aida - tosca) << endl;
	
	temp = tosca * 0.5;
	cout << "Comparing: " << endl;
	cout << "temp = tosca * 0.5 = " << temp << endl;
	cout << "tosca * 0.5 = " << (0.5 * tosca) << endl;
	
	
	
	return 0;
}
