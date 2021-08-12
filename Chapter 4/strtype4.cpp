// strtype4.cpp -- ввод строки с пробелами
#include <iostream>
#include <string>               // обеспечение доступа к классу string
#include <cstring>              // библиотека обработки строк в стиле С
int strtype4()
{
    using namespace std;
    char charr[20]; 
    string str;

    cout << "Length of string in charr before input: " 
         << strlen(charr) << endl;
    cout << "Length of string in str before input: "
         << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);     // указание максимальной строки
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);          // теперь cin - аргумент; спецификатор длины отсутствует
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " 
         << strlen(charr) << endl;
    cout << "Length of string in str after input: "
         << str.size() << endl;
    // cin.get();

    return 0; 
}
