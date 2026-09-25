#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	cout << "Enter x: ";
	cin  >> x;
	cout << "Enter y: ";
	cin  >> y;
	cout << "x: " << x << "\n";
	cout << "y: " << y << "\n";
	x = x+y;
	y = x-y;
	x = x-y;
	cout << "x: " << x << "\n";
	cout << "y: " << y << "\n";
	return 0;
}
