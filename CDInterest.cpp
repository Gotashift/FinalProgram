#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include "Account.h"
#include "CD.h"

using namespace std;
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::getline;
int IntrestRate = 0;
int TotalAmount = 0;
int months = AccountOpenDate - CurrentDate;
int m = 0;

//int AccountOpened = 0;

/*
depending on how long account is open, will decide how much interest
aka
Rate %	APY %†	Rate %	APY %†	Rate %	APY %†
28 - 179 Days*	0.03	0.03	0.03	0.03	0.03	0.03
06 - 11 Months	0.03	0.03	0.03	0.03	0.03	0.03
12 - 17 Months	0.05	0.05	0.05	0.05	0.05	0.05
18 - 23 Months	0.07	0.07	0.07	0.07	0.07	0.07
24 - 35 Months	0.10	0.10	0.10	0.10	0.10	0.10
36 - 47 Months	0.12	0.12	0.12	0.12	0.12	0.12
48 - 59 Months	0.15	0.15	0.15	0.15	0.15	0.15
60 - 119 Months	0.15	0.15	0.15	0.15	0.15	0.15
120 Months		0.15	0.15	0.15	0.15	0.15	0.15

*/
//if account is open for < year
//if (AccountOpened < 1)
//{
while(readfile.good())
{
	IntrestRate = .05;
	for (m <= months)
	{
			CurrentAmount = CurrentAmount * (1 + IntrestRate);
			m = m + 1;
	}
	TotalAmount = CurrentAmount;
	return TotalAmount;
}

//}

//else if (AccountOpened >= 1)
//{
	//IntrestRate = .08;
	//CurrentAmount = CurrentAmount * (1 + IntrestRate);
//}
