#include <iostream>

typedef unsigned short int usi;

int task4() {
	using namespace std;
	
	long long secs;
	usi sec, min, hour, day;
	
	const usi Hours_per_day = 24;
	const usi Min_per_hour = 60;	
	const usi Sec_per_min = 60;	
	
	
	cout << "Enter the number of seconds: ";
	cin >> secs;
	
	cout << secs << " seconds = ";
	cout << secs / (Sec_per_min*Min_per_hour*Hours_per_day);
	cout << " days, ";
	cout << (secs % (Sec_per_min*Min_per_hour*Hours_per_day)) / (Sec_per_min*Min_per_hour);
	cout << " hours, ";
	cout << ((secs % (Sec_per_min*Min_per_hour*Hours_per_day)) % (Sec_per_min*Min_per_hour)) / Sec_per_min;
	cout << " minutes, ";
	cout << secs % Sec_per_min;
	cout << " seconds.";
	return 0;
}
