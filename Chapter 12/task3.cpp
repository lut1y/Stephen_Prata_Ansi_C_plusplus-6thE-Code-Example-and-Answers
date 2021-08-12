#include <iostream>
#include <cstring>
#include "task3.h"
using namespace std;
// Конструкторы
Stock2::Stock2() {       // конструктор по умолчанию
	company = new char[10];
	strcpy(company, "undefined");
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock2::Stock2(const char * co, long n, double pr){
    company = new char[strlen(co) + 1];
    strcpy(company, co);
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
Stock2::~Stock2() {
	delete [] company;
}       // деструктор, не выводящий сообщений

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

const Stock2 & Stock2::topval(const Stock2 & s) const
{
    if (s.total_val > total_val)
        return s;
    else
        return *this; 
}

std::ostream & operator<<(std::ostream & os, Stock2 & st) {    	
    using std::ios_base;
    // установка формата в #.###
    ios_base::fmtflags orig = 
        os.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = os.precision(3);

    os << "Company: " << st.company
        << "  Shares: " << st.shares << '\n';
    os << "  Share Price: $" << st.share_val;
    // установка форматат в #.##
    os.precision(2);
    os << "  Total Worth: $" << st.total_val << '\n';

    // востановление исодного формата
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}

std::ostream & operator<<(std::ostream & os, const Stock2 * st) {    	
    using std::ios_base;
    // установка формата в #.###
    ios_base::fmtflags orig = 
        os.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = os.precision(3);

    os << "Company: " << st->company
        << "  Shares: " << st->shares << '\n';
    os << "  Share Price: $" << st->share_val;
    // установка форматат в #.##
    os.precision(2);
    os << "  Total Worth: $" << st->total_val << '\n';

    // востановление исодного формата
    os.setf(orig, ios_base::floatfield);
    os.precision(prec);
    return os;
}
