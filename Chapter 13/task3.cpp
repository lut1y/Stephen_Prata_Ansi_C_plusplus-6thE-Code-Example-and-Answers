#include "task3.h"
#include <cstring>

// абстрактный класс
BaseABC::BaseABC(const char * l, int r) {
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

BaseABC::BaseABC(const BaseABC & rs) {
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
}

BaseABC::~BaseABC() { delete [] label; }

BaseABC & BaseABC::operator=(const BaseABC & rs) {
    if (this == &rs)
        return *this;
    delete [] label;
    label = new char[std::strlen(rs.label) + 1];
    std::strcpy(label, rs.label);
    rating = rs.rating;
    return *this;
}

std::ostream & operator<<(std::ostream & os, const BaseABC & rs) {
    os << "Label: " << rs.label << std::endl;
    os << "Rating: " << rs.rating << std::endl;
    return os;
}

// методы класса baseDMA
void baseDMA3::View() const {
//	std::cout << label << ": " << rating << std::endl;
	std::cout << *this;
}

baseDMA3 & baseDMA3::operator=(const baseDMA3 & rs) {
	if (this == &rs)
        return *this;
    BaseABC::operator=(rs);  // копирование базовой части    
    return *this;
}

std::ostream & operator<<(std::ostream & os, const baseDMA3 & rs) {
	os << (BaseABC &) rs;
	return os;
}

// методы класса lacksDMA
lacksDMA3::lacksDMA3(const char * c, const char * l, int r)
    : BaseABC(l, r) {
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA3::lacksDMA3(const char * c, const baseDMA3 & rs)
    : BaseABC(rs) {
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA3::View() const {
	std::cout << *this;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA3 & ls) {
    os << (const BaseABC &) ls;
    os << "Color: " << ls.color << std::endl;
    return os;
}

// методы класса hasDMA
hasDMA3::hasDMA3(const char * s, const char * l, int r)
         : BaseABC(l, r) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA3::hasDMA3(const char * s, const BaseABC & rs)
         : BaseABC(rs) {
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA3::hasDMA3(const hasDMA3 & hs)
         : BaseABC(hs) {  // вызывает конструктор копирования базового класса
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

void hasDMA3::View() const {
	std::cout << *this;
}

hasDMA3::~hasDMA3() {
    delete [] style;
}

hasDMA3 & hasDMA3::operator=(const hasDMA3 & hs) {
    if (this == &hs)
        return *this;
    BaseABC::operator=(hs);  // копирование базовой части
    delete [] style;         // подготовка к операции new для style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}
    
std::ostream & operator<<(std::ostream & os, const hasDMA3 & hs) {
    os << (const BaseABC &) hs;
    os << "Style: " << hs.style << std::endl;
    return os;
}
