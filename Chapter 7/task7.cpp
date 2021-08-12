// arrfun3.cpp -- ������� ������ � ��������� � ���������� const
#include <iostream>
const int Max = 5;

// ��������� �������
double *fill_array7(double *begin, double *end);
void show_array7(double *begin, double *end);  // �� �������� ������
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
        while (!(cin >> factor))    // ������������ ����
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
        if (!cin)    // ������������ ����
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
           cout << "Bad input; input process terminated.\n";
           break;
        }
        else if (temp < 0)     // ������ ����������
            break;
        *lim = temp;
    }
    while(cin.get() != '\n') continue;
    return lim;
}

// ��������� ������� ����� ������������, �� �� ��������, ������ �� ������ ar
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

// �������� �� r ������ ������� ar[]
void revalue7(double r, double *begin, double *end)
{
    for (double *lim=begin; lim!=end; lim++)
        *lim *= r;
}
