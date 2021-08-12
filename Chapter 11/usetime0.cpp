// usetime0.cpp -- использование первой черновой версии класса Time
// компилировать usetime0.cpp и mytime0.cpp вместе
#include <iostream>
#include "mytime0.h"

int usetime0() {
    using std::cout;
    using std::endl;
    
    Time0 planning;
    Time0 coding(2, 40);
    Time0 fixing(5, 55);
    Time0 total;

    cout << "planning time = ";		// время на планирование
    planning.Show();
    cout << endl;
 
    cout << "coding time = ";		// время на кодирование
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";		// время на исправление
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
  	total.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
