// vect.cpp -- методы класса Vector
#include <cmath>
#include "task2.h"   // включает <iostream>
using std::sqrt;
using std::sin;
using std::cos;
using std::atan;
using std::atan2;
using std::cout;

namespace VECTOR1
{
    // вычисляет количество градусов в одном радиане
    const double Rad_to_deg = 45.0 / atan(1.0);
    // должно быть приблизительно равно 57.2957795130823

    // Закрытые методы
    // вычисляет модуль из x и y
    /*void Vector::set_mag() {
        mag = sqrt(x * x + y * y);
    }*/

    /*void Vector::set_ang() {
        if (x == 0.0 && y == 0.0)
            ang = 0.0;
        else
            ang = atan2(y, x);
    }*/

    // устанавливаем x по полярным координатам
    /*void Vector::set_x() {
        x = mag * cos(ang);
    }*/

    // устанавливаем y по полярным координатам
    /*void Vector::set_y() {
        y = mag * sin(ang);
    }*/

    // Открытые методы
    double Vector::magval() const {   			  // сообщает модуль
    	return sqrt(x * x + y * y);
	}
    double Vector::angval() const {
		if (x == 0.0 && y == 0.0)
            return 0.0;
        else
            return atan2(y, x);
	}
    
    
    Vector::Vector() {           // конструктор по умолчанию
        x = y = 0.0;
        mode = RECT;
    }

    // Конструирует вектор по прямоугольным координатам, если form равно RECT
    // (по умолчанию), или полярным координатам, если form равно POL
    Vector::Vector(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
             x = n1;
             y = n2;
        }
        else if (form == POL) {
             x = n1 * cos(n2 / Rad_to_deg);
             y = n1 * sin(n2 / Rad_to_deg);             
        } else {
             cout << "Incorrect 3rd argument to Vector() -- ";
             cout << "vector set to 0\n";
             x = y = 0.0;
             mode = RECT;
        }
    }

    // устанавливает вектор по прямоугольным координатам , если form равно RECT
    // (по умолчанию), или по полярным координатам, если form равно POL
    void Vector:: reset(double n1, double n2, Mode form) {
        mode = form;
        if (form == RECT) {
             x = n1;
             y = n2;             
        }
        else if (form == POL) {
        	// Обратное преобразование из POL в RECT
            x = n1 * cos(n2 / Rad_to_deg);
            y = n1 * sin(n2 / Rad_to_deg);              
        } else {
             cout << "Incorrect 3rd argument to Vector() -- ";
             cout << "vector set to 0\n";
             x = y = 0.0;
             mode = RECT;
        }
    }

    Vector::~Vector() {}   // деструктор
    

    void Vector::polar_mode() {  // устанавливаем режим полярны координат
        mode = POL;
    }

    void Vector::rect_mode() {   // устанавливаем режим прямоугольных координат
        mode = RECT;
    }

    // Перегрузка операций
    // Сложение двух векторов
    Vector Vector::operator+(const Vector & b) const {
        return Vector(x + b.x, y + b.y);
    }

    // вычитание ветора b из вектора a
    Vector Vector::operator-(const Vector & b) const {
        return Vector(x - b.x, y - b.y);
    }

    // Смена знака на противоположный
    Vector Vector::operator-() const {
        return Vector(-x, -y);
    }

    // умножение вектора на n
    Vector Vector::operator*(double n) const {
        return Vector(n * x, n * y);
    }

    // Дружественные методы
    // Умножение n на вектор a
    Vector operator*(double n, const Vector & a) {
        return a * n;
    }

    // Отображает прямоугольные координаты, если mode равно RECT,
    // или отображает полярные координаты, если mode равно POL
    std::ostream & operator<<(std::ostream & os, const Vector & v) {
        if (v.mode == Vector::RECT)
             os << "(x,y) = (" << v.x << ", " << v.y << ")";
        else if (v.mode == Vector::POL)
        {
             os << "(m,a) = (" << v.magval() << ", "
                 << v.angval() * Rad_to_deg << ")";
        }
        else
             os << "Vector object mode is invalid";
        return os; 
    }

}  // конец пространства имен VECTOR
