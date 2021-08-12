#include <iostream>
#include <array>
const int ArSize = 101;      // пример внешнего объявления
int task2() {
	std::array<long double, ArSize> factorials;
    factorials[1] = factorials[0] = 1.0L;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    std::cout.setf(std::ios_base::fixed);
    std::cout.precision(0);
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
    return 0;
}
