#include <iostream>
#include <cstring>
#include "task1.h"


Cow::Cow() {
	strcpy(name, "undefined");
	hobby = new char[10];
	strcpy(hobby, "undefined");
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt) {
	strncpy(name, nm, 19);
	hobby = new char[strlen(ho) + 1];
	std::strcpy(hobby, ho);
	strcpy(hobby, ho);
	weight = wt;
}

Cow::~Cow() {
	std::cout << "Destroy " << name;
}

Cow & Cow::operator=(const Cow & c) {
	if(this == &c)
		return *this;
	delete [] hobby;
	hobby = new char[strlen(c.hobby) + 1];
	std::strcpy(hobby, c.hobby);
	std::strcpy(name, c.name);
	return *this;
}

void Cow::ShowCow() const {
	std::cout << "Name: " << name << '\n';
	std::cout << "\thobby: " << hobby << ", "
		<< "weight: " << weight << '\n';
}

int task1() {
	
	Cow cow1;
	Cow cow2 = Cow("Zorka", "Walking", 100.0);
	Cow cow3("Sivka", "Eating", 105.3);
	
	cow1.ShowCow();
	cow2.ShowCow();	
	cow3.ShowCow();
	
	cow1 = cow2;
	
	cow1.ShowCow();
	
	return 0;
}
