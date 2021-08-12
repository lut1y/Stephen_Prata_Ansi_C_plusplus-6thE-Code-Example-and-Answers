// arrstruc.cpp -- массив структур
#include <iostream>
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int arrstruc()
{
    using namespace std;
    inflatable guests[2] =          // инициализация массива структур
    {
        {"Bambi", 0.5, 21.99},      // первая структура в массиве
        {"Godzilla", 2000, 565.99}  // следующая структура в массиве
    };

    cout << "The guests " << guests[0].name << " and " << guests[1].name
         << "\nhave a combined volume of "
         << guests[0].volume + guests[1].volume << " cubic feet.\n";
    // cin.get();
    return 0; 
}
