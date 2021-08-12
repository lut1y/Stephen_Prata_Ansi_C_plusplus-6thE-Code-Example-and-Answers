// usett0.cpp -- использование базового класса
#include <iostream>
#include "tabtenn0.h"

int usett0 ( void ) {
    using std::cout;
    
    TableTennisPlayer0 player1("Chuck", "Blizzard", true);
    TableTennisPlayer0 player2("Tara", "Boomdea", false);
        
    player1.Name();
    if (player1.HasTable())
        cout << ": has a table.\n";
    else
        cout << ": hasn't a table.\n";
    player2.Name();
    if (player2.HasTable())
        cout << ": has a table";
    else
        cout << ": hasn't a table.\n";
    // std::cin.get();
    return 0;
}
