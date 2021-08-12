#include <iostream>
#include <stdexcept>

#ifndef TASK3_H_
#define TASK3_H_

class bad_mean : public std::logic_error {
public:
	double z1;
	double z2;

	explicit bad_mean(double a = 0, double b = 0, 
			const std::string & s = "Exception")
		: std::logic_error(s), z1(a), z2(b) {};		
};	
#endif
