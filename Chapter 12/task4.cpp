#include <iostream>
#include <cctype>  // или ctype.h
#include "stack.h"
int task4() {
    using namespace std;
    
    Stack st; // создание пустого стека
    Stack one(3);
    Item temp;
    
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(6);
    st.push(18);
    st.push(112);
    
    
    one.push(2);
    one.push(4);
    one.push(8);
    one.push(16);
	one.push(16);
	
	
	for(int i=0; i<3; i++) {
		st.pop(temp);
		cout << "st popped " << temp << endl;
	}
	
	cout << endl;
	
	for(int i=0; i< 3; i++) {
		one.pop(temp);
		cout << "one popped " << temp << endl;
	}
	
	
	one = st;
	one.pop(temp);
	cout << "one popped " << temp << endl;
	
	cout << endl;
	
	Stack two(15);
	for(int i=0; i<15; i++) {
		two.push(i*2);
	}
	
	cout << endl;
	
	while(!two.isempty()) {
		two.pop(temp);
		cout << "two popped " << temp << endl;
	}
	
	    
    cout << "Bye\n";
    return 0; 
}

