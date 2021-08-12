// stock20.cpp -- дополненная версия
#include <iostream>
#include "stock20.h"
using namespace std;
// Конструкторы
Stock2::Stock2()        // конструктор по умолчанию
{
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock2::Stock2(const std::string & co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of shares can't be negative; "
                   << company << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot();
}

// Деструктор
Stock2::~Stock2() {}       // деструктор, не выводящий сообщений

// Другие методы
void Stock2::buy(long num, double price)
{
     if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock2::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock2::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock2::show() const
{
    using std::cout;
    using std::ios_base;
    // установка формата в #.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
        << "  Shares: " << shares << '\n';
    cout << "  Share Price: $" << share_val;
    // установка форматат в #.##
    cout.precision(2);
    cout << "  Total Worth: $" << total_val << '\n';

    // востановление исодного формата
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

const Stock2 & Stock2::topval(const Stock2 & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this; 
}
