#include <iostream>
#include <string>
#include <algorithm>

using std::cin;
using std::cout;
using std::string;
using std::endl;

bool is_palindrom(string str);

int task1() {
	string str;
	
	cout << "Enter string: ";
	while(getline(cin, str) && str != "quit") {
		cout << str;
		is_palindrom(str) ? (cout << " is ") : (cout << " isn't ");
		cout << "palindrom." << endl;	
		cout << "Enter next string (or 'quit') for exit: ";
	}
	return 0;
}

bool is_palindrom(string str) {
	if(str.size() < 2) return false;
	
	int len = str.size();	
	string str1(str, 0, len/2);
	string str2(str, len/2, len);
	
	reverse(str1.begin(), str1.end());
//	cout << str1 << " " << str2 << endl;
	
	return (str1 == str2);
}
