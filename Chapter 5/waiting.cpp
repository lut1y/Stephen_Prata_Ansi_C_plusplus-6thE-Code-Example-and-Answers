// waiting.cpp -- использование clock() в цикле временной задержки
#include <iostream>
#include <ctime> // описывает функцию clock() и тип clock_t
int waiting()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;  // преобразование в тики
    cout << "starting\a\n";
    clock_t start = clock();
    while (clock() - start < delay )        // ожидание истечения времени
        ;                                   // обратите внимание на точку с запятой
    cout << "done \a\n";
    // cin.get();
    // cin.get();
    return 0; 
}
