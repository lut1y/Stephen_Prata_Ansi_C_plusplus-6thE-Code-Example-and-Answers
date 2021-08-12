#include <iostream>
#include <cstring>

int task8() {
	using namespace std;
	char str[81];
	int cnt = 0;
	
	cout << "Enter words (for finishing enter word done): " << endl;
	
	while((cin >> str) && strcmp(str, "done")) {
		cnt++;
	}
	
	cout << "You entered " << cnt << " word(s)." << endl;
	
	return 0;
}
