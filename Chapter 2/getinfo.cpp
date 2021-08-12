// getinfo.cpp -- ввод и вывод
#include <iostream>

int getinfo()
{
    using namespace std;
    
    int carrots;
    
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;                // ввод C++
    cout << "Here are two more. ";
    carrots = carrots + 2;
// следующая строка выполняет конкатенацию вывода
    cout << "Now you have " << carrots << " carrots." << endl;
	// cin.get();
	// cin.get();
    return 0;
}
