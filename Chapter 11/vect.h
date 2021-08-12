// vect.h -- ����� Vector � ��������� << � ���������� ������ ���������
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR {
    class Vector {
    public:
        enum Mode { RECT, POL };
    // RECT - ��� ������ ������������� ���������, POL - ��� ������ ������� ���������
    private:
        double x;          // �������������� ��������
        double y;          // ������������ ��������
        double mag;        // ����� �������
        double ang;        // ����������� ������� � �������
        Mode mode;         // RECT ��� POL
    // �������� ������ ��� ��������� ��������
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();
    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const {return x;}       // �������� �������� x
        double yval() const {return y;}       // �������� �������� y
        double magval() const {return mag;}   // �������� ������
        double angval() const {return ang;}   // �������� ����
        void polar_mode();                    // ������������� ����� � POL
        void rect_mode();                     // ������������� ����� � RECT
    // ���������� ��������
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // ������
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };

}   // ����� ������������ ���� VECTOR
#endif