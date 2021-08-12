// pointer.cpp -- наша первая переменная-указатель
#include <iostream>
int pointer()
{
    using namespace std;
    int updates = 6;        // объявление переменной
    int * p_updates;        // объявление указателя на int

    p_updates = &updates;   // присвоить адрес int указателю

// Выразить значения двумя способами
    cout << "Values: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

// выразить адреса двумя способами
    cout << "Addresses: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

// изменить значение через указатель
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
    // cin.get();
    return 0; 
}
