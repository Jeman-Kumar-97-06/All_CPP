#include <iostream>
using namespace std;

int main(){
	int x;
	int y;
	int a;
	cout << "Enter x: ";
	cin  >> x;
	cout << "Enter y: ";
	cin  >> y;
	a = x;
	x = y;
	y = a;
	cout <<"x: " << x << "\n";
	cout <<"y: " << y << "\n";
	return 0;
}
