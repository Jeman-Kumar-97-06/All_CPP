//Problem Statement:
//Printing formatted outputs:
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << "Formatting the output:\n";
	cout << "--------------------------\n";

	double pi = 3.14159265;

	cout << fixed << setprecision(4);
	cout << "value of pi: " << pi << endl;

	cout << "The value of pi with 4 decimal places of total width 8: |" << setw(8) << pi << "|"<< endl;
	cout << "The value of pi with 4 decimal places of total width 10:|" << setw(10) << pi << "|" << endl;

	cout << "--Filling spaces with '-'--\n";
	cout << setfill('-');
	cout << "The value of pi with 4 decimal places of total width 8: |" << setw(8) << pi << "|" << endl;
	cout << "The value of pi with 4 decimal places of total width 10:|" << setw(10) << pi << "|" << endl;

	cout << "--printing scientific values--\n";
	cout << scientific;
	cout << "The value of pi in scientific format is: " << pi << endl;

	return 0;
}

