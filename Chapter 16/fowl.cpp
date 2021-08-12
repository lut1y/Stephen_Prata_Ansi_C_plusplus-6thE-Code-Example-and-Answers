// fowl.cpp  -- auto_ptr - неудачный выбор
#include <iostream>
#include <string>
#include <memory>

int fowl() {
    using namespace std;
    /*auto*/shared_ptr<string> films[5] = {
        auto_ptr<string> (new string("Fowl Balls")),
        auto_ptr<string> (new string("Duck Walks")),
        auto_ptr<string> (new string("Chicken Runs")),
        auto_ptr<string> (new string("Turkey Errors")),
        auto_ptr<string> (new string("Goose Eggs"))
    };
    /*auto*/shared_ptr<string> pwin;
    pwin = films[2];   // films[2] утрачивает права владения

    cout << "The nominees for best avian baseball film are\n";
    for (int i = 0; i < 5; i++)
        cout << *films[i] << endl;
    cout << "The winner is " << *pwin << "!\n";
    // cin.get();
    return 0;
}
