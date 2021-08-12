// sayings2.cpp -- использование указателей на объекты
// компилировать вместе с string1.cpp
#include <iostream>
#include <cstdlib>      // (или stdlib.h) для rand(), srand()
#include <ctime>        // (или time.h) для time()
#include "string1.h"
const int ArSize = 10;
const int MaxLen = 81;
int sayings2() {
    using namespace std;
    String name;
    cout <<"Hi, what's your name?\n>> ";
    cin >> name;

    cout << name << ", please enter up to " << ArSize
         << " short sayings <empty line to quit>:\n";
    String sayings[ArSize];
    char temp[MaxLen];               // временное хранилище для строки
    int i;
    for (i = 0; i < ArSize; i++) {
        cout << i+1 << ": ";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;
        if (!cin || temp[0] == '\0') // пустая строка?
            break;                   // i не инкрементируется
        else
            sayings[i] = temp;       // перегруженное присваивание
    }
    int total = i;                   // общее количество прочитанны строк

    if (total > 0)
    {
        cout << "Here are your sayings:\n";
        for (i = 0; i < total; i++)
            cout << sayings[i] << "\n";

    // указатели для отслеживания кратчайшей и первой строки
        String * shortest = &sayings[0]; // инициализация первым объектом
        String * first = &sayings[0];
        for (i = 1; i < total; i++)
        {
            if (sayings[i].length() < shortest->length())
                shortest = &sayings[i];
            if (sayings[i] < *first)     // сравнение значений
                first = &sayings[i];     // присваивание адреса
        }
        cout << "Shortest saying:\n" << * shortest << endl;
        cout << "First alphabetically:\n" << * first << endl;

        srand(time(0));
        int choice = rand() % total; // выбор случайного индекса
    // Создание и инициализация объекта String с помощью new
        String * favorite = new String(sayings[choice]);
        cout << "My favorite saying:\n" << *favorite << endl;
        delete favorite;
    }
    else
        cout << "Not much to say, eh?\n";
    cout << "Bye.\n";
// keep window open
/*    if (!cin)
        cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
*/
    return 0; 
}
