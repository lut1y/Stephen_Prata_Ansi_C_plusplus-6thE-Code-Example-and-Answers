// brass.h  -- классы банковских счетов
#ifndef BRASS_H_
#define BRASS_H_
#include <string>
// Класс счета Brass Account
class Brass {
private:
    std::string fullName;
    long acctNum;	// номер счета
    double balance;
public:
    Brass(const std::string & s = "Nullbody", long an = -1,
                double bal = 0.0);
    void Deposit(double amt);	// внесение денег на счет
    virtual void Withdraw(double amt);	// снятие денег со счета
    double Balance() const;
    virtual void ViewAcct() const;	// вывод состояния счета
    virtual ~Brass() {}
};

// класс счета Brass Plus
class BrassPlus : public Brass {
private:
    double maxLoan;	// максимальное значение овердрафта (превышение кредита)
    double rate;	// процентная ставка
    double owesBank; // величина овердрафта банку
public:
    BrassPlus(const std::string & s = "Nullbody", long an = -1,
            double bal = 0.0, double ml = 500,
            double r = 0.11125);
    BrassPlus(const Brass & ba, double ml = 500, 
		                        double r = 0.11125);
    virtual void ViewAcct()const;
    virtual void Withdraw(double amt);
    void ResetMax(double m) { maxLoan = m; }
    void ResetRate(double r) { rate = r; };
    void ResetOwes() { owesBank = 0; }
};

#endif
