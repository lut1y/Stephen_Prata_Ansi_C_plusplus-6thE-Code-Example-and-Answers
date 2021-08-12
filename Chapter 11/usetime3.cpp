//usetime3.cpp -- using the fourth draft of the Time class
// compile usetime3.cpp and mytime3.cpp together
#include <iostream>
#include "mytime3.h"

int usetime3()
{
    using std::cout;
    using std::endl;
    Time3 aida(3, 35);
    Time3 tosca(2, 48);
    Time3 temp;

    cout << "Aida and Tosca:\n";
//    aida.operator<<(cout);
    cout << aida <<"; " << tosca << endl; // ostream operator<<Task3
    temp = aida + tosca;     // operator+()
    cout << "Aida + Tosca: " << temp << endl;
    temp = aida* 1.17;  // member operator*()
    cout << "Aida * 1.17: " << temp << endl;
    cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
	// std::cin.get();
    return 0; 
}
