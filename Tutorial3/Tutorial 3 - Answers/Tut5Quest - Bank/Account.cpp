/*
 * Account.cpp
 */

#include "Account.h"
#include "Date.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int Account::accountCount = 0;


//Constructor which takes an account number and a double balance and Date of Creation.
Account::Account(int* bal, double* accNo, const Date& doc) 
	:balance(*bal), accountNo(*accNo), dateOfCreation(doc)
{
	++accountCount;
}

void Account::printDate() const
{
	cout << "Date of Birth is : ";
	dateOfCreation.print();
}

int Account::getCount()
{
	return accountCount;
}

//Credit method to add an amount to the current balance
bool Account::credit(double * in)
{
	if(in > 0)
	{
		this->balance += *in;
		return true;
	}

	return false;

}

//Debit method to remove an amount from the balance
bool Account::debit(double * in)
{
	if(in > 0)
	{
		this->balance -= *in;
		return true;
	}
	return false;
}

//Returns a string that contains the Account number and balance
string Account::getDetails() const
{
	ostringstream conAcc, conBal; //Output stream class to operate on strings.
	conAcc << this->accountNo;
	string toRet;
	toRet += "Account No: ";
	toRet += conAcc.str();
	toRet += " Balance : ";
	conBal << this->balance;
	toRet += conBal.str();
	return toRet;
}

//Return the account number
int Account::getAccNo()
{
	return accountNo;
}

//Deconstructor
Account::~Account() {
		// TODO Auto-generated destructor stub
}

