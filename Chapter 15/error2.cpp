//error2.cpp -- возврат кода ошибки
#include <iostream>
#include <cfloat>  // (или float.h) для DBL_MAX

bool hmean(double a, double b, double * ans);

int error2() {
    double x, y, z;

    std::cout << "Enter two numbers: ";
    while (std::cin >> x >> y) {
        if (hmean(x, y, &z))
            std::cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << std::endl;
        else
            std::cout << "One value should not be the negative "
                << "of the other - try again.\n";
        std::cout << "Enter next set of numbers <q to quit>: ";
    }
    std::cout << "Bye!\n";
    return 0;
}

bool hmean(double a, double b, double * ans) {
    if (a == -b) {
        *ans = DBL_MAX;
        return false;
    } else {
        *ans = 2.0 * a * b / (a + b);
        return true;
    }
}
