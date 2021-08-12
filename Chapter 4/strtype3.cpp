// strtype3.cpp -- дополнительные средства класса string
#include <iostream>
#include <string>               // обеспечение доступа к классу string
#include <cstring>              // библиотека обработки строк в стиле С
int strtype3()
{
    using namespace std;
    char charr1[20]; 
    char charr2[20] = "jaguar"; 
    string str1;  
    string str2 = "panther";

    // Присваивание объектов string и символьных объектов
    str1 = str2;                // копирование str2 to str1
    strcpy(charr1, charr2);     // копирование charr2 to charr1
 
    // Добавление объектов string и символьных массивов
    str1 += " paste";           // добавление paste в конец str1
    strcat(charr1, " juice");   // добавление juice в конец charr1

    // Определение длины объекта string и строки в стиле С
    int len1 = str1.size();     // получение длины str1
    int len2 = strlen(charr1);  // получение длины charr1
 
    cout << "The string " << str1 << " contains "
         << len1 << " characters.\n";
    cout << "The string " << charr1 << " contains "
         << len2 << " characters.\n";
    // cin.get();

    return 0; 
}
