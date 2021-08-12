#include <iostream>
#include "task4.h"

namespace SALES {
	void setSales(Sales & s, const double ar[], int n) {
		double min = ar[0],
			   max = ar[0],
			   sum = 0.0;
		for(int i=0; i < QUARTERS; i++) {			
			if(i >= n)
				s.sales[i] = 0.0;
			else
				s.sales[i] = ar[i];
			if(min > s.sales[i]) min = s.sales[i];
			if(max < s.sales[i]) max = s.sales[i];
			sum += s.sales[i];
			 
		}		
		s.average = sum / QUARTERS;
		s.max = max;
		s.min = min;				
	}
	
	void setSales(Sales & s) {
		using std::cout;
		using std::cin;
		
		double min, max,
			   sum = 0.0;
		
		for(int i=0; i<QUARTERS; i++) {
			cout << "Enter sale #" << i+1 << ": ";
			cin >> s.sales[i];
		}
		min = max = s.sales[0];
		for(int i=0; i < QUARTERS; i++) {			
			if(min > s.sales[i]) min = s.sales[i];
			if(max < s.sales[i]) max = s.sales[i];
			sum += s.sales[i];
		}		
		s.average = sum / QUARTERS;
		s.max = max;
		s.min = min;
	}
	
	void showSales(const Sales & s) {
		using std::cout;
		using std::endl;
		
		for(int i=0; i<QUARTERS; i++) 
			cout << s.sales[i] << " ";
		cout << endl;
		cout << "min: " << s.min << endl;
		cout << "max: " << s.max << endl;
		cout << "average: " << s.average << endl;		
	}
}
