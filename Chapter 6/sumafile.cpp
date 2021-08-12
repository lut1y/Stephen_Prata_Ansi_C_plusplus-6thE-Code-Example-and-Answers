// sumafile.cpp -- ������ �����
#include <iostream>
#include <fstream>          // �������� ��������� �����-������
#include <cstdlib>          // ��������� exit()
const int SIZE = 60;
int sumafile()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // ������ ��� ��������� ��������� �����

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // �������������� inFile � ������
    if (!inFile.is_open())  // �� ������� ������� ����
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        // cin.get();    // keep window open
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // ���������� ����������� ���������

    inFile >> value;        // ����� ������� ��������
    while (inFile.good())   // ���� ���� ������� � �� ��������� EOF
    {
        ++count;            // ��� ���� ������� ��������
        sum += value;       // ���������� ������� �����
        inFile >> value;    // ���� ���������� �������� 
    }
    /* ����������� ������� �������� */
    	++count;
        sum += value;
    /********************************/    
    if (inFile.eof()) {
    	// ��������� ����� �����
        cout << "End of file reached.\n";
    } else if (inFile.fail())
    	// ���� ��������� �� ����������� �������
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else
    {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    inFile.close();         // �������� ������ � ������
    // cin.get();
    return 0;
}
