#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::endl;

bool is_palindrom(string str);
bool isAlpha(char ch) { return isalpha(ch); }
string & ToLower(string & st);
string & IsAlpha(string & st);

int task2() {
	string str, trmsfstr;
	
	cout << "Enter string: ";
	while(getline(cin, str) && str != "quit") {
		cout << str;
		trmsfstr = ToLower(IsAlpha(str));
		is_palindrom(trmsfstr) ? (cout << " is ") : (cout << " isn't ");
		cout << "palindrom." << endl;	
		cout << "Enter next string (or 'quit') for exit: ";
	}
	return 0;
}

string & IsAlpha(string & st) {
    transform(st.begin(), st.end(), st.begin(), isAlpha);
    return st; 
}

/*bool is_palindrom(string str) {
	if(str.size() < 2) return false;
	
	int len = str.size();	
	string str1(str, 0, len/2);
	string str2(str, len/2, len);
	
	reverse(str1.begin(), str1.end());
	
	return (str1 == str2);
}*/
