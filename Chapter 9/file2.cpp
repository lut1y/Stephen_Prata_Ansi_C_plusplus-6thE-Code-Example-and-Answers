// file2.cpp -- содержит функции, вызываемые в file1.cpp
#include <iostream>
#include <cmath>
#include "coordin.h" // шаблоны структур, прототипы функций

// преобразование пр€моугольных координат в пол€рные
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance =
        sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // возврат стуктуры polar
}

// ќтображение пол€рных координат с преобразованием радиан в градусы
void show_polar (polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
