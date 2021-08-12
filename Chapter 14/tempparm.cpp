// tempparm.cpp – шаблоны как параметры
#include <iostream>
#include "stacktp.h"

template <template <typename T> 
		  class Thing>
class Crab {
private:
    Thing<int> s1; // T=int
    Thing<double> s2; // T=double
public:
    Crab() {};
    // Предполагается, что класс thing имеет члены push() и pop()
    bool push(int a, double x) { return s1.push(a) && s2.push(x); }
    bool pop(int & a, double & x){ return s1.pop(a) && s2.pop(x); }
};
    
int tempparm() {
    using std::cout;
    using std::cin;
    using std::endl;
    
    Crab<Stack> nebula;
// Stack должен соответствовать шаблону template <typename T> class thing   
    int ni;
    double nb;
    cout << "Enter int double pairs, such as 4 3.5 (0 0 to end):\n";
    while (cin>> ni >> nb && ni > 0 && nb > 0) {
        if (!nebula.push(ni, nb))
            break;
    }
   
    while (nebula.pop(ni, nb))
           cout << ni << ", " << nb << endl;
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0; 
}
