#include <iostream>
using namespace std;
#include "complex0.h"  // во избежание конфликта с complex.h

int task7() {
	complex a(3.0, 4.0); // инициализация значением c complex.h
	complex c;
	cout << "Enter a complex number (q to quit):\n";
		 //  Ввод комплексного числа (q для завершения)
	while(cin >> c) {
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
			//  значение сопряженного числа
		cout << "a is " << a << '\n';
		cout << "a + c is " << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a * c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter a complex number (q to number):\n";
	}
	cout << "Done!\n";
	return 0;
} 
