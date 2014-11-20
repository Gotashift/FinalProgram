// inherit everything from account
#include <string>
#include <fstream>
#include <iostream>
#include "Account.h"
using std::string;
class savingacc : public Account
{   //set up deposit and withdrawal... if d then--if w then--- (in SavingsAccs.cpp)
public:
	//setter
	void SetIntRate(double InterestRate)  //set savings acc int rate
	{
		IntRate = InterestRate;
	}

	//getter
	double GetIntRate() //interest rate
	{
		return IntRate;
	}

private:
	string AccountType;
	double IntRate; //interest rate for the savings account
};
