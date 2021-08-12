// twoarg.cpp -- функция с 2 аргументами
#include <iostream>
using namespace std;
void n_chars(char, int);
int twoarg()
{
    int times;
    char ch;

    cout << "Enter a character: ";
    cin >> ch;
    while (ch != 'q')        // q для завершения
    {
        cout << "Enter an integer: ";
        cin >> times;
        n_chars(ch, times); // функция с 2 аргументами
        cout << "\nEnter another character or press the"
                " q-key to quit: ";
        cin >> ch;
    }
    cout << "The value of times is " << times << ".\n";
    cout << "Bye\n";
    // cin.get();
    // cin.get();
    return 0;
}

void n_chars(char c, int n) // вывод значения c n раз
{
    while (n-- > 0)         // продолжение, пока n не достигнет 0
        cout << c;
}
