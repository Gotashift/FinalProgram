// inherit everything from account
#include <string>
#include <fstream>
#include <iostream>
#include "Account.h"
using std::string;
class savingacc : public Account
{
public:
	//interest rate getter n setter
	//string of maturity date

	//setters
	void SetCDInt(double CDInterest) //set CD interest rate
	{
		CDInt = CDInterest;
	}

	void SetMatDate(string MaturityDate) //set maturity date
	{
		MatDate = MaturityDate;
	}

	//getters
	double GetCDInt() //interest rate
	{
		return CDInt;
	}

	string GetMatDate() //maturity rate
	{
		return MatDate;
	}

private:
	string AccountType;
	double CDInt; //interest rate for the CD account
	string MatDate;
};
