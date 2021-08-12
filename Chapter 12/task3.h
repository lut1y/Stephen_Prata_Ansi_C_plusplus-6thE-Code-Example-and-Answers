#ifndef TASK3_H_
#define TASK3_H_
#include <string>

class Stock2 {
private:
    char * company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock2();        // конструктор по умолчанию
    Stock2(const char * co, long n = 0, double pr = 0.0);
    ~Stock2();       // деструктор
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);    
    const Stock2 & topval(const Stock2 & s) const;
    
    friend std::ostream & operator<<(std::ostream & os, Stock2 & st);
    friend std::ostream & operator<<(std::ostream & os, const Stock2 * st);
};
#endif
