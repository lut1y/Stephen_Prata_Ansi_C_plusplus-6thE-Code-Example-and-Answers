#include <iostream>
#include <string>

int task9() {
	using namespace std;
	string str;
	int cnt = 0;
	
	cout << "Enter words (for finishing enter word done):\n";
	
	while((cin >> str) && (str != "done")) {
		cnt++;
	}
	
	cout << "You entered " << cnt << " word(s)." << endl;
	
	return 0;
}
