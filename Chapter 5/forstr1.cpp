// forstr1.cpp -- ������������� ����� for ��� ������
#include <iostream>
#include <string>
int forstr1()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;

    // ����������� �������� � �������� �������
    for (int i = word.size() - 1; i >= 0; i--)
        cout << word[i];
    cout << "\nBye.\n";
    // cin.get();
    // cin.get();
    return 0; 
}
