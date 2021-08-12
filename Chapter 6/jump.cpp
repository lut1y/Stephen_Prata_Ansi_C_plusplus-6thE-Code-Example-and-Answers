// jump.cpp -- использование continue и break
#include <iostream>
const int ArSize = 80;
int jump()
{
    using namespace std;
    char line[ArSize];
    int spaces = 0; 

    cout << "Enter a line of text:\n";
    cin.get(line, ArSize);
    cout << "Complete line:\n" << line << endl;
    cout << "Line through first period:\n";
    for (int i = 0; line[i] != '\0'; i++)
    {
        cout << line[i];    // отображение символа
        if (line[i] == '.') // завершение, если это точка
            break;
        if (line[i] != ' ') // пропуск оставшейся части цикла
            continue;
        spaces++;
    }
    cout << "\n" << spaces << " spaces\n";
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}
