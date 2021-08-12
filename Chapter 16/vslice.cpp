// vslice.cpp -- использование срезов valarray
#include <iostream>
#include <valarray>
#include <cstdlib>

const int SIZE = 12;
typedef std::valarray<int> vint;     // для упрощения объявлений
void show(const vint & v, int cols);
int vslice() {
    using std::slice;                // из <valarray>
    using std::cout;
    vint valint(SIZE);               // представляет 4 строки по 3 элемета

    int i;
    for (i = 0; i < SIZE; ++i)
        valint[i] = std::rand() % 10;
    cout << "Original array:\n";
    show(valint, 3);                 // отображение в виде 3 столбцов
    // slice(<начало>, <количество>, <шаг>)
    vint vcol(valint[slice(1,4,3)]); // извлечение 2-го столбца
    cout << "Second column:\n";
    show(vcol, 1);                   // отображение в 1 столбце
    vint vrow(valint[slice(3,3,1)]); // извлечение 2-ой строки
    cout << "Second row:\n";
    show(vrow, 3);
    valint[slice(2,4,3)]  = 10;      // assign to 2nd column
    cout << "Set last column to 10:\n";
    show(valint, 3);
    cout << "Set first column to sum of next two:\n";
    // операция + не определена для slices, поэтому преобразуем в valarray<int>
    valint[slice(0,4,3)]  = vint(valint[slice(1,4,3)])
                               + vint(valint[slice(2,4,3)]);
    show(valint, 3);
    // std::cin.get();
    return 0;
}

void show(const vint & v, int cols)
{
    using std::cout;
    using std::endl;

    int lim = v.size();
    for (int i = 0; i < lim; ++i)
    {
        cout.width(3);
        cout << v[i];
        if (i % cols == cols - 1)
            cout << endl;
        else
            cout << ' ';
    }
    if (lim % cols != 0)
        cout << endl;
}
