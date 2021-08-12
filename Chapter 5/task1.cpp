#include <iostream>

int task1() {
	using namespace std;
	
	int inum1, inum2, i;
	int temp;
	
	cout << "Enter two integer numbers: ";
	cin >> inum1 >> inum2;
	
	if(inum1 > inum2) {
		temp = inum1;
		inum1 = inum2;
		inum2 = temp;
	}
	
	for(i = inum1, temp = 0; i <= inum2; i++)
		temp += i;
	
	cout << "Sum of integer between " << inum1 << " to " << 
		inum2 << " equals " << temp << endl;
	
	return 0;
}
