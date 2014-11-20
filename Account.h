#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;
using std::vector;
using std::string;

class Account
{
public:
	double accountbal;
	string accounttype;
	void SetAccNum(int accnum)
	{
		AccountNum = accnum;
	}
	void SetAccName(string accname)
	{
		AccName = accname;
	}
	void setAccountBal(double accountbal)
	{
		AccountBal = accountbal;
	}
	void setAccountType(string accounttype)
	{
		AccountType = accounttype;
	}
	void setOpenDate(string opendate)
	{
		OpenDate = opendate;
	}
	int getAccountNum()
	{
		return AccountNum;
	}
	string getAccName()
	{
		return AccName;
	}
	double getAccountBal()
	{
		return AccountBal;
	}
	string getAccountType()
	{
		return AccountType;
	}
	string getOpenDate()
	{
		return OpenDate;
	}
	
private:
	int AccountNum;
	string AccName;
	double AccountBal;
	string AccountType;
	string OpenDate;
};
