#include <iostream>
#include "complex0.h"

complex::complex() {
	real = image = 0.0;
}

complex::complex(double r, double im) {
	real = r;
	image = im;
}

complex complex::operator~() const {
	return complex(real, -image);
}

complex complex::operator+(const complex &c) const {
	return complex(real + c.real, image + c.image);
}

complex complex::operator-(const complex &c) const {
	return complex(real - c.real, image - c.image);
}

complex complex::operator*(const complex &c) const {
	// не помню как переумножаются компексные числа
	return complex(real * c.real, image * c.image);
}

complex complex::operator*(double n) const {
	return complex(real * n, image * n);
}

complex operator*(double n, const complex & cmplx) {
	return cmplx * n;
}

std::ostream & operator<<(std::ostream & os, const complex & cmplx) {
	os << "(" << cmplx.real << ", " << cmplx.image << "i)";
	return os;
}

std::istream & operator>>(std::istream & is, complex & cmplx) {
	std::cout << "real: ";
	is >> cmplx.real;
	std::cout << "imaginary: ";
	is >> cmplx.image;
	return is;
}
