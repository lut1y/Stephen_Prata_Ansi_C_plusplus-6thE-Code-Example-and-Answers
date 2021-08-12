// str1.cpp -- введение в класс string
#include <iostream>
#include <string>
// использование различных конструкторов класса string

int str1() {
    using namespace std;
    // string (const char * s)
    string one("Lottery Winner!");     // ctor #1
    cout << one << endl;               // перегруженная <<
    
    // string (size_type n, char c)
    string two(20, '$');               // ctor #2
    cout << two << endl;
    
    // string(const string & str)
    string three(one);                 // ctor #3
    cout << three << endl;
    
    
    one += " Oops!";                   // перегруженная +=
    cout << one << endl;
    two = "Sorry! That was ";
    three[0] = 'P';
    
    // string ()
    string four;                       // ctor #4
    four = two + three;                // перегруженная +, =
    cout << four << endl;
    char alls[] = "All's well that ends well";
    
    // string (const char * s, size_type n)
    string five(alls, 20);              // ctor #5
    cout << five << "!\n";
    
    // template<class lter>string(Iter begin, Iter end)
    string six(alls+6, alls + 10);     // ctor #6
    cout << six  << ", ";
    
    string seven(&five[6], &five[10]); // снова ctor #6
    cout << seven << "...\n";
    
    // string(const string & str, size_type pos, size_type n = npos)
    string eight(four, 7, 16);         // ctor #7
    cout << eight << " in motion!" << endl;
    // std::cin.get();
    return 0; 
}
