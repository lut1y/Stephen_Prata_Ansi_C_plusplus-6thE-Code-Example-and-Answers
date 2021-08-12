// strgstl.cpp -- применение STL к строке
#include <iostream>
#include <string>
#include <algorithm>

int strgstl() {
    using namespace std;
    string letters;
    
    cout << "Enter the letter grouping (quit to quit): ";
    while (cin >> letters && letters != "quit") {
        cout << "Permutations of " << letters << endl;
        sort(letters.begin(), letters.end());
        cout << letters << endl;
        // все возможные уникальные перестановки
        while (next_permutation(letters.begin(), letters.end()))
            cout << letters << endl;
        cout << "Enter next sequence (quit to quit): ";
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}
