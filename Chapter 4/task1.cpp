#include <iostream>

int task1(void) {
	using namespace std;
	
	char firstname[20];
	char lastname[20];
	char ch;
	unsigned int age; 
	
	cout << "What is your first name? ";
	cin.get(firstname, 20).get();
	cout << "What is your last name? ";
	cin.get(lastname, 20);
	cout << "What letter grade do you deserve? ";
	cin >> ch;
	cout << "What is your age? ";
	cin >> age;
	cout << "Name: " << lastname << ", " << firstname << endl;
	cout << "Grade: " << (char) (ch + 1) << endl;
	cout << "Age: " << age << endl;
	
	return 0;
}
