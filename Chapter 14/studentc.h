// studentc.h -- определеие класса Student с использованием включения
#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>   
#include <valarray>
class Student1 {   
private:
    typedef std::valarray<double> ArrayDb;
    std::string name;       // включенный объект строковый для имени
    ArrayDb scores;         // включенный объект массив для оценок
    // закрытый метод для вывода оценок
    std::ostream & arr_out(std::ostream & os) const;
public:
    Student1() : name("Null Student"), scores() {}
    // explicit отключает неявное преобразование
    explicit Student1(const std::string & s)
        : name(s), scores() {}
    explicit Student1(int n) : name("Nully"), scores(n) {}
    // устраняем запись Student doh = 5, а не doh[0] = 5
    Student1(const std::string & s, int n)
        : name(s), scores(n) {}
    Student1(const std::string & s, const ArrayDb & a)
        : name(s), scores(a) {}
    Student1(const char * str, const double * pd, int n)
        : name(str), scores(pd, n) {}
    ~Student1() {}
    double Average() const;
    const std::string & Name() const;
    double & operator[](int i);
    double operator[](int i) const;
	// друзья
    // ввод
    friend std::istream & operator>>(std::istream & is,
                                     Student1 & stu);  // 1 слово
    friend std::istream & getline(std::istream & is,
                                  Student1 & stu);     // 1 строка
    // Вывод
    friend std::ostream & operator<<(std::ostream & os,
                                     const Student1 & stu);
};

#endif
