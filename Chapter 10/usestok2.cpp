// usestok2.cpp -- использование класса Stock
// компилировать вместе с stock20.cpp
#include <iostream>
#include "stock20.h"

const int STKS = 4;
int usestok2() {
	{
		// создание массива инициализированны объектов
	    Stock2 stocks[STKS] = {
	        Stock2("NanoSmart", 12, 20.0),
	        Stock2("Boffo Objects", 200, 2.0),
	        Stock2("Monolithic Obelisks", 130, 3.25),
	        Stock2("Fleep Enterprises", 60, 6.5)
	    };
	
	    std::cout << "Stock holdings:\n";
	    int st;
	    for (st = 0; st < STKS; st++)
	        stocks[st].show();
		// Установка указатели и первый элемент
	    const Stock2 * top = &stocks[0];
	    for (st = 1; st < STKS; st++)
	        top = &top->topval(stocks[st]);
		// Теперь top указывает на самый ценный пакет акций
	    std::cout << "\nMost valuable holding:\n";
		top->show();
	}
    // std::cin.get();
    return 0; 
}
