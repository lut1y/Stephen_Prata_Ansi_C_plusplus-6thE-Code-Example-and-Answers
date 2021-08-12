// stock10.h � ���������� ������ Stock � ������������ �������������� � ������������
#ifndef STOCK1_H_
#define STOCK1_H_
#include <string>
class Stock1
{
private:
    std::string company;
    long shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock1();        // ����������� �� ���������
    Stock1(const std::string & co, long n = 0, double pr = 0.0);
    ~Stock1();       // ����������
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif
