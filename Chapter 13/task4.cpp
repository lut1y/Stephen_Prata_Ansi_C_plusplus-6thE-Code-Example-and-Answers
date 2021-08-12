#include <iostream>
#include "port.h"

int task4() {
	using std::cout;
	
	Port * ports[4] = {
		new Port("Gallo", "tawny", 20),
		new VintagePort("777", 30, "Toporiki", 1990),
		new Port("One", "ruby", 10),
		new VintagePort("Second", 32, "Na lubitelja", 2021)
	};
	
	for(int i=0; i<4; i++) {
		ports[i]->Show();
		cout << endl;
	}
	
	cout << "\"" << *ports[0] << "\" + 10" << endl;
	*ports[0] += 10;
	cout << "\"" << *ports[1] << "\" - 31" << endl;
	*ports[1] -= 31;
	cout << "\"" << *ports[1] << "\" - 31" << endl;
	*ports[1] -= 11;
	
	VintagePort vp;
	vp = (VintagePort &) (*ports[1]);
	cout << "Result VintagePort: ";
	cout << vp << endl;
	
	for(int i=0; i<4; i++) 
		delete ports[i];	
	
   cout << "Done.\n"; 	
	
	return 0;
}
