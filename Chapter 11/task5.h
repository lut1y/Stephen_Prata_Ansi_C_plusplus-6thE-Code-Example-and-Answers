// stonewt.h -- определение класса Stonewt
#ifndef _TASK5_H_
#define _TASK5_H_
class Stonewt2 {
public:
	enum Status { STINT, STFLOAT };
private:	
    enum {Lbs_per_stn = 14};      // фунтов на стоун
    int stone;                    // полны стоунов
    double pds_left;              // дробное число фунтов
    double pounds;                // общий вес в фунтах    
    Status status;
public:
	Stonewt2();                     // конструтор по умолчанию
    Stonewt2(double lbs, Status form = STINT);          // конструктор для значения в фунтах
    Stonewt2(int stn, double lbs, Status form = STINT); // конструктор для значения в стоуна и фунтах    
    ~Stonewt2();
    void show_lbs() const;        // отображение веса в формате фунтов
    void show_stn() const;        // отображение веса в формате стоунов
    Stonewt2 operator+(const Stonewt2 & st2) const;
    Stonewt2 operator-(const Stonewt2 & st2) const;
    Stonewt2 operator*(double n) const;
    
    friend std::ostream & operator<<(std::ostream & os, const Stonewt2 & st2);
};
#endif
