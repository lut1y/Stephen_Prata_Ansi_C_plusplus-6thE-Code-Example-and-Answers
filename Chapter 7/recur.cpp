// recur.cpp -- использование рекурсии
#include <iostream>
void countdown(int n);

int recur()
{
    countdown(4);           // вызов рекурсивной функции
    // std::cin.get();
    return 0;
}

void countdown(int n)
{
    using namespace std;
    cout << "Counting down ... " << n << endl;
    if (n > 0)
        countdown(n-1);     // функция вызывает сама себя
    cout << n << ": Kaboom!\n";
}
