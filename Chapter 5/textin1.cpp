// textin1.cpp -- ������ �������� � ����� while
#include <iostream>
int textin1()
{
    using namespace std;
    char ch;
    int count = 0;      // ������������� �������� �����
    cout << "Enter characters; enter # to quit:\n";
    cin >> ch;          // ��������� �������
    while (ch != '#')   // �������� �������
    {
        cout << ch;     // ����������� �������
        ++count;        // ������� �������
        cin >> ch;      // ��������� ���������� �������
    }
    cout << endl << count << " characters read\n";
// get rid of rest of line
     // while (cin.get() != '\n')
        // ;
//cin.get();
    return 0; 
}
