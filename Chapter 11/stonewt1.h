// stonewt1.h -- усовершенствование определение класса Stonewt
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt1 {
private:
    enum {Lbs_per_stn = 14};      // фунтов на стоун
    int stone;                    // полных стоунов
    double pds_left;              // дробное число фунтов
    double pounds;                // общий вес в фунта
public:
    Stonewt1(double lbs);          // конструктор для значения double фунтов
    Stonewt1(int stn, double lbs); // конструтор для значения в стоунах и фунтах
    Stonewt1();                    // конструктор по умолчанию
    ~Stonewt1();
    void show_lbs() const;        // отображение веса в формате фунтов
    void show_stn() const;        // отображение веса в формате стоунов
// Функции преобразования
    operator int() const;
    operator double() const;
};
#endif
