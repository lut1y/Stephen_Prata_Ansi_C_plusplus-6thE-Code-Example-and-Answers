#include <iostream>

float lightYear_to_astrUnit(float lightYear);

int task6(void) {
	using namespace std;
	
	float lightYear;
	cout << "Enter the number of light years: ";
	cin >> lightYear;
	printf("%.1f light year = %g astronomical units.\n", lightYear, lightYear_to_astrUnit(lightYear));
	
	
	return 0;
}

float lightYear_to_astrUnit(float lightYear) {
	return lightYear * 63240;
}
