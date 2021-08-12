// ptrstr.cpp -- использование указателей на строки
#include <iostream>
#include <cstring>              // объявление strlen(), strcpy()
int ptrstr()
{
    using namespace std;
    char animal[20] = "bear";   // animal содржит bear
    const char * bird = "wren"; // bird содержит адрес строки
    char * ps;                  // не инициализировано

    cout << animal << " and ";  // отображение bear
    cout << bird << "\n";       // отображение wren
    // cout << ps << "\n";      // может отобразить мусор, но может вызвать
    							// и аварийое завершение программы

    cout << "Enter a kind of animal: ";
    cin >> animal;              // нормально, если вводится меньше 20 символов
    // cin >> ps; очень опасная ошибка, чтобы пробовать;
    // ps не указывает на выделенное пространство

    ps = animal;                // установка ps в указатель на строку
    cout << ps << "!\n";       // нормально; то же, что и применение animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // получение нового хранилище
    strcpy(ps, animal);         // копирование строки в новое хранилище
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    // cin.get();
    // cin.get();
    return 0; 
}
