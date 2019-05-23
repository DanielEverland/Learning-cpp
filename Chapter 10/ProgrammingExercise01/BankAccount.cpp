#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(std::string depositorName, std::string accountNumber, double balance)
{
	this->depositorName = depositorName;
	this->accountNumber = accountNumber;
	this->balance = balance;
}

void BankAccount::Show() const
{
	using std::cout;
	using std::endl;

	cout << "Depositor " << depositorName
		<< " <" << accountNumber << ">: "
		<< balance << endl;
}

void BankAccount::Deposit(double amount)
{
	if (amount > 0)
		balance += amount;
}

double BankAccount::Withdraw(double amountRequested)
{
	using std::cout;
	using std::endl;

	double toWithdraw = 0;

	if (amountRequested > balance)
	{
		cout << "Too much money has been requested. Withdrawing difference." << endl;
		toWithdraw = balance;
	}
	else
	{
		toWithdraw = amountRequested;
	}

	balance -= toWithdraw;
	return toWithdraw;
}