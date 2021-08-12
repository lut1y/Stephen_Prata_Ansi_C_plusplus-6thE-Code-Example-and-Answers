// forloop.cpp -- представление цикла for loop
#include <iostream>
int forloop()
{
    using namespace std;
    int i;  // создание счетчика
//   инициализация; проверка ; обновление
    for (i = 0; i < 5; i++)
        cout << "C++ knows loops.\n";
    cout << "C++ knows when to stop.\n";
    // cin.get();
    return 0;
}
