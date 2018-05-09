#pragma once
#include "BankAccount.h"

class Checking : public BankAccount//second bank account type: checking
{
private:
	void AssessFee()
	{
		if (_balance < 500)
		{
			_balance -= 5;
		}
	}
public:
	Checking(double balance, int accountNumber) : BankAccount(balance, accountNumber, 0) //constructor
	{

	}

	virtual int Wirthdrawal(double amount)
	{
		if (_balance > amount)
		{
			_balance -= amount;
			AssessFee();
			return 0;
		}

		return -1;
	}

	virtual int Deposit(double amount)
	{
		_balance += amount;
		AssessFee();
		return 0;
	}

	void OrderChecks()
	{
		_balance -= 15;
		AssessFee();
	}

};
