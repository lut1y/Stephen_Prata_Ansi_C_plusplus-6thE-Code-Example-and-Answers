// strctfun.cpp -- functions with a structure argument
#include <iostream>
#include <cmath>

// объявления структур
struct polar
{
    double distance;      // расстояние от исходной точки
    double angle;         // направление от исходной точки
};
struct rect
{
    double x;             // расстояние по горизонтали от исходной точки
    double y;             // расстояние по вертикали от исходной точки
};

// Прототипы
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int strctfun()
{
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    while (cin >> rplace.x >> rplace.y)  // ловкое использование cin
    {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "Next two numbers (q to quit): ";
    }
    cout << "Done.\n";
    return 0;
}

// преобразование прямоугольных координат в полярные
polar rect_to_polar(rect xypos)
{
    using namespace std;
    polar answer;

    answer.distance =
        sqrt( xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;      // возврат структуры polar
}

// отображение полярных координат с преобразованием радиан в градусы
void show_polar (polar dapos)
{
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "distance = " << dapos.distance;
    cout << ", angle = " << dapos.angle * Rad_to_deg;
    cout << " degrees\n";
}
