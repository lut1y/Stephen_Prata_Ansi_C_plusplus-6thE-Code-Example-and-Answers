#include <iostream>
#include <cstring>

struct chaff {
	char dross[20];
	int slag;
};

int task3() {
	using std::cout;
	using std::endl;
	chaff arr1[2];	
	
	chaff *v1 = new (arr1) chaff[2];
	chaff *v2 = new chaff[2];
	
	strcpy(v1[0].dross, "dross1");
	v1[0].slag = 1;
	strcpy(v1[1].dross, "dross2");
	v1[1].slag = 2;
	
	strcpy(v2[0].dross, "dross3");
	v2[0].slag = 3;
	strcpy(v2[1].dross, "dross4");
	v2[1].slag = 4;
	
	cout << "Memory addresses:\n" << "  static: " <<  (void *) v1 <<
    	 "  heap: " << v2 << endl;
	
	for(int i=0; i<2; i++) {
		cout << v1[i].dross << ": " << v1[i].slag << " at " << &v1[i] << "; ";
		cout << v2[i].dross << ": " << v2[i].slag << " at " << &v2[i] << "; " << endl;
	}
	return 0;
}
