// arrfun3.cpp -- функция работы с массивами и применение const
#include <iostream>
const int Max = 5;

// Прототипы функций
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);  // не изменять данные
void revalue(double r, double ar[], int n);

int arrfun3()
{
    using namespace std;
    double properties[Max];

    int size = fill_array(properties, Max);
    show_array(properties, size);
    if (size > 0)
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
        revalue(factor, properties, size);
        show_array(properties, size);
    }
    cout << "Done.\n";
    // cin.get();
    // cin.get();
    return 0;
}

int fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
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
        ar[i] = temp;
    }
    return i;
}

// Следующая функция может использовать, но не изменять, массив по адресу ar
void show_array(const double ar[], int n)
{
    using namespace std;
    for (int i = 0; i < n; i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << ar[i] << endl;
    }
}

// Умножает на r каждый элемент ar[]
void revalue(double r, double ar[], int n)
{
    for (int i = 0; i < n; i++)
        ar[i] *= r;
}
