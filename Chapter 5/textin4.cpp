// textin4.cpp -- ������ �������� � ������� cin.get()
#include <iostream>
int textin4(void)
{
    using namespace std;
    int ch;                         // ������ ���� ���� int, � �� char
    int count = 0;

    while ((ch = cin.get()) != EOF) // �������� ����� �����
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
	return 0; 
}
