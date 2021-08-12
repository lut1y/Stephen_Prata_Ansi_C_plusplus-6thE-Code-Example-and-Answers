#include "emp.h"

// ---- class abstr_emp ------
abstr_emp::abstr_emp() {
	fname = "no firstname";
	lname = "no lastname";
	job = "no job";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln,
				const std::string & j) {
	fname = fn;
	lname = ln;
	job = j;	
}

void abstr_emp::ShowAll() const {
	std::cout << "First name: " << fname << std::endl;
	std::cout << "Last name: " << lname << std::endl;
	std::cout << "Job: " << job << std::endl;
}

void abstr_emp::SetAll() {
	std::cout << "First name: ";
	std::cin >> fname;
	std::cout << "Last name: ";
	std::cin >> lname;
	std::cout << "Job: ";
	std::cin >> job;
}

std::ostream & operator<<(std::ostream & os, abstr_emp & e) {
	std::cout << e.lname << " " << e.fname << ", job: ";
	std::cout << e.job << std::endl;
}

abstr_emp::~abstr_emp() { /*std::cout << "abstr_emp was deleted!";*/ }
// ---------------------------
// ---- class employee ------
employee::employee() : abstr_emp() {}

employee::employee(const std::string &fn, const std::string & ln,
	const std::string & j) : abstr_emp(fn, ln, j) {}


void employee::ShowAll() const {
	abstr_emp::ShowAll();
}

void employee::SetAll() {
	abstr_emp::SetAll();
}
// --------------------------
// ---- class manager ------
manager::manager() : abstr_emp::abstr_emp(),
	inchargeof(0)  {}
	
manager::manager(const std::string & fn, const std::string & ln,
		const std::string & j, int ico)
	: abstr_emp(fn, ln, j), inchargeof(ico) {}
		
manager::manager(const abstr_emp & e, int ico) 
	: abstr_emp(e), inchargeof(ico) {}
	
manager::manager(const manager & m) 
	: abstr_emp(m), inchargeof(m.inchargeof) {}
	
void manager::ShowAll() const {
	abstr_emp::ShowAll();
	std::cout << "In charge of: " << InChargeOf() << std::endl;
}

void manager::SetAll() {
	abstr_emp::SetAll();
	std::cout << "In charge of: ";
	std::cin >> InChargeOf();
}
// -------------------------
// ---- class fink ------
fink::fink() : abstr_emp(),
	reportsto("no reports")  {}
	
fink::fink(const std::string & fn, const std::string & ln,
		const std::string & j, const std::string & rpo)
	: abstr_emp(fn, ln, j), reportsto(rpo) {}
		
fink::fink(const abstr_emp & e, const std::string &rpo) 
	: abstr_emp(e), reportsto(rpo) {}
	
fink::fink(const fink & e) 
	: abstr_emp(e), reportsto(e.reportsto) {}
	
void fink::ShowAll() const {
	abstr_emp::ShowAll();
	std::cout << "Reports to: " << ReportsTo() << std::endl;
}

void fink::SetAll() {
	abstr_emp::SetAll();
	std::cout << "Reports to: ";
	std::cin >> ReportsTo();
}
// ----------------------
// ---- class highfink ------
highfink::highfink() : abstr_emp(), manager(),	fink() {}
	
highfink::highfink(const std::string & fn, const std::string &ln,
		const std::string & j, const std::string & rpo,	int ico)
	: abstr_emp(fn, ln, j), manager(fn, ln, j, ico), fink(fn, ln, j, rpo) {}
				
highfink::highfink(const abstr_emp & e, const std::string & rpo, int ico) 
	: abstr_emp(e), manager(e, ico), fink(e, rpo) {}


highfink::highfink(const manager & m, const std::string & rpo) 
	: abstr_emp(m), manager(m), fink(m, rpo) {}
	
highfink::highfink(const highfink & h) 
	: abstr_emp(h), manager(h), fink(h) {}
	
void highfink::ShowAll() const {	
	abstr_emp::ShowAll();
	std::cout << "In charge of: " << manager::InChargeOf() << std::endl;
	std::cout << "Reports to: " << fink::ReportsTo() << std::endl;
}

void highfink::SetAll() {	
	abstr_emp::SetAll();
	std::cout << "In charge of: ";
	std::cin >> manager::InChargeOf();
	std::cout << "Reports to: ";
	std::cin >> fink::ReportsTo();
}
// ----------------------
