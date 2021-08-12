#include <iostream>
#include "task6.h"
using std::cout;

Stonewt3::Stonewt3(double lbs) {
    stone = int (lbs) / Lbs_per_stn;    // целочисленное деление
    pds_left = int (lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
}

Stonewt3::Stonewt3(int stn, double lbs) {
    stone = stn;
    pds_left = lbs;
    pounds =  stn * Lbs_per_stn + lbs;
}

Stonewt3::Stonewt3() {        // конструктор по умолчанию, wt = 0
    stone = pounds = pds_left = 0;
}

Stonewt3::~Stonewt3() {}      // деструктор

// Отображение веса в стоунах
void Stonewt3::show_stn() const {
    cout << stone << " stone, " << pds_left << " pounds\n";
}

// Отображение веса в фунтах
void Stonewt3::show_lbs() const {
    cout << pounds << " pounds\n";
}

// Функции преобразования
Stonewt3::operator int() const {
    return int (pounds + 0.5);
}

Stonewt3::operator double() const {
    return pounds; 
}

bool Stonewt3::operator>(Stonewt3 & st) const {
	return (this->pounds > st.pounds);
}

bool Stonewt3::operator<(Stonewt3 & st) const {
	return (this->pounds < st.pounds);
}

bool Stonewt3::operator==(Stonewt3 & st) const {
	return (this->pounds == st.pounds);
}

bool Stonewt3::operator!=(Stonewt3 & st) const {
	return (this->pounds != st.pounds);
}

bool Stonewt3::operator>=(Stonewt3 & st) const {
	return (this->pounds >= st.pounds);
}

bool Stonewt3::operator<=(Stonewt3 & st) const {
	return (this->pounds <= st.pounds);
}

std::ostream & operator<<(std::ostream & os, const Stonewt3 & st3) {
	os << st3.stone << " stone, " << st3.pds_left << " pounds\n"; 
	return os;
}


int task6() {
	using std::cout;
	using std::endl;
	using std::cin;
	
	double pounds;
	unsigned int count = 0;
	
	Stonewt3 st3[6] = { Stonewt3(11, 0), Stonewt3(175.8),
						Stonewt3(78.6) };
						
	Stonewt3 min, max;
	
	for(int i=3; i<6; i++) {
		cout << "Enter pounds: ";
		while(!(cin >> pounds)) {
			cin.clear();
			cout << "Invalid value. Try again: ";
			while(cin.get() != '\n') continue;			
		}
		st3[i] = Stonewt3(pounds);
	}
		
	cout << endl;				
	
	for(int i=0; i<6; i++)		
		cout << st3[i];
		
	min = max = st3[0];
	for(int i=1; i<6; i++) {
		if(min > st3[i]) min = st3[i];
		if(max < st3[i]) max = st3[i];
		if(st3[0]<=st3[i]) count++;
	}
	
	cout << "Min: " << min;
	cout << "Max: " << max;
	cout << "More 11 stones: " << count;
		
	return 0;
}
