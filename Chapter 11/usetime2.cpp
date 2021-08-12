// usetime2.cpp -- использование третьей черновой версии класса Time
// компилировать usetime2.cpp и mytime2.cpp вместе
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
    total = weeding + waxing;   // используется operator+()
    total.Show();
    cout << endl;

    diff = weeding - waxing;    // используется operator-()
    cout << "weeding time - waxing time = ";
    diff.Show();
    cout << endl;

    adjusted = total * 1.5;      // используется operator+()
    cout   << "adjusted work time = ";
    adjusted.Show();
    cout << endl;
    // std::cin.get();    
    return 0;
}
