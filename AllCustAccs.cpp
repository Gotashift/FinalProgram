#include "Account.h"
#include "Checking.h"
#include "Saving.h"
#include "CD.h"
#include "Customer.h"


double printallaccs()
{
	double total;
	double check;
	double sav;
	double cd;
	int i = 0;
	int accounts = getCustInfo(accounts);
	while (i < accounts)
	{
		check = getAccountBal(Checking);
		sav = getAccountBal(saving);
		cd = getAccountBal(cd);
		total = total + check;
		total = total + sav;
		total = total + cd;
	}

}
