// sumafile.cpp -- чтение файла
#include <iostream>
#include <fstream>          // поддерка файлового ввода-вывода
#include <cstdlib>          // поддержка exit()
const int SIZE = 60;
int sumafile()
{
    using namespace std;
    char filename[SIZE];
    ifstream inFile;        // объект для обработки файлового ввода

    cout << "Enter name of data file: ";
    cin.getline(filename, SIZE);
    inFile.open(filename);  // ассоциирование inFile с файлом
    if (!inFile.is_open())  // не удалось открыть файл
    {
        cout << "Could not open the file " << filename << endl;
        cout << "Program terminating.\n";
        // cin.get();    // keep window open
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;          // количество прочитанных элементов

    inFile >> value;        // ввода первого значения
    while (inFile.good())   // пока ввод успешен и не достигнут EOF
    {
        ++count;            // еще один элемент прочитан
        sum += value;       // вычисление текущей суммы
        inFile >> value;    // ввод следующего значения 
    }
    /* Досчитываем крайнюю итерацию */
    	++count;
        sum += value;
    /********************************/    
    if (inFile.eof()) {
    	// достигнут конец файла
        cout << "End of file reached.\n";
    } else if (inFile.fail())
    	// ввод прекращен по неизвестной причине
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
    inFile.close();         // значение работы с файлом
    // cin.get();
    return 0;
}
