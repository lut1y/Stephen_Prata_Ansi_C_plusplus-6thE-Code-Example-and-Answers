// stock00.h -- интерфейс класса Stock
// верси€ 00
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>  

class Stock0  // объ€вление класса
{
private: 
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    void acquire(const std::string & co, long n, double pr);
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};    // ќбратите внимание на точку с зап€той в конце

#endif
