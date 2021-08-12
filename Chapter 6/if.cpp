// if.cpp -- использование оператора if
#include <iostream>
int if_()
{
    using std::cin;     // объявления using
	using std::cout;
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);		// посимвольный ввод
    while (ch != '.')   // завершение по окончанию предложения
    {
        if (ch == ' ')  // проверка ch на равенство предложения
            ++spaces;
        ++total;        // выполняется на каждом шаге цикла
        cin.get(ch);
    }
    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    // cin.get();
    // cin.get();
    return 0;
}
