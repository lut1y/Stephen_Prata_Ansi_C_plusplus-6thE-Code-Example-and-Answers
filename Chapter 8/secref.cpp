// secref.cpp -- отпределение и использование ссылки
#include <iostream>
int secref()
{
    using namespace std;
    int rats = 101;
    int & rodents = rats;   // rodents - это ссылка

    cout << "rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "rats address = " << &rats;
    cout << ", rodents address = " << &rodents << endl;

    int bunnies = 50;
    rodents = bunnies;       // можно ли изменить ссылку?
    cout << "bunnies = " << bunnies;
    cout << ", rats = " << rats;
    cout << ", rodents = " << rodents << endl;

    cout << "bunnies address = " << &bunnies;
    cout << ", rodents address = " << &rodents << endl;
    // cin.get();
    return 0; 
}
