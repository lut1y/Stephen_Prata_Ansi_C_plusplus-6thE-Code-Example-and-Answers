// copyit.cpp -- copy() и итераторы
#include <iostream>
#include <iterator>
#include <vector>

int copyit() {
    using namespace std;

    int casts[10] = {6, 7, 2, 9 ,4 , 11, 8, 7, 10, 5};
    vector<int> dice(10);
    // копирование из массива в вектор
    copy(casts, casts + 10, dice.begin());
    cout << "Let the dice be cast!\n";
    // создание итератора ostream
    ostream_iterator<int, char> out_iter(cout, " ");
    // копирование из вектора в выходной поток
    copy(dice.begin(), dice.end(), out_iter);
    cout << endl;
    cout <<"Implicit use of reverse iterator.\n";
    copy(dice.rbegin(), dice.rend(), out_iter);
    cout << endl;
    cout <<"Explicit use of reverse iterator.\n";
//    vector<int>::reverse_iterator ri;  // явное использование обратного итератора
    for (auto ri = dice.rbegin(); ri != dice.rend(); ++ri)
        cout << *ri << ' ';
    cout << endl;
	// cin.get();
    return 0; 
}
