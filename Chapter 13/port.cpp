#include <iostream>
#include <cstring>
#include "port.h"

#ifndef _PORT_H_
#define	_PORT_H_

Port::Port(const char * br, const char * st, int b) {
	brand = new char[strlen(br) + 1];
	strcpy(brand, br);
	strncpy(style, st, 19);
	style[20] = '\0';
	bottles = b;
}

Port::Port(const Port & p) {
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);	
	bottles = p.bottles;
}

Port & Port::operator=(const Port & p) {
	if(this == &p) return *this;
	delete brand;
	brand = new char[strlen(p.brand) + 1];
	strcpy(brand, p.brand);
	strncpy(style, p.style, 19);
	style[20] = '\0';	
	bottles = p.bottles;
	return *this;
}

Port & Port::operator+=(int b) {
	bottles += b;
	return *this;
}

Port & Port::operator-=(int b) {
	if (bottles < b) 
		std::cout << "!!!You want to take so much bottle!!!\n";
	else 
		bottles -= b;	
	return *this;
	
}

void Port::Show() const {
	using std::cout;
	using std::endl;
	
	cout << "Brand: " << brand << endl
		 << "Kind: " << style << endl
		 << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream & os, const Port & p) {
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

// методы класса VintagePort
VintagePort::VintagePort() : Port() {
	nickname = new char[16];
	strcpy(nickname, "nickname noname");
	year = 0;
}

VintagePort::VintagePort(const char * br, int b,
		const char * nn, int y) 
		: Port(br, "vintage", b), year(y) {
	nickname = new char[strlen(nn) + 1];
	strcpy(nickname, nn);
}

VintagePort::VintagePort(const VintagePort & vp) : Port(vp) {
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort & vp) {
	if(this == &vp)
		return *this;
	Port::operator=(vp);
	nickname = new char[strlen(vp.nickname) + 1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

void VintagePort::Show() const {
	using std::cout;
	using std::endl;
	
	Port::Show();
	cout << "Nickname: " << nickname << endl
		 << "Year: " << year << endl;
}

ostream & operator<<(ostream & os, const VintagePort & vp) {
	os << (const Port &) vp;
	os << ", " << vp.nickname << ", " << vp.year;
	return os;
}
#endif
