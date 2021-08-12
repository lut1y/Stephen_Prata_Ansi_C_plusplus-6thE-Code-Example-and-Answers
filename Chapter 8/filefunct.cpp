//filefunc.cpp -- функция с параметром ostream &
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void file_it(ostream & os, double fo, const double fe[],int n);
const int LIMIT = 5;
int filefunct()
{
    ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        cout << "Can't open " << fn << ". Bye.\n"; // не удалось открыть файл
        exit(EXIT_FAILURE);
    }
    double objective;
    cout << "Enter the focal length of your "
            "telescope objective in mm: ";
    cin >> objective;
    double eps[LIMIT];
    cout << "Enter the focal lengths, in mm, of " << LIMIT
         << " eyepieces:\n";
    for (int i = 0; i < LIMIT; i++)
    {
        cout << "Eyepiece #" << i + 1 << ": ";
        cin >> eps[i];
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(cout, objective, eps, LIMIT);
    cout << "Done\n";
    // cin.get();
    // cin.get();
    return 0;
}

void file_it(ostream & os, double fo, const double fe[],int n)
{
    // сохранение исходного состояния форматирования
    ios_base::fmtflags initial;
    // ios_base::fixed - переводим объект в режим использования
    // фиксированной десятичной точки
    initial = os.setf(ios_base::fixed, ios_base::floatfield);
    // precision(0) - указывает количество цифр, отображаемых
    // справа от десятичной точки (если объект в режиме fixed)
    std::streamsize sz = os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.precision(1);
    // устанавливаем ширину поля для следующей операции вывода
    os.width(12);
    os << "f.l. eyepiece";
    os.width(15);
    os << "magnification" << endl;
    for (int i = 0; i < n; i++)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << endl;
    }
    // восстановление исходного состояния форматирования
    os.setf(initial, ios_base::floatfield);
    os.precision(sz);
}
