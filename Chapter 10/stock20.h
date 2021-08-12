// stock20.h -- ����������� ������
#ifndef STOCK20_H_
#define STOCK20_H_
#include <string>

class Stock2
{
private:
    std::string company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock2();        // ����������� �� ���������
    Stock2(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock2();       // ����������
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock2 & topval(const Stock2 & s) const;
};

#endif
