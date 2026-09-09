#include <iostream>
#include <string>
using namespace std;

int main()
{
	string x = "Jeman Kumar";
	cout << x << "\n";

	string fn = "John";
	string ln = "Doe";

	cout << fn + " " + ln << "\n";

	string txt  = "ABCDEFGHIJKLMNOP";
	cout << "The length of y is : " << txt.length() << "\n";
	cout << "The size   of y is : " << txt.size() << "\n";

	string y   = "Lanjo Lanjo";
	cout << "First letter of "<< y << " is " << y[0] << "\n";
	cout << "Last  letter of "<< y << " is " << y[y.length() - 1] << "\n";

	string z   = "Charlie Kirk";
	z[0] = 'S';
	cout << z << "\n";

	z.at(0) = 'C';
	cout << z << "\n";

	string v = "We are the \"Vikings\" Dawg";
	cout << v << "\n";

	return 0;
}

