// plus_one.cpp -- операция инкремента
#include <iostream>
int plus_one()
{
    using std::cout;
    int a = 20;
    int b = 20;

    cout << "a   = " << a << ":   b = " << b << "\n";
    cout << "a++ = " << a++ << ": ++b = " << ++b << "\n";
    cout << "a   = " << a << ":   b = " << b << "\n";
    // std::cin.get();
	return 0;
}
