// structur.cpp -- a simple structure
#include <iostream>
struct inflatable   // structure declaration
{
    char name[20];
    float volume;
    double price;
};

int structur()
{
    using namespace std;
    inflatable guest =
    {
        "Glorious Gloria",  // значение name
        1.88,               // значение volume
        29.99               // значение price
    };  // guest - структурна€ переменна€ типа inflatable
// »нициализаци€ указанным значением
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };  // pal - втора€ переменна€ типа inflatable
// ѕримечание: некоторые реализации требуют использовани€ 
// static inflatable guest =

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
// pal.name - член name переменной pal
    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n";
    // cin.get();
    return 0; 
}
