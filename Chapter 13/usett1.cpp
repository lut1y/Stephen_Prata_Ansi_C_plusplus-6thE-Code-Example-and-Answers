// usett1.cpp -- использование базового и произвольного классов
#include <iostream>
#include "tabtenn1.h"

int usett1 ( void )
{
    using std::cout;
    using std::endl;
    
    TableTennisPlayer1 player1("Tara", "Boomdea", false);
    RatedPlayer1 rplayer1(1140, "Mallory", "Duck", true);
    
    rplayer1.Name();          // объект произвольного класса использует метод базового класса
    if (rplayer1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player1.Name();           // объект базового класса использует метод базового класса
    if (player1.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    cout << "Name: ";
    rplayer1.Name();
    cout << "; Rating: " << rplayer1.Rating() << endl;
// инициализация объекта RatedPlayer с помощью объекта TableTennisPlayer
    RatedPlayer1 rplayer2(1212, player1);
    cout << "Name: ";
    rplayer2.Name();
    cout << "; Rating: " << rplayer2.Rating() << endl;
    // std::cin.get();
    return 0;
}
