// twofile2.cpp -- переменные с внутренним и внешним св€зыванием
#include <iostream>
extern int tom;         // переменна€ tom определена в другом месте
static int dick = 10;   // переопредел€ет внешнюю переменную dick
int harry = 200;        // определение внешней переменной
                        // конфликт с harry из twofile1 отсутствуетџ

void remote_access()
{
    using namespace std;
		
    cout << "remote_access() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick << " = &dick, ";
    cout << &harry << " = &harry\n";
}
