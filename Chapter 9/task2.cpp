#include <iostream>
#include <string>
const int ArSize = 10;

// �������� �������
void strcount(std::string str);

int task2()
{
    using namespace std;
    std::string input;
    char next;

    cout << "Enter a line:\n";
    getline(std::cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(std::cin, input);
    }
    cout << "Bye\n";
    return 0;
}

void strcount(std::string str)
{
    using namespace std;
    static int total = 0;        // ����������� ��������� ����������
    int count = 0;               // �������������� ��������� ����������
	int i = 0;
	
    cout << "\"" << str <<"\" contains ";
    while (str[i++])               // ������� � ����� ������
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
