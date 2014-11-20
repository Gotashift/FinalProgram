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

int main()
{
	string output;
	// file open and writing
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writing account details" << endl;
	myfile.close();
	// no more file open and writing
	// file  readin
	string STRING;
	ifstream infile;
	infile.open("names.txt");
	getline(infile, STRING); // Saves the line in STRING.
	cout << STRING; // Prints our STRING.
	infile.close();
	string test;
	cin >> test;
	return 0;
}
