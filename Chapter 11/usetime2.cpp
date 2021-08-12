// usetime2.cpp -- ������������� ������� �������� ������ ������ Time
// ������������� usetime2.cpp � mytime2.cpp ������
#include <iostream>
#include "mytime2.h"

int usetime2() {
    using std::cout;
    using std::endl;
    
    Time2 weeding(4, 35);
    Time2 waxing(2, 47);
    Time2 total;
    Time2 diff;
    Time2 adjusted;

    cout << "weeding time = ";
    weeding.Show();
    cout << endl;
 
    cout << "waxing time = ";
    waxing.Show();
    cout << endl;
    
    cout << "total work time = ";
    total = weeding + waxing;   // ������������ operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;    // ������������ operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;      // ������������ operator+()
    cout   << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    // std::cin.get();    
    return 0;
}
