#include <iostream>
#include <list>
#include <string>
#include <algorithm>

void fillList(std::list<std::string> & sp);
void outstring(std::string str);

int task8() {
	using std::list;
	using std::string;
	
	std::list<std::string> matList; 	
	std::list<std::string> patList; 	
	
	
	std::cout << "Mat List: " << std::endl;
	fillList(matList);
	matList.sort();
	for_each(matList.begin(), matList.end(), outstring);
	
	std::cout << "\nPat List: " << std::endl;
	fillList(patList);
	patList.sort();
	for_each(patList.begin(), patList.end(), outstring);
	
	matList.merge(patList);
	matList.sort();
	matList.unique();
	std::cout << "\nCommon List: " << std::endl;
	for_each(matList.begin(), matList.end(), outstring);
	
	return 0;
}

void fillList(std::list<std::string> & sp) {
	std::string temp;
	
	std::cout << "Enter friend's name: ";
	while(std::cin >> temp && temp != "quit") {
		sp.insert(sp.end(), temp);
		std::cout << "Enter next friend's name (or 'quit' for quit): ";	
	}
}
