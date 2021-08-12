// error3.cpp -- использование исключения
#include <iostream>
namespace ERROR3{
	double hmean(double a, double b);
}

int error3() {
	using namespace ERROR3;
    double x, y, z;

    std::cout << "Enter two numbers: ";
    while (std::cin >> x >> y) {
        try {                   // начало блока try
            z = hmean(x,y);
        }                       // конец блока try
        catch (const char * s) {// начало обработчика исключений
            std::cout << s << std::endl;
            std::cout << "Enter a new pair of numbers: ";
            continue;
        }                       // конец обработчика исключений
        std::cout << "Harmonic mean of " << x << " and " << y
            << " is " << z << std::endl;
        std::cout << "Enter next set of numbers <q to quit>: ";
    }
    std::cout << "Bye!\n";
    return 0;
}

double ERROR3::hmean(double a, double b) {
    if (a == -b)
        throw "bad hmean() arguments: a = -b not allowed";
    return 2.0 * a * b / (a + b); 
}
