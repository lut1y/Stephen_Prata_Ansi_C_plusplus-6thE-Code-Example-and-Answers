#include <iostream>
#include <fstream>
#include <cstdlib>      // прототипы rand(), srand()
#include <ctime>        // прототип time()
#include "vect.h"
int task1() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // начальное значение для генератора случаных чисел
    double direction;
    Vector step;
    Vector result(0.0, 0.0); // RECT по умолчанию -> Mode - член-состояния
    unsigned long steps = 0;
    double target;
    double dstep;
    ofstream fout;
    
    cout << "Enter target distance (q to quit): "; // длина дистанции
    
	fout.open("task1.txt");
    if(!fout.is_open()) {
    	cout << "Can't open task1.txt" << std::endl;
    	exit(EXIT_FAILURE);
	}
    
    while (cin >> target)
    {
        cout << "Enter step length: ";	// длина шага
        if (!(cin >> dstep))
            break;
		
		fout << "Target Distance: " << target << ", Step Size: 20" << std::endl;
				
        while (result.magval() < target) {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            fout << (steps+1) << ": " << result << endl;
            result = result + step;            
            steps++;
        }
        cout << "After " << steps << " steps, the subject "
            "has the following location:\n";        
        cout << result << endl;
        
        fout << "After " << steps << " steps, the subject "
            "has the following location:\n";
        fout << result << endl;        
        
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        
		fout << " or\n" << result << endl;
        fout << "Average outward distance per step = "
            << result.magval()/steps << endl;
        
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }
    cout << "Bye!\n";
    fout.close();
/* keep window open
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
