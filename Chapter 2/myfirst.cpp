// myfirst.cpp--выводит сообщение на экран

#include <iostream>                           // директива препроцессора
int myfirst()                                 // заголовок функции
{                                             // начало тела функции
    using namespace std;                      // делает видимыми определения
    cout << "Come up and C++ me some time.";  // сообщения
    cout << endl;                             // начало новой строки
    cout << "You won't regret it!" << endl;   // дополнительный вывод
// If the output window closes before you can read it,
// add the following code:
    // cout << "Press any key to continue." <<endl;
	// cin.get();                                                   
    return 0;                                 // завершение функции main()
}                                             // конец тела функции
