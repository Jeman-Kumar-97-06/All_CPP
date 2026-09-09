#include <iostream>
using namespace std;

//Operator priority:
// () --> *,/,% --> +,- --> <, >, <=, >=, --> ==, != --> && --> || --> =

int main()
{
	int x = 10;
	int y = 3;

	cout << (x+y) << "\n";
	cout << (x-y) << "\n";
	cout << (x*y) << "\n";
	cout << (x/y) << "\n";
	cout << (x%y) << "\n";

	int z = 5;
	++z;
	cout << z << "\n";
	--z;
	cout << z << "\n";

	cout << "bool: " << (10 > 3.14)<< "\n";

	int passwordLength = 5;
	cout << (passwordLength >= 8) << "\n";
	cout << (passwordLength <  8) << "\n";

	int age = 23;
	cout << (age <= 18 || age <= 10) << "\n"; //AND
	cout << (age >= 18 && age >= 20) << "\n"; //AND

	int pws = 1997;
	cout << (pws != 1997)<<"\n"; //returns false

	return 0;
}
