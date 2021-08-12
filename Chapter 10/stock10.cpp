// stock1.cpp – реализация класса Stock с добавленными конструкторами и деструктором
#include <iostream>
#include "stock10.h"

// конструткоры (версии с выводом сообщений)
Stock1::Stock1()        // конструтор по умолчанию
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock1::Stock1(const std::string & co, long n, double pr)
{
    std::cout << "Constructor using " << co << " called\n";
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
// деструктор класса
Stock1::~Stock1()        // деструктор класса, отображающий сообщение
{
    std::cout << "Bye, " << company << "!\n";
}

// другие методы
void Stock1::buy(long num, double price)
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

void Stock1::sell(long num, double price)
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

void Stock1::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock1::show()
{
    using std::cout;
    using std::ios_base;
    // set format to #.###
    ios_base::fmtflags orig = 
        cout.setf(ios_base::fixed, ios_base::floatfield); 
    std::streamsize prec = cout.precision(3);

    cout << "Company: " << company
        << "  Shares: " << shares << '\n';
    cout << "  Share Price: $" << share_val;
    // Установка формата в #.##
    cout.precision(2);
    cout << "  Total Worth: $" << total_val << '\n';

    // восстановление исходного формата
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}
