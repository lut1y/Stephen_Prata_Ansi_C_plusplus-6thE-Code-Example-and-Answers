// arraynew.cpp -- использование операции new для массивов
#include <iostream>
int arraynew()
{
    using namespace std;
    double * p3 = new double [3]; // пространство для 3 double значений
    p3[0] = 0.2;                  // трактовать p3 как имя массива
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 + 1;                  // увеличение массива
    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << ".\n";
    p3 = p3 - 1;                  // возврат указателя в начало
    delete [] p3;                 // освобождение памяти
    // cin.get();
    return 0; 
}
