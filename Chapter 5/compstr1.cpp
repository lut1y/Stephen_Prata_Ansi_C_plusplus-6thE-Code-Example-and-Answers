// compstr1.cpp -- ��������� ����� � �������������� ��������
#include <iostream>
#include <cstring>     // �������� ��� strcmp()
int compstr1()
{
    using namespace std;
    char word[5] = "?ate";

    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    // cin.get();
    return 0; 
}
