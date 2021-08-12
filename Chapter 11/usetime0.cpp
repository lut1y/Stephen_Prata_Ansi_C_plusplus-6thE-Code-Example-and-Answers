// usetime0.cpp -- ������������� ������ �������� ������ ������ Time
// ������������� usetime0.cpp � mytime0.cpp ������
#include <iostream>
#include "mytime0.h"

int usetime0() {
    using std::cout;
    using std::endl;
    
    Time0 planning;
    Time0 coding(2, 40);
    Time0 fixing(5, 55);
    Time0 total;

    cout << "planning time = ";		// ����� �� ������������
    planning.Show();
    cout << endl;
 
    cout << "coding time = ";		// ����� �� �����������
    coding.Show();
    cout << endl;
    
    cout << "fixing time = ";		// ����� �� �����������
    fixing.Show();
    cout << endl;

    total = coding.Sum(fixing);
    cout << "coding.Sum(fixing) = ";
  	total.Show();
    cout << endl;
    // std::cin.get();
    return 0;
}
