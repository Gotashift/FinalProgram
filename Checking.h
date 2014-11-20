// inherit everything from account
#include <string>
#include "Account.h"
using std::string;
class checkingacc: public Account
{
public:
	//within main acc class.cpp, makke protected variables that can be inherited by checking
	//saving and CD.h files 
	//setters
	void setTransaction(string transaction) //w or d?
	{
		Transaction = transaction;
	}

	void setMonthlyFee(int monthFee) //set monthly acc fee
	{
		MonthlyFee = monthFee;
	}

	void setOverdraftFee(int overDraft) //set overdraft fee
	{
		OverdraftFee = overDraft;
	}

	//getters
	string getTransaction()
	{
		return Transaction;
	}

	int getMonthlyFee()
	{
		return MonthlyFee;
	}

	int getOverdraftFee()
	{
		OverdraftFee;
	}
private:
	string Transaction;
	int MonthlyFee;
	int OverdraftFee;
};
