// use_stuc.cpp -- использование составного класса
// компилировать вместе с studentc.cpp
#include <iostream>
#include "studentc.h"
using std::cin;
using std::cout;
using std::endl;

void set(Student1 & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int use_stuc() {
    Student1 ada[pupils] = 
        {Student1(quizzes), Student1(quizzes), Student1(quizzes)};
    int i;
    
    for (i = 0; i < pupils; ++i)
        set(ada[i], quizzes);
    cout << "\nStudent List:\n";
    for (i = 0; i < pupils; ++i)
        cout << ada[i].Name() << endl;
    cout << "\nResults:";
    for (i = 0; i < pupils; ++i)
    {
        cout << endl << ada[i];
        cout << "average: " << ada[i].Average() << endl;
    }
    cout << "Done.\n";
    // cin.get();

    return 0;
}

void set(Student1 & sa, int n) {
    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++)
        cin >> sa[i];
    while (cin.get() != '\n')
        continue; 
}
