// stone1.cpp -- ������������ ������������� ������� ��������������
// ������������� ������ � stonewt1.cpp
#include <iostream>
#include "stonewt1.h"

int stone1() {
    using std::cout;
    Stonewt1 poppins(9, 2.8);     // 9 �������, 2.8 �����
    double p_wt = poppins;      // ������� ��������������
    cout << "Convert to double => ";
    cout << "Poppins: " << p_wt << " pounds.\n";
    cout << "Convert to int => ";
    cout << "Poppins: " << int (poppins) << " pounds.\n";
	// std::cin.get();
    return 0; 
}
