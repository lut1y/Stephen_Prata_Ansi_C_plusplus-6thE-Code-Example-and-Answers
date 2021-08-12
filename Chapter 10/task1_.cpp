#include <iostream>
#include "task1.h"

int task1_() {
	{
		using std::cout;
		cout << "Using constructors to BankAccount\n";
		BankAccount bAcc;
		bAcc = BankAccount("Ivan", "045896321", 100.0);
		bAcc.show();
		
		BankAccount bAcc1("Nick", "987551584", 350);
		bAcc1.show();
		bAcc1.add(99);
		bAcc1.show();
		
		bAcc.sell(101);
		bAcc.add(50);
		bAcc.show();		
		
	}
	return 0;
}
