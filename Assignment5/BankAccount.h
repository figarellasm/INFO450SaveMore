#pragma once

class BankAccount { //base class

protected://variables that will be inherited by other bank account types
	double _balance;
	int _number;
	double _interestRate;

public://public methods of Bank Account base class
	BankAccount(double balance, int accountNumber, double interestRate)//base class constructor, will see this again for derived classes
	{
		_balance = balance;
		_number = accountNumber;
		_interestRate = interestRate;
	}
	virtual int Wirthdrawal(double amount)
	{
		if (_balance > amount)
		{
			_balance = -amount;
			return 0;
		}

		return -1;
	}

	virtual int Deposit(int amount)
	{
		_balance += amount;
		return 0;
	}

	virtual void Display()
	{
		cout << "Acount number: " << _number << endl;
		cout << "Balance: $" << _balance << endl;
		cout << "Interest rate: " << _interestRate << endl;
	}

	virtual void AssessInterest()
	{
		_balance = (1 + _interestRate) * _balance;
	}
};

