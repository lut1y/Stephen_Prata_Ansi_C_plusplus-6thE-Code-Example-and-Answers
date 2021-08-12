// use_new.cpp -- использование операции new
#include <iostream>
int use_new()
{
    using namespace std;
    int nights = 1001;
    int * pt = new int;         // выделение пространства для int
    *pt = 1001;                 // сохранение в нем значения

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    double * pd = new double;   // выделение пространства для double
    *pd = 10000001.0;           // сохранение в нем значения

    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt);
    cout << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof pd;
    cout << ": size of *pd = " << sizeof(*pd) << endl;
    // cin.get();
    return 0;
}
