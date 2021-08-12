// textin4.cpp -- чтение символов с помощью cin.get()
#include <iostream>
int textin4(void)
{
    using namespace std;
    int ch;                         // должно быть типа int, а не char
    int count = 0;

    while ((ch = cin.get()) != EOF) // проверка конца файла
    {
        cout.put(char(ch));
        ++count;
    }
    cout << endl << count << " characters read\n";
	return 0; 
}
