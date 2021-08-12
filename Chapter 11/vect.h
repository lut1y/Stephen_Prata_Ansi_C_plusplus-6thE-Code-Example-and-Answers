// vect.h -- класс Vector с операцией << и поддержкой режима координат
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR {
    class Vector {
    public:
        enum Mode { RECT, POL };
    // RECT - для режима прямоугольных координат, POL - для режима полярны координат
    private:
        double x;          // горизонтальное значение
        double y;          // вертикальное значение
        double mag;        // длина вектора
        double ang;        // направление вектора в градуса
        Mode mode;         // RECT или POL
    // Закрытые методы для установки значений
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}       // сообщает значение x
        double yval() const {return y;}       // сообщает значение y
        double magval() const {return mag;}   // сообщает модуль
        double angval() const {return ang;}   // сообщает угол
        void polar_mode();                    // устанавливает режим в POL
        void rect_mode();                     // устанавливает режим в RECT
    // Перегрузка операций
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // Друзья
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };

}   // конец пространства имен VECTOR
#endif
