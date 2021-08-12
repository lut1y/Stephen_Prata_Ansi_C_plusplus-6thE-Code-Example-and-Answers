#include <iostream>
#include "task4.h"

int task4() {
	
	using SALES::Sales;
	
	double ar[] = { 0.0, 1.2, 0.8, 3.5 };
	double ar1[] = { 0.3, -1.1, 0.8, 3.57, 5.0 };
	
	Sales sale = Sales(ar, 4);
	sale.showSales();
	
	Sales sale1 = Sales(ar1, 4);
	sale1.showSales();
	
	sale1.setSales(sale);
	sale1.showSales();
	
	
	return 0;
}
