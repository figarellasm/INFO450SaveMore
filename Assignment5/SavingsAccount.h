#pragma once
#include "BankAccount.h"

class Savings : public BankAccount //first bank account type: savings
{
public:
	Savings(double balance, int accountNumber, double interestRate) : BankAccount(balance, accountNumber, interestRate) //constructor w/ base class constructor
	{
		SetInterest();
	}

	virtual int Withdrawal(double amount)
	{
		if (_balance > amount + 2)
		{
			_balance -= 2;
			_balance -= amount;
			SetInterest();
			return 0;
		}

		return -1;
	}

private: //private member variables of the savings class
	void SetInterest()
	{
		if (_balance <= 10000)
		{
			_interestRate = .01;
		}
		else
		{
			_interestRate = .02;
		}
	}
};