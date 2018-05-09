#pragma once
#include "BankAccount.h"

class CertofDepo : public BankAccount//third bank account type: certificate of deposit...
									 //this account will have a deposite failure: -1
{
private:
	int _term;

public:
	CertofDepo(double balance, int accountNumber, int term) : BankAccount(balance, accountNumber, 0) //constructor that reference
	{
		_term = term;
		if (term >= 5)
		{
			_interestRate = .1;
		}
		else
		{
			_interestRate = .05;
		}
	}

	virtual int Withdrawal(double amount)
	{
		return -1;
	}

	virtual int Deposit(double amount)
	{
		return -1;//aforementioned deposit failure  
	}
};