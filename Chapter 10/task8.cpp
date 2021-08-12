#include <iostream>
#include "task8.h"
#include <cstring>
#include <cctype>

void showItems(Item & item);
char menu(const char *str);

int task8() {
	Item item;
	
	UList list = UList();
	if(list.isEmpty())
		std::cout << "This is list is empty!" << std::endl;
	
	char choice;	
	
	while((choice = menu("abq")) != 'q') {
		switch(choice) {
			case 'a': {				
				std::cout << "Enter number in list: ";	
				std::cin >> item;		
				list.addItem(item);
				break;
			}
			case 'b':
				list.visit(showItems);
				std::cout << '\n';
				break;
			default:
				std::cout << "Invalid choice" << std::endl;
		}
	}
	std::cout << "Bye!" << std::endl;
	return 0;
	
}

char menu(const char *str) {
	using std::cout;
	using std::cin;
	
	char choice;
	
	cout << "a) add item    b) show" << std::endl;
	cout << "q) quit" << std::endl;
	cout << "Choice a punct of menu: ";
	while((choice = cin.get()) && isspace(choice)) continue; 
	while(std::cin.get() != '\n') continue;
	while(!strchr(str, choice)) {
		cout << "Your choice is invalid! Try again: ";
		while((choice = cin.get()) && isspace(choice)) continue;
		while(std::cin.get() != '\n') continue;
	}	
	return choice;
}

void showItems(Item & item) {
	std::cout << "Item: " << item << "   ";
}
