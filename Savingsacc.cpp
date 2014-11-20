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

int STotal = 0;
int newesttotal = 0;

// if savings account, it will take the current variable initially set at 0 and add the amount of the checking account to it
double myaccount()
{
	while (readfile.good())
	{
		newesttotal = amount;
		STotal = STotal + newesttotal;
	}
}
