//tabtenn0.cpp -- методы простого базового класса
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer0::TableTennisPlayer0 (const string & fn, 
    const string & ln, bool ht) : firstname(fn),
	    lastname(ln), hasTable(ht) {}
    
void TableTennisPlayer0::Name() const
{
    std::cout << lastname << ", " << firstname;
}
