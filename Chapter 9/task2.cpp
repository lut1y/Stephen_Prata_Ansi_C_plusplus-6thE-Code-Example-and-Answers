#include <iostream>
#include <string>
const int ArSize = 10;

// прототип функции
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
    static int total = 0;        // статическая локальная переменная
    int count = 0;               // автоматическая локальная переменная
	int i = 0;
	
    cout << "\"" << str <<"\" contains ";
    while (str[i++])               // переход к концу строки
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
