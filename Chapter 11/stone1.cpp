// stone1.cpp -- определяемые пользователем функции преобразования
// компилировать вместе с stonewt1.cpp
#include <iostream>
#include "stonewt1.h"

int stone1() {
    using std::cout;
    Stonewt1 poppins(9, 2.8);     // 9 стоунов, 2.8 фунта
    double p_wt = poppins;      // неявное преобразование
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int (poppins) << " pounds.\n";
	// std::cin.get();
    return 0; 
}
