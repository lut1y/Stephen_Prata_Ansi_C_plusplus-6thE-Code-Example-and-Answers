// support.cpp -- использование внешних переменных
// компилировать вместе с external.cpp
#include <iostream>
extern double warming;  // использование переменной warming из другого файла

// прототипы функций
void update(double dt);
void local();

using std::cout;
void update(double dt)      // модифицирует глобальную переменную
{
    extern double warming;  // необязательное повторное объявление
    warming += dt;          // использование глобальной переменной warming
    cout << "Updating global warming to " << warming;
    cout << " degrees.\n";
}

void local()                // использует локальную переменную
{
    double warming = 0.8;   // новая переменная скрывает внешнюю переменную

    cout << "Local warming = " << warming << " degrees.\n";
        // Доступ к глобальной переменной с помощью операции
        // разрешения контекста
    cout << "But global warming = " << ::warming;
    cout << " degrees.\n";
}
