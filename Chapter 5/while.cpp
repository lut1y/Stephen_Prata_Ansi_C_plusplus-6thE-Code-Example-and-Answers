// while.cpp -- представление цикла while
#include <iostream>
const int ArSize = 20;
int while_()
{
    using namespace std;
    char name[ArSize];

    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;                  // начать с начала строки
    while (name[i] != '\0')     // обрабатывать до конца строки
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                    // не забудьте этот шаг
    }
    // cin.get();
    // cin.get();
    return 0; 
}
