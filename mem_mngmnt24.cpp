#include <iostream>
#include <string>
using namespace std;

int main() {
	int    myInt;
	float  myFloat;
	double myDouble;
	char   myChar;

	cout << sizeof(myInt)    << "\n";
	cout << sizeof(myFloat)  << "\n";
	cout << sizeof(myDouble) << "\n";
	cout << sizeof(myChar)   << "\n";

	cout << "---------------------------------\n";

	int* ptr = new int;
	*ptr	 = 35;
	cout << *ptr << "\n";

	cout << "---------------------------------\n";

	delete ptr;

	return 0;
}
