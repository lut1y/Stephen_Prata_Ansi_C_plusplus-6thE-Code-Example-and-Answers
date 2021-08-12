#ifndef _TASK1_H_
#define _TASK1_H_
class BankAccount {
	private:
		char name[20];
		std::string numAcc;
		double balance;
	public:
		BankAccount();
		BankAccount(char *name, const std::string & numAcc, double balance);
		~BankAccount();
		void show();
		void add(double money);
		void sell(double money);
};

#endif
