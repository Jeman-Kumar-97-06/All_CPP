#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter you age: ";
	cin  >> x;
	cout << ((x>18) ? "You are a Major" : "You are a Minor") << "\n";

	return 0;
}
