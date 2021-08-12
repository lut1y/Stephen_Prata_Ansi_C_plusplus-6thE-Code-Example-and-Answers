#include <iostream>
#include <cmath> // или math.h, пользователям unix может потребоваться флаг -lm
#include "task2.h"
// прототипы функций
namespace TASK2 {
	double hmean(double a, double b);
	double gmean(double a, double b);
}

int task2() {
    using std::cout;
    using std::cin;
    using std::endl;
    using namespace TASK2;
    
    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {                  // начало блока try
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }						// конец блока try
        catch (bad_hmean & bg) {   // начало блока try
            cout << bg.what();
            cout << "Try again.\n";
            continue;
        }                  
        catch (bad_gmean & hg) {
            cout << hg.what();
            cout << "Values used: " << hg.w1_val() << ", " 
                 << hg.w2_val() << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // конец блока try
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double TASK2::hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean(a, b, "hmean(): invalid arguments: a = -b\n" );
    return 2.0 * a * b / (a + b);
}

double TASK2::gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b, "gmean(): arguments should be >= 0\n");
    return std::sqrt(a * b); 
}
