#include <iostream>
#include <cmath> // или math.h, пользователям unix может потребоваться флаг -lm
#include "task3.h"
// прототипы функций
namespace TASK3 {
	double hgmean(double a, double b, const std::string & func = "hmean");
}

int task3() {
    using std::cout;
    using std::cin;
    using std::endl;
    using namespace TASK3;
    
    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {                  // начало блока try
            z = hgmean(x, y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << hgmean(x, y, "gmean") << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }						// конец блока try                          
        catch (bad_mean & hg) {
            cout << hg.what();
            cout << "Values used: " << hg.z1 << ", " 
                 << hg.z2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // конец блока try
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double TASK3::hgmean(double a, double b, const std::string & func) {
	if(func == "hmean") 
		if (a == -b)    
        	throw bad_mean(a, b, "hmean(): invalid arguments: a = -b\n");
        else
    		return 2.0 * a * b / (a + b);    	
    else if(func == "gmean")
		if(a < 0 || b < 0)
    		throw bad_mean(a, b, "gmean(): arguments should be >= 0\n");
    	else
    		return std::sqrt(a * b);
	else
		return -1.0;     
}
/*
double TASK2::gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b, "gmean(): arguments should be >= 0\n");
    return std::sqrt(a * b); 
}*/
