#include <iostream>
#include <cctype>

int task1() {
	using namespace std;
	char ch;
	
	cout << "Enter symbols: " << endl;
	while((ch = cin.get()) != '@') {
		if(isalpha(ch)) {
			if(isupper(ch)) 
				cout << (char) tolower(ch);
			else
				cout << (char) toupper(ch); 
		}
	}
		
	return 0;
}
