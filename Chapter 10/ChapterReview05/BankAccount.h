#pragma once

#include <string>

class BankAccount
{
public:
	BankAccount(std::string depositorName, std::string accountNumber, double balance = 0);

	void Show() const;
	void Deposit(double amount);
	double Withdraw(double amount);

private:
	std::string depositorName;
	std::string accountNumber;
	double balance;
};

