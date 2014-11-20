#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::getline;

class Customer
{
public:
	void SetCustID(string CustID)
	{
		CustomerID = CustID;
	}
	void SetAccount(string AccID)
	{
		AccountID = AccID;
	}
	void SetCustName(string CustName)
	{
		CustomerName = CustName;
	}
	void SetCustSSN(string CustSSN)
	{
		CustomerSSN = CustSSN;
	}
	string GetCustSSN()
	{
		return CustomerSSN;
	}
	string GetCustName()
	{
		return CustomerName;
	}
	string GetAccID()
	{
		return AccountID;
	}
	string GetCustID()
	{
		return CustomerID;
	}
private:
	string CustomerSSN;
	string CustomerName;
	string AccountID;
	string CustomerID;
	int accounts; // number of accounts customer has
};
