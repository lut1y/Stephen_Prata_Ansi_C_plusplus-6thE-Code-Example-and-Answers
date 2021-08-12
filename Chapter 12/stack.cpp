#include <iostream>
#include "stack.h"

Stack::Stack(int n) {	
	top = 0;
	if(n > MAX) {
		std::cout << "Max size is " << MAX << "!\n";
		std::cout << "There is created array with size " << MAX << std::endl;
		size = MAX;
	} else 
		size = n;
	pitems = new Item[size];		
}

Stack::Stack(const Stack & st) {
	size = st.size;
	top = st.top;
	delete [] pitems;
	pitems = new Item[size];
	for(int i=0; i < top; i++)
		pitems[i] = st.pitems[i];
	
}

Stack::~Stack() {
	delete [] pitems;
}

bool Stack::isempty() const {
	return top == 0;
}

bool Stack::isfull() const {
	return top == size;
}

bool Stack::push(const Item & item) {
	if(isfull()) {
		std::cout << "Stack overflow!\n";
		return false;
	}
	pitems[top++] = item;
	return true;	
}

bool Stack::pop(Item & item) {
	if(isempty()) {
		std::cout << "Stack is empty!\n";
		return false;
	}
	item = pitems[--top];
	return true;
}

Stack & Stack::operator=(const Stack & st) {
	if(this == &st) 
		return *this;
	delete [] pitems;
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for(int i=0; i < top; i++)
		pitems[i] = st.pitems[i];
	return *this;
}
