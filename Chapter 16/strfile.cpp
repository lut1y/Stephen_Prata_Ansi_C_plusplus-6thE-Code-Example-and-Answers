// strfile.cpp -- ������ ����� �� �����
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
     
     getline(fin, item, ':');	// ������ �� ������� ':', ':' �������������
     while (fin) { // �� �� ���, ���� ��� ������ �����     
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
