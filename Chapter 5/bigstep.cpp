// bigstep.cpp -- цикл указанным пользователем шагом
#include <iostream>
int bigstep()
{
	using std::cout;    // объ€вление using
    using std::cin;
    using std::endl;;
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << endl;
    // cin.get();
    // cin.get();
    return 0;
}
