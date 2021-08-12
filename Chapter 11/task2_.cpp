// randwalk.cpp -- использование класса Vector
// компилировать вместе с файлом vect.cpp file
#include <iostream>
#include <cstdlib>      // прототипы rand(), srand()
#include <ctime>        // прототип time()
#include "task2.h"
int task2()
{
    using namespace std;
    using VECTOR1::Vector;
    srand(time(0));     // начальное значение дл€ генератора случаных чисел
    double direction;
    Vector step;
    Vector result(0.0, 0.0); // RECT по умолчанию -> Mode - член-состо€ни€
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Enter target distance (q to quit): "; // длина дистанции
    while (cin >> target)
    {
        cout << "Enter step length: ";	// длина шага
        if (!(cin >> dstep))
            break;

        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
