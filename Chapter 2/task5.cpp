#include <iostream>

float Celsius_to_Fahrenheit(float deg_Celsius);

int task5(void) {
	using namespace std;
	
	float deg_Celsius;
	cout << "Please enter a Celsius value: ";
	cin >> deg_Celsius;
	printf("%.2f degrees Celsius is %.2f degrees Fahrenheit.\n", deg_Celsius, Celsius_to_Fahrenheit(deg_Celsius));
	
	
	return 0;
}

float Celsius_to_Fahrenheit(float deg_Celsius) {
	return 1.8 * deg_Celsius + 32.0;
}
