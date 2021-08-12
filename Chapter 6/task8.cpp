#include <iostream>
#include <fstream>
#include <cstdlib>

int task8() {
	using namespace std;
	
	ifstream inFile;
	
	inFile.open("task8.cpp");
	
	if (!inFile.is_open())  // не удалось открыть файл
    {
        cout << "Could not open the file task8.cpp" << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
	
//	while(!inFile.eof()) {		
	while(inFile.good()) {		
		cout << (char) inFile.get();
	}
		
	inFile.close();	
	return 0;
}
