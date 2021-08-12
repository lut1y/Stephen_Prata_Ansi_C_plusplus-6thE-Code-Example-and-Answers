// usetime1.cpp -- использование второй черновой версии класса Time
// компилировать usetime1.cpp и mytime1.cpp вместе
#include <iostream>
#include "mytime1.h"

int usetime1() {
    using std::cout;
    using std::endl;
    
    Time1 planning;
    Time1 coding(2, 40);
    Time1 fixing(5, 55);
    Time1 total;

    cout << "planning time = ";
    planning.Show();
    cout << endl;
 
    cout << "coding time = ";
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    
    // Нотация с операцией
    cout << "coding + fixing = ";
    total.Show();
    cout << endl;

    Time1 morefixing(3, 28);
    cout << "more fixing time = ";
    morefixing.Show();
    cout << endl;
    total = morefixing.operator+(total);
    // Нотация с функцией
    cout << "morefixing.operator+(total) = ";
    total.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
