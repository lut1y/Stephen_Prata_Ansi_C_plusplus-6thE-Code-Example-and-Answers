// while.cpp -- ������������� ����� while
#include <iostream>
const int ArSize = 20;
int while_()
{
    using namespace std;
    char name[ArSize];

    cout << "Your first name, please: ";
    cin >> name;
    cout << "Here is your name, verticalized and ASCIIized:\n";
    int i = 0;                  // ������ � ������ ������
    while (name[i] != '\0')     // ������������ �� ����� ������
    {
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;                    // �� �������� ���� ���
    }
    // cin.get();
    // cin.get();
    return 0; 
}
