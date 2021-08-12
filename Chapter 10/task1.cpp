#include <iostream>
#include <cstring>
#include "task1.h"

BankAccount::BankAccount() {
	strcpy(name, "");
	numAcc = "";
	balance = 0.0;
}

BankAccount::BankAccount(char *name, const std::string & numAcc, double balance) {
	strcpy(this->name, name);
	this->numAcc = numAcc;
	if(balance > 0.0)
		this->balance = balance;
	else
		this->balance = 0.0;
}

BankAccount::~BankAccount() {
	std::cout << "Delete object with " << this->name << std::endl;
}

void BankAccount::show() {
	std::cout << "Name: " << name << " #" << numAcc << " -> " << balance << std::endl;
}

void BankAccount::add(double money) {
	balance += money;
}

void BankAccount::sell(double money) {
	if(money > balance) 
		std::cout << "Selling is so much!" << std::endl;
	else
		balance -= money;
}
