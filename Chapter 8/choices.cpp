// choices.cpp -- ����� �������
#include <iostream>

template<class T>
T lesser(T a, T b)         // #1
{
    return a < b ? a : b;
}

int lesser (int a, int b)  // #2
{
    a = a < 0 ? -a : a;
    b = b < 0 ? -b : b;
    return a < b ? a : b;
}

int choices()
{
    using namespace std;
    int m = 20;
    int n = -30;
    double x = 15.5;
    double y = 25.9;

    cout << lesser(m, n) << endl;       // ������������ #2
    cout << lesser(x, y) << endl;       // ������������ #1 � double
    cout << lesser<>(m, n) << endl;     // ������������ #1 � int
    cout << lesser<int>(x, y)  << endl; // ������������ #1 � int

    // cin.get();
    return 0;
}
