//error4.cpp � ������������� ������� ����������
#include <iostream>
#include <cmath> // ��� math.h, ������������� unix ����� ������������� ���� -lm
#include "exc_mean.h"
// ��������� �������
namespace ERROR4 {
	double hmean(double a, double b);
	double gmean(double a, double b);
}

int error4() {
    using std::cout;
    using std::cin;
    using std::endl;
    using namespace ERROR4;
    
    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y) {
        try {                  // ������ ����� try
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }						// ����� ����� try
        catch (bad_hmean & bg) {   // ������ ����� try
            bg.mesg();
            cout << "Try again.\n";
            continue;
        }                  
        catch (bad_gmean & hg) {
            cout << hg.mesg();
            cout << "Values used: " << hg.v1 << ", " 
                 << hg.v2 << endl;
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // ����� ����� try
    }
    cout << "Bye!\n";
    // cin.get();
    // cin.get();
    return 0;
}

double ERROR4::hmean(double a, double b) {
    if (a == -b)
        throw bad_hmean(a, b);
    return 2.0 * a * b / (a + b);
}

double ERROR4::gmean(double a, double b) {
    if (a < 0 || b < 0)
        throw bad_gmean(a, b);
    return std::sqrt(a * b); 
}
