// list.cpp -- использование списка
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>


void outint(int n) {std::cout << n << " ";}

int list_() {
    using namespace std;
    // list<<тип>> one(<количество значений>, <значение>); // список из 5 двоек
    list<int> one(5, 2); // список из 5 двоек
    int stuff[5] = {1, 2, 4, 8, 6};
    list<int> two;
    two.insert(two.begin(), stuff, stuff + 5 ); //  1 2 4 8 6
    int more[6] = {6, 4, 2, 4, 6, 5};
    list<int> three(two);						// 1 2 4 8 6
    three.insert(three.end(), more, more + 6);	// 1 2 4 8 6 6 4 2 4 6 5

    cout << "List one: ";
    for_each(one.begin(), one.end(), outint);
    cout << endl << "List two: ";
    for_each(two.begin(), two.end(), outint);
    cout << endl << "List three: ";
    for_each(three.begin(), three.end(), outint);
    
    three.remove(2);							// 1 4 8 6 6 4 4 6 5
    cout << endl << "List three minus 2s: ";
    for_each(three.begin(), three.end(), outint);
    three.splice(three.begin(), one);			// 2 2 2 2 2 1 4 8 6 6 4 4 6 5
    cout << endl << "List three after splice: ";
    for_each(three.begin(), three.end(), outint);
    cout << endl << "List one: ";
    for_each(one.begin(), one.end(), outint);
    three.unique();
    cout << endl << "List three after unique: ";
    for_each(three.begin(), three.end(), outint);
    three.sort();
    three.unique();
    cout << endl << "List three after sort & unique: ";
    for_each(three.begin(), three.end(), outint);
    two.sort();
    three.merge(two);
    cout << endl << "Sorted two merged into three: ";
    for_each(three.begin(), three.end(), outint);
    cout << endl;
    // cin.get();

    return 0; 
}
