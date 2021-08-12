// strings.cpp -- сохранение строк в массиве
#include <iostream>
#include <cstring>  // дл€ функции strlen()
int strings()
{
    using namespace std;
    const int Size = 15;
    char name1[Size];               // пустой массив
    char name2[Size] = "C++owboy";  // инициализаци€ массива
    // ѕримечание: некоторые релизации могут потребовать
    // ключевого слова static дл€ инициализации массива name2

    cout << "Howdy! I'm " << name2;
    cout << "! What's your name?\n";
    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';                // установка нулевого символа
    cout << "Here are the first 3 characters of my name: ";
    cout << name2 << endl;
    // cin.get();
    // cin.get();
    return 0;
}

  
  
