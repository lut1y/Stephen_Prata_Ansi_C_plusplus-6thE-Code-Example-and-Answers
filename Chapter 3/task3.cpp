#include <iostream>

int task3(void) {
	using namespace std;
	
	const float Secs_per_min = 60.0;
	const float Min_per_deg = 60.0;	
	
	float degrees,
		mins, secs;
	
	cout << "Enter a latitude in degrees, minutes and seconds:" << endl;
	cout << "First, enter the degrees: ";
	cin >> degrees;
	cout << "Next, enter the minutes of arc: ";
	cin >> mins;
	cout << "Finally, enter the seconds of arc: ";
	cin >> secs;
	cout << degrees << " degrees, " << mins << " minutes, " << secs << " seconds = ";
	cout << degrees + (mins / Min_per_deg) + ((secs/Secs_per_min)/Min_per_deg);
	
	return 0;	
}
