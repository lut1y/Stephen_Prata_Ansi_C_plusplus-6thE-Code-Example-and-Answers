#include <iostream>
#include "task4.h"

int task4() {
	using SALES::Sales;
	
	Sales sales;
	double arr1[] = {1.2, 0.9, 5.4, 6.7, 0.5, 7.8};
	double arr2[] = {0.9, 6.7, 0.5};
	
	setSales(sales, arr1, 6);
	showSales(sales);
	
	setSales(sales, arr2, 3);
	showSales(sales);
	
	setSales(sales);
	showSales(sales);
	
	return 0;
}
