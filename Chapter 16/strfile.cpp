// strfile.cpp -- чтение строк из файла
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int strfile() {
     using namespace std;
     ifstream fin;
     fin.open("tobuy.txt");
     
     if (fin.is_open() == false) {
        cerr << "Can't open file. Bye.\n";
        exit(EXIT_FAILURE);
     }
     string item;
     int count = 0;
     
     getline(fin, item, ':');	// чтение до символа ':', ':' отбрасывается
     while (fin) { // до те пор, пока нет ошибок ввода     
        ++count;
        cout << count <<": " << item << endl;
        getline(fin, item,':');     
     }
     cout << "Done\n";
     fin.close();
	 // std::cin.get();
	 // std::cin.get();
     return 0;
}
