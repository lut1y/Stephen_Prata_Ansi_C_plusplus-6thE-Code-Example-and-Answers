// usestok1.cpp -- использование класса Stock
// компилированить вместе с stock10.cpp
#include <iostream>
#include "stock10.h"

int usestok1() {
	{
		using std::cout;
		cout << "Using constructors to create new objects\n";
		Stock1 stock1("NanoSmart", 12, 20.0);            // синтаксис 1
		stock1.show();
		Stock1 stock2 = Stock1 ("Boffo Objects", 2, 2.0); // ситаксис 2
		stock2.show();
		
		cout << "Assigning stock1 to stock2:\n";
		stock2 = stock1;
		cout << "Listing stock1 and stock2:\n";
		stock1.show();
		stock2.show();
		
		cout << "Using a constructor to reset an object\n";
		stock1 = Stock1("Nifty Foods", 10, 50.0);    // временный объект
		cout << "Revised stock1:\n";
		stock1.show();
		cout << "Done\n";
	}
	// std::cin.get();
    return 0; 
}
