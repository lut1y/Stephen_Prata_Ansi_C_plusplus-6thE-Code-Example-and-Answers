// twofile1.cpp -- переменные с внешним и внутренним связыванием
#include <iostream>     // должен компилироваться вместе с twofile2.cpp
int tom = 3;            // определение внешней переменной
int dick = 30;          // определение внешней переменной
static int harry = 300; // статическая, внутреннее связывание
// прототип функции
void remote_access();

int twofile1()
{
    using namespace std;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
    remote_access();
    // cin.get();
    return 0; 
}
