// strtype3.cpp -- �������������� �������� ������ string
#include <iostream>
#include <string>               // ����������� ������� � ������ string
#include <cstring>              // ���������� ��������� ����� � ����� �
int strtype3()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "panther";

    // ������������ �������� string � ���������� ��������
    str1 = str2;                // ����������� str2 to str1
    strcpy(charr1, charr2);     // ����������� charr2 to charr1
 
    // ���������� �������� string � ���������� ��������
    str1 += " paste";           // ���������� paste � ����� str1
    strcat(charr1, " juice");   // ���������� juice � ����� charr1

    // ����������� ����� ������� string � ������ � ����� �
    int len1 = str1.size();     // ��������� ����� str1
    int len2 = strlen(charr1);  // ��������� ����� charr1
 
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    // cin.get();

    return 0; 
}
