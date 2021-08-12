#include <iostream>
#include "task2.h"

int task2_() {
	using std::cout;
	using std::endl;
	
	Person one;							// используется конструктор по умолчанию
	Person two("Smythecraft");			// используется конструктор #2
										// с одним аргументом по умолчанию
	Person three("Dimwiddy", "Sam");	// используется конструтор #2,
										// без аргументов по умолчанию
	one.Show();
	cout << endl;
	one.FormalShow();	
	// и т.д. для объектов two и three
	two.Show();
	cout << endl;
	two.FormalShow();	
	
	three.Show();
	cout << endl;
	three.FormalShow();
	
	
	return 0;
}
