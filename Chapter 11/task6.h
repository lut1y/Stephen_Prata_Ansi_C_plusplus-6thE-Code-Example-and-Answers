#include <iostream>
#ifndef _TASK6_H_
#define _TASK6_H_
class Stonewt3 {
private:
    enum {Lbs_per_stn = 14};      // фунтов на стоун
    int stone;                    // полных стоунов
    double pds_left;              // дробное число фунтов
    double pounds;                // общий вес в фунта
public:
    Stonewt3(double lbs);          // конструктор для значения double фунтов
    Stonewt3(int stn, double lbs); // конструтор для значения в стоунах и фунтах
    Stonewt3();                    // конструктор по умолчанию
    ~Stonewt3();
    void show_lbs() const;        // отображение веса в формате фунтов
    void show_stn() const;        // отображение веса в формате стоунов
// Функции преобразования
    operator int() const;
    operator double() const;
// Функции сравнения
	bool operator>(Stonewt3 & st) const;
	bool operator<(Stonewt3 & st) const;
	bool operator==(Stonewt3 & st) const;
	bool operator!=(Stonewt3 & st) const;
	bool operator>=(Stonewt3 & st) const;
	bool operator<=(Stonewt3 & st) const;
	
	friend std::ostream & operator<<(std::ostream & os, const Stonewt3 & st3);
};


#endif
