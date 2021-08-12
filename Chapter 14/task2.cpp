#include <iostream>
#include "task2.h"

using std::ostream;
using std::cout;
using std::endl;
using std::cin;
using std::string;
using namespace TASK2;

const string & Wine::Label() const {
	return (const string &) *this;
}

void Wine::GetBottles() {
	
	Pair & stocks = (PairArray &) *this;
	int years = stocks.first().size();		
	int temp;
	
	cout << "Enter " << Label() << " data for ";
	cout << years << " year(s):" << endl;			
	for(int i = 0; i < years; i++) {
		cout << "Enter year: ";		
		cin >> stocks.first()[i];
		cout << "Enter bottles for that year: ";
		cin >> stocks.second()[i];
	}	
}

void Wine::Show() {
	cout << "Wine: " << Label() << endl;
	cout << "\tYear" << "\tBootles" << endl;
	Pair stocks = (PairArray &)  *this;
	int years = stocks.first().size();
	
	if(years > 0) {
		for(int i = 0; i < years; i++) {
			cout << "\t" << stocks.first()[i] 
			 << "\t" << stocks.second()[i] << endl;	
		} 		
	} else
		cout << " empty array " << endl;
}

int Wine::sum() {
	int sum = 0;
	
	Pair stocks = (PairArray &) *this;
	int years = stocks.first().size();
	
	for(int i=0; i < years; i++) 
		sum	+= stocks.second()[i];
	return sum;
}
