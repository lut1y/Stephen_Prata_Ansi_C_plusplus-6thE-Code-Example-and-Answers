#include <iostream>
#include "task1.h"
#include "pairs.h"

using std::cout;
using std::endl;
using std::cin;
using namespace TASK1;

const std::string & Wine::Label() const {
	return label;
}

void Wine::GetBottles() {
	cout << "Enter " << label << " data for " 
			<< years << " year(s):" << endl;			
	for(int i = 0; i < years; i++) {
		cout << "Enter year: ";
		cin >> stocks.first()[i];
		cout << "Enter boottles for that year: ";
		cin >> stocks.second()[i];
	}
}

void Wine::Show() {
	
	cout << "Wine: " << label << endl
		 << "\tYear" << "\tBootles" << endl;
	for(int i = 0; i < years; i++) 
		cout << "\t" << stocks.first()[i] 
			 << "\t" << stocks.second()[i] << endl;		
}

int Wine::sum() {	
	return stocks.second().sum();
}
