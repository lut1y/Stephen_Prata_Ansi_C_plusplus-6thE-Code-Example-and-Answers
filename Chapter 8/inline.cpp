// inline.cpp -- использование встроенной функции
#include <iostream>

// Определение встроенной функции
inline double square(double x) { return x * x; }
int inline_()
{
    using namespace std;
    double a, b;
    double c = 13.0;

    a = square(5.0);
    b = square(4.5 + 7.5);   // допускается передача выражений
    cout << "a = " << a << ", b = " << b << "\n";
    cout << "c = " << c;
    cout << ", c squared = " << square(c++) << "\n";
    cout << "Now c = " << c << "\n";
    // cin.get();
    return 0;  
}
