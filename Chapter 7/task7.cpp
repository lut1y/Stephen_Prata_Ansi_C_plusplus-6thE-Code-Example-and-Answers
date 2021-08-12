// arrfun3.cpp -- функция работы с массивами и применение const
#include <iostream>
const int Max = 5;

// Прототипы функций
double *fill_array7(double *begin, double *end);
void show_array7(double *begin, double *end);  // не изменять данные
void revalue7(double r, double *begin, double *end);

int task7()
{
    using namespace std;
    double properties[Max];

    double *count = fill_array7(properties, properties + Max);
    show_array7(properties, count);
    if (properties != count)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // неправильный ввод
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; Please enter a number: ";
        }
        revalue7(factor, properties, count);
        show_array7(properties, count);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

double* fill_array7(double *begin, double *end) {
    using namespace std;
    double temp;
    double *lim;
    int i;
    for (lim=begin, i=0; lim!=end; lim++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)    // неправильный ввод
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // сигнал завершения
            break;
        *lim = temp;
    }
    while(cin.get() != '\n') continue;
    return lim;
}

// Следующая функция может использовать, но не изменять, массив по адресу ar
void show_array7(double *begin, double *end)
{
    using namespace std;
    int i;
    const double *j;
    for (i=0, j=begin; j!=end; i++, j++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *j << endl;
    }
}

// Умножает на r каждый элемент ar[]
void revalue7(double r, double *begin, double *end)
{
    for (double *lim=begin; lim!=end; lim++)
        *lim *= r;
}
