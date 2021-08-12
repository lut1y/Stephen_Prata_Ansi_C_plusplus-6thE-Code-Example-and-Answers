// ptrstr.cpp -- ������������� ���������� �� ������
#include <iostream>
#include <cstring>              // ���������� strlen(), strcpy()
int ptrstr()
{
    using namespace std;
    char animal[20] = "bear";   // animal ������� bear
    const char * bird = "wren"; // bird �������� ����� ������
    char * ps;                  // �� ����������������

    cout << animal << " and ";  // ����������� bear
    cout << bird << "\n";       // ����������� wren
    // cout << ps << "\n";      // ����� ���������� �����, �� ����� �������
    							// � �������� ���������� ���������

    cout << "Enter a kind of animal: ";
    cin >> animal;              // ���������, ���� �������� ������ 20 ��������
    // cin >> ps; ����� ������� ������, ����� ���������;
    // ps �� ��������� �� ���������� ������������

    ps = animal;                // ��������� ps � ��������� �� ������
    cout << ps << "!\n";       // ���������; �� ��, ��� � ���������� animal
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;

    ps = new char[strlen(animal) + 1];  // ��������� ������ ���������
    strcpy(ps, animal);         // ����������� ������ � ����� ���������
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    delete [] ps;
    // cin.get();
    // cin.get();
    return 0; 
}
