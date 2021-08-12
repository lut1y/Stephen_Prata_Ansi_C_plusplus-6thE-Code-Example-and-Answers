// textin2.cpp -- использование cin.get(char)
#include <iostream>
int textin2()
{
    using namespace std;
    char ch;
    int count = 0;

    cout << "Enter characters; enter # to quit:\n";
    cin.get(ch);        // использование функции cin.get(ch)
    while (ch != '#')
    {
        cout << ch;
        ++count;
        cin.get(ch);    // использование ее снова
    }
    cout << endl << count << " characters read\n";
// get rid of rest of line
    // while (cin.get() != '\n')
    //    ;
    //cin.get();
    return 0; 
}
