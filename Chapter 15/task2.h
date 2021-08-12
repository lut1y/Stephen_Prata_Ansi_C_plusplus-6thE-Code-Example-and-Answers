#include <iostream>
#ifndef TASK2_H_
#define TASK2_H_
#include <stdexcept>

namespace TASK2 {
	class bad_hmean : public std::logic_error {
	private:
	    double v1;
	    double v2;
	public:
	    explicit bad_hmean(double a = 0, double b = 0,
			const std::string & s = "bad_hmean"); 					
		double v1_val() { return v1; }
		double v2_val() { return v2; }
	};
	bad_hmean::bad_hmean(double a, double b,
			const std::string & s)
		: std::logic_error(s), v1(a), v2(b) {}
		
	
	class bad_gmean : public std::logic_error {
	private:
	    double w1;
	    double w2;
	public:
	    explicit bad_gmean(double a = 0, double b = 0,
			const std::string & s = "bad_gmean");
		double w1_val() { return w1; }
		double w2_val() { return w2; }
	};
	bad_gmean::bad_gmean(double a, double b,
			const std::string & s) 
		: std::logic_error(s), w1(a), w2(b) {}	
}
#endif
