// ourfunc.cpp -- ����������� ����������� �������
#include <iostream>
void simon(int);    // �������� ������� simon()

int ourfunc()
{
    using namespace std;
    simon(3);       // ����� ������� simon()
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    simon(count);   // ��� ���� ����� simon()
    cout << "Done!" << endl;
	// cin.get();
    // cin.get();
    return 0;
}

void simon(int n)   // ����������� ������� simon()
{
    using namespace std;

    cout << "Simon says touch your toes " << n << " times." << endl;
}                   // ������� void �� ������� ���������� return
