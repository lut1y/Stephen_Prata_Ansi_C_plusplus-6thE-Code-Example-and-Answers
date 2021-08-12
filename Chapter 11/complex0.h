#include <iostream>
#ifndef _COMPLEX0_H_
#define _COMPLEX0_H_
	class complex {
		private:
			double real;
			double image;
		public:
			complex();
			complex(double r, double im);
			
			complex operator~() const;
			complex operator+(const complex &c) const;
			complex operator-(const complex &c) const;
			complex operator*(const complex &c) const;
			complex operator*(double n) const;
			
			friend complex operator*(double n, const complex & cmplx );
			friend std::ostream & operator<<(std::ostream & os, const complex & cmplx);
			friend std::istream & operator>>(std::istream & is, complex & cmplx);
	};
#endif
