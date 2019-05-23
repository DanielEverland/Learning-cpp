// ProgrammingExercise01.cpp

#include <iostream>
#include "BankAccount.h"

int main()
{
	using namespace std;

	BankAccount firstBankAccount("Cunty McCuntFace", "54FD3AB3", 10000);
	BankAccount secondBankAccount("Poor Fucker", "57F23C6DB3", 100);

	firstBankAccount.Show();
	secondBankAccount.Show();

	cout << endl;

	cout << "Adding 10,000" << endl;
	firstBankAccount.Deposit(10000);

	firstBankAccount.Show();

	cout << "Trying to withdraw 10,000" << endl;
	double actualWithdraw = secondBankAccount.Withdraw(10000);
	cout << "Actually withdrew: " << actualWithdraw << endl;

	cout << endl;

	firstBankAccount.Show();
	secondBankAccount.Show();
}