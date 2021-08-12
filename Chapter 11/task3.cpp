#include <iostream>
#include <cstdlib>      // прототипы rand(), srand()
#include <ctime>        // прототип time()
#include "vect.h"

int task3() {
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));     // начальное значение для генератора случаных чисел
    double direction;
    Vector step;
    Vector result(0.0, 0.0); // RECT по умолчанию -> Mode - член-состояния
    unsigned long steps = 0;
    double target;
    double dstep;
    unsigned int attempt;
    unsigned int min_att, max_att, av_att;
    
    cout << "Enter target distance (q to quit): "; // длина дистанции
    while (cin >> target)
    {
        cout << "Enter step length: ";	// длина шага
        if (!(cin >> dstep))
            break;
        
        cout << "Enter attempt count: ";	// количество попыток        
        if (!(cin >> attempt) && (attempt > 0))
            break;
            
        while (result.magval() < target) {
	            direction = rand() % 360;
	            step.reset(dstep, direction, Vector::POL);
	            result = result + step;
	            steps++;
	    }
	    min_att=max_att=av_att=steps;
		
		for(int i=1; i < attempt; i++) {		
	        while (result.magval() < target) {
	            direction = rand() % 360;
	            step.reset(dstep, direction, Vector::POL);
	            result = result + step;
	            steps++;
	        }
	        /*cout << "After " << steps << " steps, the subject "
	            "has the following location:\n";
	        cout << result << endl;
	        result.polar_mode();
	        cout << " or\n" << result << endl;
	        cout << "Average outward distance per step = "
	            << result.magval()/steps << endl;*/
	        if(steps > max_att) max_att = steps;
	        if(steps < min_att) min_att = steps;
	        av_att += steps;
	        steps = 0;
	        result.reset(0.0, 0.0);
		}
		av_att /= attempt;
		cout << "Min steps: " << min_att << endl;
		cout << "Max steps: " << max_att << endl;
		cout << "Avegare steps: " << av_att << endl;
		
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
