#include <iostream>
#include "task3.h"

const int STKS = 4;
int task3() {
	{
		// �������� ������� ����������������� ��������
	    Stock2 stocks[STKS] = {
	        Stock2("NanoSmart", 12, 20.0),
	        Stock2("Boffo Objects", 200, 2.0),
	        Stock2("Monolithic Obelisks", 130, 3.25),
	        Stock2("Fleep Enterprises", 60, 6.5)
	    };
	
	    std::cout << "Stock holdings:\n";
	    int st;
	    for (st = 0; st < STKS; st++)
	        std::cout << stocks[st];
		// ��������� ��������� � ������ �������
	    const Stock2 * top = &stocks[0];
	    for (st = 1; st < STKS; st++)
	        top = &top->topval(stocks[st]);
		// ������ top ��������� �� ����� ������ ����� �����
	    std::cout << "\nMost valuable holding:\n";
		std::cout << top;
	}
    // std::cin.get();
    return 0; 
}

