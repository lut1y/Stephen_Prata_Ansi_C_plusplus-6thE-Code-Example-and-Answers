#include <iostream>
#include <cmath>

int task2(void) {
	using namespace std;
	double 	height_in_foot,
			height_in_inch,
			weight_in_lb;
	const double Foot_per_inch = 12.0;
	const double Lb_in_kg = 2.2;
	
	cout << "Enter height in lb: ";
	cin >> height_in_foot;
	cout << "Enter height in inch: ";
	cin >> height_in_inch;
	cout << "Enter weight in lb: ";
	cin >> weight_in_lb;
	cout << "BMI = ";
	
	height_in_inch = height_in_foot * 12 + height_in_inch;
	
	cout << (weight_in_lb / 2.2) / pow(height_in_inch*0.0254, 2);
	
	return 0;
}
