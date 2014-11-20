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

int menu()
{
	//this shit is  a comment to update
	string input;
	cout << "Enter in which feature you would like to use" << endl;
	cout << "T for Transactions.  L for list of all accounts.  M for Monthly Statement" << endl;
	cout << "S for all Savings accounts. C for all checking accounts. Z for all CD accounts " << endl;
	cout << "V for value of all accounts, X for save and exit " << endl;
	cin >> input;
	if (input == "T")
	{
		Transactions();
	}
	if (input == "L")
	{
		ListedAccs();
	}
	if (input == "M")
	{
		MonthlyStatement();
	}
	if (input == "S")
	{
		SavingsAccs();
	}
	if (input == "C")
	{
		CheckingAccs();
	}
	if (input == "Z")
	{
		CDAccs();
	}
	if (input == "V")
	{
		ValueAccs();
	}
	if (input == "X")
	{
		return 0;
	}
	return 0;
}
