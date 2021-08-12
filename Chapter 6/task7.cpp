#include <iostream>
#include <cstring>
#include <cctype>

int task7() {
	using namespace std;
	
	char word[30];
	unsigned short int others = 0,
					   vowels = 0, 
					   consonants = 0;
	
	cout << "Enter words (q to quit): " << endl;
	while(cin >> word && strcmp(word, "q")) {
		if(isalpha(word[0]))
			switch(word[0]) {
				case 'a':
				case 'e': 
				case 'i': 
				case 'o': 
				case 'u':
				case 'y': 
					vowels++;
					break;
				default:
					consonants++;
			}
		else
			others++;
	}
	cout << vowels << " words beginning with vowels" << endl;
	cout << consonants << " words beginning with consonants" << endl;
	cout << others << " others" << endl;
	
	return 0;
}
